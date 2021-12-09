//Question
//Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. 
//First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second function named as 'getArea' returns the area of the rectangle.
//Length and breadth of the rectangle are entered through keyboard.
//Solution
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Area{
	int length,breadth;
	public:
		void setDim(int l,int b){
			length=l;
			breadth=b;
		}
		float getArea(){
			float area=length*breadth;
			return area;
		}
};
int main(){
	Area r1;
	r1.setDim(4,5);
	float area_r1=r1.getArea();
	cout<<"The area of the respected rectangle is "<<area_r1<<endl;
	return 0;
}
