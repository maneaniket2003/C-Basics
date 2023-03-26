#include<iostream>
using namespace std;
int main() {
	float basicSallary, perAllowance, perDeduction, netSallary;
	cout<<"Enter a basic sallary of an Employ           : ";
	cin>>basicSallary;
    cout<<"Enter a percentage of allowance of an Employ : ";
	cin>>perAllowance;
	cout<<"Enter a percentage of deduction of an Employ : ";
	cin>>perDeduction;	
	
	netSallary = basicSallary + (basicSallary*perAllowance/100) - (basicSallary*perDeduction/100);
	
	cout<<"Net sallary of an Employee is "<<netSallary;
	
}
