#include<iostream>
using namespace std;
int main() {
//	char s[] = {'h','e','l','l','o',0,'w'};
//	char a[] = {65,66,67,68,0};
//	cout<<s<<endl;
//	cout<<a;


//    char s[100];
//    char s2[100];
//    
//    cout<<"Enter your name : ";
//    cin.get(s, 100);
//    cout<<"Welcome "<<s<<endl;
//    cin.ignore();
//    
//    cout<<"Enter your name : ";
//    cin.get(s2, 100);
//    cout<<"Welcome "<<s2<<endl;


      char s[100];
      char s2[100];
      cout<<"Enter your name : ";
      cin.getline(s, 100);
      cout<<s<<endl;
      
      cout<<"Enter your name : ";
      cin.getline(s2, 100);
      cout<<s2<<endl;
}
