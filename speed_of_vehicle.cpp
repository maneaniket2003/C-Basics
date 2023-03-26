#include<iostream>
#include<cmath>
using namespace std;
int main () {
	float u, v, a, speed;
	cout<<"Enter initial speed of a vehicle : ";
	cin>>u;
	cout<<"Enter final speed of a vehicle   : ";
	cin>>v;
	cout<<"Enter acceleration of a vehicle  : ";
	cin>>a;
	
	speed = (pow(v,2) - pow(u,2)) / (2*a);
	cout<<"Speed of a vehicle is "<<speed<<endl;
}
