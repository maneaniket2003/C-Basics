#include<iostream>
using namespace std;
int main() {
	int A[2][2] = {1,2,1,2};
	int B[2][2] = {1,2,1,2};
	int C[2][2];
	for(int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			C[i][j] = (A[i][j] * B[i][j]) + (A[i][j+1] * B[i+1][j]);
		}
	}
	
	for(int i=0; i<2; i++) {
		for(int j=0; j<2; j++) {
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
