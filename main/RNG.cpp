#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	int enter;
	int again;
	main:
	system("cls");
	cout<<"==============================="<<endl;
	cout<<"RANDOM NUMBER GENERATOR"<<endl;				cout<<"==============================="<<endl;
	cout<<"Choose The Range You Want"<<endl;
	cout<<"1. (1-10)"<<endl;
	cout<<"2. (1-100)"<<endl;
	cout<<"3. (1-1000)"<<endl;
	cout<<"4. (Custom)"<<endl;
	cout<<"Enter : ";
	cin>>enter;
	a:
	system("cls");
	if (enter == 1){
		srand (time (0));
		int i;
		i = (rand ()%10) + 1;
		cout<<"=========================="<<endl;
		cout<<"You Got A Number : "<<i<<endl;
		cout<<"=========================="<<endl;
		cout<<"1. Go Again (1)"<<endl;
		cout<<"2. Go Back To Main Menu (2)"<<endl;
		cout<<"Enter : ";
		cin>>again;
		if (again == 1) goto a;
		else goto main;
	}
	b:
	system("cls");		
	if(enter == 2){
		srand (time (0));
		int i;
		i = (rand ()%100) + 1;
		cout<<"=========================="<<endl;
		cout<<"You Got A Number : "<<i<<endl;
		cout<<"=========================="<<endl;
		cout<<"1. Go Again (1)"<<endl;
		cout<<"2. Go Back To Main Menu (2)"<<endl;
		cout<<"Enter : ";
		cin>>again;
		if (again == 1) goto b;
		else goto main;
	}
	c:
	system("cls");
	if (enter == 3){
		srand (time (0));
		int i;
		i = (rand ()%1000) + 1;
		cout<<"=========================="<<endl;
		cout<<"You Got A Number : "<<i<<endl;
		cout<<"=========================="<<endl;
		cout<<"1. Go Again (1)"<<endl;
		cout<<"2. Go Back To Main Menu (2)"<<endl;
		cout<<"Enter : ";
		cin>>again;
		if (again == 1) goto c;
		else goto main;
	}
	if (enter == 4){
		int number,snum;
		cout<<"Type The Minimum Number : ";
		cin>>snum;
		cout<<"Type The Maximum Number : ";
		cin>>number;
		if (snum > number){
			cout<<"Invalid Number !"<<endl;
			cout<<"The minimum number cannot be higher";
			exit(0);
		}
		d:
		system("cls");
		srand (time (0));
		int i;
		i = snum + (rand ()%(number - snum +1));
		cout<<"You Choose "<<snum<<"~"<<number<<endl;
		cout<<"=========================="<<endl;
		cout<<"You Got A Number : "<<i<<endl;
		cout<<"=========================="<<endl;
		cout<<"1. Go Again (1)"<<endl;
		cout<<"2. Go Back To Main Menu (2)"<<endl;
		cout<<"Enter : ";
		cin>>again;
		if (again == 1) goto d;
		else goto main;
	}
}
