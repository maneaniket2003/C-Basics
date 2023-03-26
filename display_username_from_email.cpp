#include<iostream>
using namespace std;
int main() {
	string email, username;
	int flag = 0;
	cout<<"Enter your email address : ";
	cin>>email;
	int n=email.length();
	int i=email.find('@');
	username.resize(i);
	for(int i=0; i<n; i++) {
			if(email[i] == '@') {
			break;
		}
		username[i] = email[i];
	}
	cout<<"Your username is "<<username<<endl;
	
	for(int i=0; i<n; i++) {
		if((email[i]>='a' && email[i]<='z') || (email[i]>='1' && email[i]<='9') 
		   || email[i]=='_' || email[i]=='.' || email[i]=='@') {
		    	flag=0;
			}
		else {
			flag = 1;
			break;
		}
	}
	if(flag == 0) {
		cout<<"Valid username";
	} else {
		cout<<"Invalid username";
	}
	return 0;
}
