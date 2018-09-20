#include "std_lib_facilities.h"
int main()
{
	cout<<"Enter the first name and the age of the person you want to write to:\n";
	string first_name;
	int age;
	cin>> first_name;
	cin>> age;
	if (age>0 && age<110)
	{
	cout<<"If you have any mutual friend to ask about,\ntype his/her first name and gender ('m'-for male/'f'-for female) in :\nFor example: 'John m'\n";
	string friend_name;
	char friend_sex;
	cin>> friend_name;
	cin>> friend_sex;
		cout<<"\nDear "<<first_name<<", \nhow are you? I miss you. I wish we could meet in person and chat about the good old times.\nI hear you just had a birthday and you are "<<age<<" years old.”\n";
		if (age<12)
			cout<<"Next year you will be "<<++age<<".\n";
		if (age==17)
			cout<<"Next year you will be able to vote.\n";
		if (age>70)
			cout<<"Hope you are enjoying retirement.\n";	
	cout<<"Have you heard anything about "<<friend_name<<"?\n";
		if (friend_sex=='m')
			cout<<"If you see "<<friend_name<<" please ask him to call me.\n";
		if (friend_sex=='f')
			cout<<"If you see "<<friend_name<<" please ask her to call me.\n";	
	cout<<"Yours sincerely,________\n";
	}	
	else{
		cout<<"you're kidding!";
	}
}
	
