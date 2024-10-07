#include<iostream>
using namespace std;
int main(){
	float fahrenheit,celsius;
	cout<<"Enter temperature in celsius:";
	cin>>celsius;
	fahrenheit=(celsius*9.0/5.0)+32;
	cout<<"temperature in fahrnheit"<<fahrenheit;
	return 0;
}
