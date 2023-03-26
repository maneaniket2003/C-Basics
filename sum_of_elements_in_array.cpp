#include<iostream> 
using namespace std;
int main() {
	int A[] = {4,8,6,9,5,2,7};
	int sum = 0;
	for(int i=0; i<7; i++) {
		sum += A[i];
	}
	cout<<"Sum of all elements in array is "<<sum;
	return 0;
}
