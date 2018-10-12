#include "std_lib_facilities.h"

void
kiir (vector<double>tomb, int db)
{
int i;
for (i=0; i<db; i++)
cout<<"PageRank ["<<i<<"]: "<<tomb[i]<<endl;
}

double tavolsag(vector<double>PR,vector<double>PRv,int db)
{
double tav = 0.0;
int i;
for(i=0;i<db;i++)
tav +=abs(PR[i] - PRv[i]);
return tav;
}

int main(void)
{
vector<vector<double>>L = {
{0.0, 0.0, 1.0 / 3.0, 0.0},
{1.0, 1.0 / 2.0, 1.0 / 3.0, 1.0},
{0.0, 1.0 / 2.0, 0.0, 0.0},
{0.0, 0.0, 1.0 / 3.0, 0.0}
};

vector<double>PR = {0.0, 0.0, 0.0, 0.0};
vector<double>PRv = {1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0, 1.0 / 4.0};

long int i,j,h;
i=0; j=0; h=5;

for (;;)
{
for(i=0;i<4;i++)
PR[i] = PRv[i];
for (i=0;i<4;i++)
{
double temp=0;
for (j=0;j<4;j++)
temp+=L[i][j]*PR[j];
PRv[i]=temp;
}

if ( tavolsag(PR,PRv, 4) < 0.00001)
break;
}
kiir (PR,4);
return 0;

}