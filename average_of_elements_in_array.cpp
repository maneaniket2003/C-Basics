#include<iostream>
using namespace std;
int main() {
	int n, sum = 0;
	float avg;
	cout<<"How many elements do you want to add : ";
	cin>>n;
	int A[n];
	cout<<"Enter "<<n<<" elements in an Array : ";
	for(int i=0; i<n; i++) {
		cin>>A[i];
	}
	for(int i=0; i<n; i++) {
		sum += A[i];
	}
	avg = (float)sum/n;
	cout<<"Average of elements in an Array is "<<avg;
	return 0;
}
