#include<iostream>
#include<math.h>
using namespace std;
int main () {
	float a, b, c;
	float x, y;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	cout<<"Enter c : ";
	cin>>c;
	
	x = (-b+sqrt(b*b-4*a*c)) / (2*a); // first root
    y = (-b-sqrt(b*b-4*a*c)) / (2*a); // second root
    
    cout<<"First root is "<<x<<endl;
    cout<<"Second root is "<<y<<endl;
}
