#include<iostream>
using namespace std;
int main() {
	int ammount,dis,disammount;
	
	cout<<"Enter a amount : ";
	cin>>ammount;
	if(ammount>=500) {
		dis = ammount*0.2;
		disammount = ammount-dis;
		cout<<"You have saved rs "<<dis<<endl;
		cout<<"Your total is "<<disammount<<endl;
	}
	else if(ammount>=100 && ammount<500) {
		dis = ammount*0.1;
		disammount = ammount-dis;
		cout<<"You have saved rs "<<dis<<endl;
		cout<<"Your total is "<<disammount<<endl;
	}
	else {
		cout<<"To get discount shop more";
	}
	
}
