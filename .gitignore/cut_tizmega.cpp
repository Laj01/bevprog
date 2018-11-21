#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void beolvas (vector <char> &v)
{
	char betu;
	int max_meret = 10485760;
	ifstream fin("hs_alt_Hs_Celera_chr2.fa");
	fin>>betu;
	for(int i = 0; i < max_meret; i++)
	{
		v.push_back(betu);
	}
	fin.close();
}


void kiir (vector<char> v)
{
	int max_meret = 10485760;
	ofstream fout("masolat.txt");
	for(int i = 0; i < v.size(); i++)
	{
	fout<< v[i];
	}
	fout.close();
}

int main()
{

vector<char> v;
beolvas(v);
kiir(v);
return 0;

}
