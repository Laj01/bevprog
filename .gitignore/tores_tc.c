#define MAX_TITKOS 4096
#define OLVASAS_BUFFER 256
#define KULCS_MERET 5
#define _GNU_SOURCE

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <vector>

using namespace std;

double
atlagos_szohossz (const char *titkos, int titkos_meret)
{
 
  int sz = 0;
  for (int i = 0; i < titkos_meret; ++i)
    if (titkos[i] == ' ')
      ++sz;

  return (double) titkos_meret / sz;
}

int
tiszta_lehet (const char *titkos, int titkos_meret)
{


  double szohossz = atlagos_szohossz (titkos, titkos_meret);

  return szohossz > 6.0 && szohossz < 9.0
    && strcasestr (titkos, "hogy") && strcasestr (titkos, "nem")
    && strcasestr (titkos, "az") && strcasestr (titkos, "ha");
}


void
exor (const char kulcs[], int kulcs_meret, char titkos[], int titkos_meret)
{

  int kulcs_index = 0;

  for (int i = 0; i < titkos_meret; ++i)
    {

      
      titkos[i] = titkos[i] ^ kulcs[kulcs_index];
      kulcs_index = (kulcs_index + 1) % kulcs_meret;

    }

}


int
exor_tores (const char kulcs[], int kulcs_meret, char titkos[],
	    int titkos_meret)
{

  exor (kulcs, kulcs_meret, titkos, titkos_meret);

  return tiszta_lehet (titkos, titkos_meret);

}

int
main (void)
{

  char kulcs[KULCS_MERET];
  char titkos[MAX_TITKOS];
  char *p = titkos;
  int olvasott_bajtok;
vector<char> kulcsvektor;

for(int i='A';i<='Z';i++)
kulcsvektor.push_back(i);
for(int i='0';i<='9';i++)
kulcsvektor.push_back(i);


  while ((olvasott_bajtok =
	  read (0, (void *) p,
		(p - titkos + OLVASAS_BUFFER <
		 MAX_TITKOS) ? OLVASAS_BUFFER : titkos + MAX_TITKOS - p)))
    p += olvasott_bajtok;

 
  for (int i = 0; i < MAX_TITKOS - (p - titkos); ++i)
    titkos[p - titkos + i] = '\0';


  for (int ii = 0; ii < kulcsvektor.size(); ++ii)
    for (int ji = 0; ji < kulcsvektor.size(); ++ji)
      for (int ki = 0; ki < kulcsvektor.size(); ++ki)
	for (int li = 0; li < kulcsvektor.size(); ++li)
	  for (int mi = 0; mi < kulcsvektor.size(); ++mi)
	  
		  {
		    kulcs[0] = kulcsvektor[ii];
		    kulcs[1] = kulcsvektor[ji];
		    kulcs[2] = kulcsvektor[ki];
		    kulcs[3] = kulcsvektor[li];
		    kulcs[4] = kulcsvektor[mi];

                   
		    if (exor_tores (kulcs, KULCS_MERET, titkos, p - titkos))
		      printf("Kulcs: [%c%c%c%c%c]\nTiszta szoveg: [%s]\n", ii, ji ,ki, li, mi,titkos);
		   
		    exor (kulcs, KULCS_MERET, titkos, p - titkos);
		  }

  return 0;
}
