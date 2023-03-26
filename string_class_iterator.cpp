#include<iostream>
#include<string>
using namespace std;
int main() {
	string str = "today";
	
	
	string::iterator it;
	for(it=str.begin(); it!=str.end(); it++) {
		*it=*it-32;
	}
	cout<<str;
	
//	// for reverse traversing
//	string::reverse_iterator it;
//	for(it=str.rbegin(); it!=str.rend(); it++) {
//		cout<<*it;
//	}

    return 0;
}
