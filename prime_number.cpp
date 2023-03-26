// check whether number is prime or not
#include<iostream>
using namespace std;
int main() {
	
	// Logic 1
	int n, count = 0;
	cout<<"Enter a number : ";
	cin>>n;
//	for(int i=1; i<=n; i++) {
//		if(n%i == 0) {
//			count++;
//		}
//	}
//	if(count>2) {
//		cout<<n<<" is not a prime number";
//	}
//	else {
//		cout<<n<<" is a prime number";
//	}
	
	
	//Logic 2
	int flag=0;
	for(int i=2; i<n; i++) {
		if(n%i == 0) {
			flag = 1;
		}
	}
	if(flag == 1) {
		cout<<n<<" is not a prime number";
	}
	else {
		cout<<n<<" is a prime number";
	}
	return 0;
}
