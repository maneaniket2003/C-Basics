// to check whether given number is pallindrome or not
#include<iostream>
using namespace std;
int main() {
	int n, remainder, temp, rev=0;
	cout<<"Enter a number : ";
	cin>>n;
	temp = n;
	while(temp>0) {
		remainder = temp%10;
		rev = rev*10 + remainder;
		temp /= 10;
	}
	if(rev == n) {
		cout<<"Given number is a pallindrome";
	}
	else {
		cout<<"Given number is not a pallindrome";
	}
	return 0;
}
