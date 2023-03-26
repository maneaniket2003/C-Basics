// reverse a number
#include<iostream>
using namespace std;
int main() {
	
	// My Logic
	int n, remainder, sum=0;
	cout<<"Enter a number : ";
	cin>>n;
//	while(n>0) {
//		cout<<n%10;
//		n /= 10;
//	}
//	

	
	// Actual Logic
	
	while(n>0) {
		remainder = n%10;
		sum = sum*10 + remainder;
		n /= 10;
	}
	cout<<"Reversed number : "<<sum;
	
	return 0;
}
