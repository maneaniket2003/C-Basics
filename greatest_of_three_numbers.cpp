#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout<<"Enter first no. : ";
	cin>>a;
	cout<<"Enter second no. : ";
	cin>>b;
	cout<<"Enter third no. : ";
	cin>>c;
	
	// optimized solution
	if(a>b && a>c) {
		cout<<a<<" is greatest number";
	}
	else if(b>c) {
		cout<<b<<" is greatest number";
	}
	else {
		cout<<c<<" is greatest number";
	}
	
//	if(a>b) {
//		if(a>c) {
//			cout<<a<<" is greatest number";
//		}
//		else {
//			cout<<c<<" is greatest number";
//		}
//	}
//	else {
//		if(b>c) {
//			cout<<b<<" is greatest number";
//		}
//		else {
//			cout<<c<<" is greatest number";
//		}
//	}
	return 0;
}
