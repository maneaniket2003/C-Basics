#include<iostream>
using namespace std;
int main() {
	string s, rev;
	cout<<"Enter a string : ";
	cin>>s;
	int n = s.length();
	rev.resize(n);
	for(int i=n-1, j=0; i>=0, j<n; i--, j++) {
		rev[j]=s[i];
	}
	
	// comparing
	if(s == rev) {
		cout<<"Pallindrome"<<endl;
	} else {
		cout<<"Not a pallindrome";
	}

	return 0;
}
