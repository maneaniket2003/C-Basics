#include<iostream>
#include<cmath>
using namespace std;
int main () {
	float r, area;
	cout<<"Enter a Radius of a circle : ";
	cin>>r;
	area = 3.14f * pow(r,2);
	cout<<"Area of a Circle is "<<area;
}
