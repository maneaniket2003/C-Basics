#include<iostream>
using namespace std;
int main() {
	int A[] = {8,6,3,9,7,4};
	for(int x:A) {  // This is not supported in DevCpp
		cout<<x;
	}
}
