// display numbers in words
#include<iostream>
using namespace std;
int main() {
	int num, n, rev, remainder;
	cout<<"Enter a number : ";
	cin>>n;
	while(n>0) {
		remainder = n%10;
		rev = rev*10 + remainder;
		n  /= 10;
	}
	
	while(rev>0) {
	 num = rev%10;
	 rev /= 10;
	switch(num) {
		case 1 : cout<<"One ";
		        break;
	    case 2 : cout<<"Two ";
		        break;
		case 3 : cout<<"Three ";
		        break;
		case 4 : cout<<"Four ";
		        break;
		case 5 : cout<<"Five ";
		        break;
		case 6 : cout<<"Six ";
		        break;
		case 7 : cout<<"Seven ";
		        break;
		case 8 : cout<<"Eight ";
		        break;
		case 9 : cout<<"Nine ";
		        break;
		default : cout<<"Zero ";
		
	} 
    }
	return 0;
}
