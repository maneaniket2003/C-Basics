// find factors of a number
#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	cout<<"The factors of a given number are ";
	for(int i=1; i<=n; i++) {
		if(n%i == 0) {
			cout<<i<<" ";
		}
	}
	return 0;
}
