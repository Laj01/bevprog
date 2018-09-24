#include "std_lib_facilities.h"

int main(){
	int s=0;
	int c=1;
	while(c!=0){
		c<<=1;
		++s;}
	cout<<"Egy gépi szó maximális hossza "<<s<<" karakter.\n";
}
