#include "std_lib_facilities.h"

int main()
{
	std::cout<<"Kérem írja be az 'a' értékét (majd üssön 'enter'-t):\n";
	int a;
	std::cin>>a;
	std::cout<<"Kérem írja be a 'b' értékét (majd üssön 'enter'-t):\n";
	int b;
	std::cin>>b;
	std::cout<<"A megadott számok a=="<<a<<" és b=="<<b<<"\nA számokat most megcseréljük:\n";
		a=a+b;
		b=a-b;
		a=a-b;
	cout<<"Csere után a=="<<a<<" és b=="<<b<<"\n";
}
	
