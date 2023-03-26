#include<iostream>
using namespace std;
int main () {
	int n;
	float sum;
	cout<<"Enter the limit : ";
	cin>>n;
	
	sum = n * (n+1) / 2;
	cout<<"Sum of first "<<n<<" natural numbers is "<<sum;
}
