// check whether the given number is perfect number or not
#include<iostream>
using namespace std;
int main() {
	int n, sum=0;
	cout<<"Enter a number : ";
	cin>>n;
	for(int i=1; i<=n; i++) {
		if(n%i == 0) {
			sum += i;
		}
	}
	int perNum = 2*n;
	if(sum == perNum) {
		cout<<n<<" is a perfect number";
	}
	else {
		cout<<n<<" is not a perfect number";
	}
	return 0;
}
