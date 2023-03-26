#include<iostream>
using namespace std;
int main() {
	int x = 11, y = 7, z;
	// AND operation
	cout<<"x & y = "<<(x & y)<<endl;
	// OR operation
	cout<<"x | y = "<<(x | y)<<endl;
	// X-OR operation
	cout<<"x ^ y = "<<(x ^ y)<<endl;
	// 
	cout<<"~x = "<<(~x)<<endl;
	// left shift
	int a = 5;
	cout<<"Left shift = "<<(a<<1)<<endl;
	// right shift
	int b = 20;
	cout<<"Right shift = "<<(b>>1)<<endl;
  
}
