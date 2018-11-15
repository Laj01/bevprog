#include "std_lib_facilities.h"
int main()
{
	try
	{
		/*cout<< "Success!\n";//---> Cout helyett cout*/

		/*cout<< "Success!\n";//---> a " lemaradt a \n után*/

		/*cout<< "Success"<<"!\n";//---> a " lemaradt a !\n-előtt, illetve a ; a végéről*/

		/*cout<< "success" <<'\n'; //---> a "" lemaradtak a success előtt és mögött*/

		/*int res=7;
		vector<int>v(10);
		v[5]=res;
		cout<<"Success!\n";//---> string helyett int-et használjunk*/

		/*vector<int>v(10);
		v[5]=7;
		if(v[5]=7)
			cout<<"Success!\n";//---> v(5) helyett v[5], illetve != helyett =*/

		/*if(true)
			cout <<"Success!\n";
		else
			cout<<"Fail!\n";//---> (cond)-helyett írjunk (true)-t*/

		/*bool c=false;
		if(!c)
			cout<<"Success!\n";
		else
			cout<<"Fail!\n";//--->  c=false-t írjuk át c=true-ra vagy if(c)-t írjuk át if(!c)-re*/

		/*string s="ape";
		bool c="fool"<s;
		if(!c)
			cout<<"Success!\n";//---> if(c)-t írjuk át if(!c)-re és a bool-ról lemaradt azt l-betű*/

		/*string s="ape";
		if(s=="fool")
			cout<<"Fail!\n";
		else
			cout<<"Success!\n";//---> én hozzáadtam egy else statementet (mert lusta vagyok)*/

		/*string s="ape";
		if(s=="fool")
			cout<<"Fail!\n";
		else
			cout<<"Success!\n";//---> ugyanaz, mint az előbb, csak a cout után még itt lemaradt egy < jel*/

		/*string s="ape";
		if(s!="fool")
			cout<<"Success!\n";//---> s+ helyett s!= ,illetve megint lemaradt egy < jel*/

		/*vector<int>v(5);
		for(int i=0; i<v.size();++i);
			cout<< "Success!\n";//---> vector<char>v(5) helyett <int>, 0<v.size() helyett i<v.size()*/

		/*vector<int>v(5);
		for(int i=0; i<=v.size();++i);
			cout<< "Success!\n";//--->vector<char>v(5) helyett <int>*/

		/*string s="Success!\n";
		for (int i = 0; i < 6; ++i);
			cout<<s;//--->s[i] helyett s, for(;;) után ; */

		/*if(true)
			cout<<"Success!\n";
		else
			cout<<"Fail!\n";//---> a then kifejezés nem tudom minek kellett oda*/

		/*int x = 2000;
		int c = x;
		if(c == 2000)
			cout<<"Success!\n";//---> 'char c = x'-t írjuk át 'int'-re*/

		/*string s = "Success!\n";
		for(int i=0; i<10;++i);
			cout << s ;//---> for(;;) után ;  illetve s[i] helyett csak s-t íratunk ki*/

		/*vector<int>v(5);
		for(int i=0; i<=v.size();++i);
			cout << "Success!\n";//--->a vector típusát adjuk meg, <int>*/

		/*int i = 0;
		int j = 9;
		while(i<10) 
			++i;
		if(j<i)
			cout << "Success!\n";//---> ++j helyett ++i*/

		/*int x = 2;
		double d = 5/x;
		if(d = 2*x+0.5)
			cout << "Success!\n";//--->(2-x) helyett csak x-el osszunk,
							     //különben 0-val történik az osztás illetve
							     //== helyett csak =-t használjunk*/

		/*string s = "Success!\n";
			for(int i = 0; i<=10; ++i)
			cout << s[i];//--->nem kell a <char> a string után, mert nem vektort adunk meg*/
			
		/*int i = 0;
		int j = 9;
		while(i<10)
			++i;
		if(j<i)
			cout << "Success!\n";//--->deklaráljuk a j-t 9-re,
							     //így pontosan csak 1szer fogja kiírni az outputot
							     //és az i-t növeljük mindig 1-el*/

		/*int x = 4;
		double d = 5/(x-2);
		if(d = 2*x+0.5)
			cout << "Success!\n";//--->itt nekem kiírta hiba nélkül*/

		cout << "Success!\n";//--->cin helyett cout, gondolom gyógyfeladat*/

		return 0;
	}

	catch (exception& e)
	{
		cerr<< "error: " <<e.what()<<'\n';
		return 1;
	}

	catch(...)
	{
		cerr<< "Oops: unknown exception!\n";
		return 2;
	}
}