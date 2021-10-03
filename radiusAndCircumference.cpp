//Question
//Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.
//Solution
#include<iostream>
#include<cmath>

using namespace std;
float circumference(int r){
	float c;
	c=2*3.14*r;
	return c;
}
float area(int r){
	float area;
	area=3.14*r*r;
	return area;
}
int main(){
	int i;
	cout<<"Enter the radius of the circle"<<endl;
	cin>>i;
	cout<<"The circumference of the circle is : "<<circumference(i)<<endl;
	cout<<"The area of the circle is : "<<area(i);
	
	

	return 0;
	
    
}
