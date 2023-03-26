#include<iostream>
using namespace std;
int main() {
	int r1, c1, r2, c2;
	cout<<"Enter the no. of rows and columns of matrix 1 : "<<endl;
	cin>>r1>>c1;
	cout<<"Enter the no. of rows and columns of matrix 2 : "<<endl;
	cin>>r2>>c2;
	
	int a[r1][c1];
	int b[r2][c2];
	int mul[r1][c2];
	
	//Storing elements of first matrix
	for(int i=0; i<r1; i++) {
		for(int j=0; j<c1; j++) {
			cout<<"Enter a"<<i+1<<j+1<<" : ";
			cin>>a[i][j];
			cout<<endl;
		}
	}
	
	//Storing elements of first matrix
	for(int i=0; i<r1; i++) {
		for(int j=0; j<c1; j++) {
			cout<<"Enter b"<<i+1<<j+1<<" : ";
			cin>>b[i][j];
			cout<<endl;
		}
	}
	
	//multiplying matrix a and b
	for(int i=0; i<r1; i++) {
		for(int j=0; j<c2; j++) {
			
			mul[i][j] = 0;
			for(int k=0; k<c1; k++) {
				mul[i][j] += a[i][k] * b[k][j]; 
			}
		}
	}
	
	//Displaying multiplied matrix
	for(int i=0; i<r1; i++) {
		for(int j=0; j<c2; j++) {
			cout<<mul[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
