#include<iostream>
using namespace std;
int main() {
	int max=INT_MIN;
	int A[] = {4,8,6,9,5,2,7};
	for(int i=0; i<7; i++) {
		if(A[i]>max) {
			max=A[i];
		}
	}
	cout<<"Greatest element in array is "<<max;
}
