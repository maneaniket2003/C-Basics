// find greatest common divisor of two numbers
#include<iostream>
using namespace std;
int main() {
	int m,n;
	cout<<"Enter first number : ";
	cin>>m;
	cout<<"Enter second number : ";
	cin>>n;
	while(m!=n) {
		if(m>n) {
			m-=n;
		}
		else {
			n-=m;
		}
	}
	cout<<"Greatest common divisor is "<<m;
	
	return 0;
}
