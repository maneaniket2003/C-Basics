// check whether number is armstrong or not
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, r, sum = 0, temp;
	cout<<"Enter a number : ";
	cin>>n;
	temp = n;
	while(temp>0) {
		r = temp%10;
		sum += pow(r, 3);
		temp /= 10;
	}
	if(sum == n) {
		cout<<n<<" is an Armstrong number";
	}
	else {
		cout<<n<<" is not an Armstrong number";
	}
	return 0;
}
