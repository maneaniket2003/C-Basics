#include<iostream>
using namespace std;

enum day{mon=1, tue, wed, thurs=5, fri, sat, sun};
int main() {
	
	day d = mon;
	cout<<d<<endl;
	cout<<tue<<endl;
	cout<<wed<<endl;
	cout<<thurs<<endl;
	cout<<fri<<endl;
	cout<<sat<<endl;
	cout<<sun<<endl;
}
