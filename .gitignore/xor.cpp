#include "std_lib_facilities.h"

int main(){
	cout<<"Adjon meg 2 számot szóközzel elválasztva:\n";
	int a=0;
	int b=0;
	cin>>a>>b;
	cout<<"Az Ön által megadott számok: a="<<a<<", b="<<b<<" .\n";
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"A két számot felcseréljük: a="<<a<<", b="<<b<<" .\n";
}
