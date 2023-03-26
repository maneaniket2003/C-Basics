#include<iostream>
using namespace std;
int main() {
	string str;
	cout<<"Enter a string in uppercase : ";
	cin>>str;
	for(int i=0; str[i]!='\0'; i++) {
		if(str[i]>=65 && str[i]<=90)
		str[i]+=32;
	}
	cout<<"Your string in lowercase : "<<str;
}
