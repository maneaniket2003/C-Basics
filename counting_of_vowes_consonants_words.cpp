#include<iostream>
using namespace std;
int main() {
	string s = "how Many wOrds";
	int vowel=0, consonant=0, word=1;
	for(int i=0; s[i]!='\0'; i++) {
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || 
		s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') {
			vowel++;
		} else if(s[i] == ' ') {
			word++;
		} else {
			consonant++;
		}
	}
	cout<<"Vowels = "<<vowel<<endl;
	cout<<"Consonants = "<<consonant<<endl;
	cout<<"words = "<<word<<endl;
	return 0;
}
