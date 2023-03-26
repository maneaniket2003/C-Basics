#include<iostream>
using namespace std;
int main() {
	int A[10] = {1,2,3,4,5,6,7,8,9,10};  // prerequisite for binary search : sorted array
	int mid;
	int key = 6;
	int start = 0, end = 9;
	while(end>=start) {
		mid = (start+end)/2;
		if(key == A[mid]) {
			cout<<"Key is found at "<<mid;
			return 0;
		}
		else if(key>A[mid]) {
			start = mid+1;
		}
		else{
			end = mid-1;
		}
		
	}
	cout<<"Key not found";
}
