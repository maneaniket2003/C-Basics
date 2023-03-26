#include<iostream>
using namespace std;
int main() {
	int A[10];
	int n = 10, key;
	cout<<"Enter 10 elements in array : \n";
	for(int i=0; i<n; i++) {
		cin>>A[i];
	}
	cout<<"Enter a key : ";
	cin>>key;
	for(int i=0; i<10; i++) {
		if(A[i] == key) {
			cout<<"Element is found at "<<i;
			return 0;
		}
	}
	cout<<"Key not found";
}
