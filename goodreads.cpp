#include <iostream>
#include <fstream>


using namespace std;


string name; int phone; string email;
float date; string title; string word; float current_page;

	

void reg()
{	
	cout<<"Name: "<<endl;cin>>name;
	cout<<"Phone.No: ";cin>>phone;
	cout<<"Email: ";cin>>email;
	
}

void details()
{
	cout<<"Name: "<<name<<endl;
	cout<<"Email: "<<email<<endl;	
}

void current()
{
	cout<<"Title: "<<title<<endl;
	cout<<"Current page: "<<current_page<<endl;
	cout<<"Date to finish: "<<date<<endl;	
}

void will()
{
	cout<<"Title: "<<title<<endl;
}


void finish()
{
	cout<<"Title: "<<name<<endl;
	cout<<"Date finish: "<<date<<endl;	
	cout<<" Share your take-away: "<<word<<endl;
}

int main(){
	
	int choice;
cout<<"###### DISPLAY ########"<<endl;
cout<<"Choose your option: "<<endl;
cout<<"1. Register"<<endl;
cout<<"2. My details"<<endl;
cout<<"3. My Current reading"<<endl;
cout<<"4. My will read-book"<<endl;
cout<<"5. Ayyy, you finish-read"<<endl;
cout<<"6. Exit"<<endl;
cout<<"########################"<<endl;
cin>>choice;

switch (choice) {

case 1:
	reg();
	main();
case 2:
details();
main();

case 3:
current();
main();

case 4:
will();
main();

case 5:
finish();
main();

default:
cout<<" Enter your choice"<<endl;
main();
}
	
return 0;	
	
}






