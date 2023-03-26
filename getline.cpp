#include<iostream>
using namespace std;
int main () {
    string name;
    cout<<"Enter your name : ";
    getline(cin, name);  // For reading entire line
    cout<<"Hello "<<name;
    return 0;
}