#include<iostream>
using namespace std;
int main() {
	int x;
	cout<<"Enter an hour(1-24) : ";
	cin>>x;
	if(x>=9 && x<=18) {
		cout<<"Working hour";
	}
	else {
		cout<<"Leisure hour";
	}
}
