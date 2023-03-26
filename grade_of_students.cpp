#include<iostream>
using namespace std;
int main() {
	int phy,chem,math,total;
	float avg;
	cout<<"Enter marks of Mathematics : ";
	cin>>math;
	cout<<"Enter marks of Chemistry : ";
	cin>>chem;
	cout<<"Enter marks of Physics : ";
	cin>>phy;
	total = math+chem+phy;
	avg = total/3.0;
	if(avg>=60) {
		cout<<"Your grade is A";
	}
	else if(avg>=35 && avg<60) {
			cout<<"Your grade is B";
	}
	else {
			cout<<"Your grade is C";
	}
	return 0;
}
