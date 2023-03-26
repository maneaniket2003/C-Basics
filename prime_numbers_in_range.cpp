#include<iostream>
using namespace std;
int main() {
	int num, count = 0;
	cout<<"Enter a limit : ";
	cin>>num;
	
	for(int j=2; j<=num; j++) {
	
	int is_prime = 1;
	for(int i=2; i<j; i++) {
		if(j % i == 0) {
			is_prime = 0;
			
		}

	}
	
	if(is_prime == 1) {
		cout<<j<<" ";
		count++;
	} 
	
}
    cout<<endl;
	cout<<"The total prime numbers are "<<count;
}
