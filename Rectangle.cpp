//Question
//Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area. 
//Length and breadth are passed as parameters to its constructor.
//Solution
#include<iostream>
#include<cmath>

using namespace std;
class Rectangle{
	int length,breadth;
	public:
		Rectangle(){
			length=breadth=0;
		}
		Rectangle(int x,int y){
			length=x;
			breadth=y;
			
		}
		float area(void){
			float area=length*breadth;
			return area;
		}
	
};
int main(){
	Rectangle r1(4,5);
	Rectangle r2(5,8);
	float area1= r1.area();
	float area2=r2.area();
	cout<<"The area of the first rectangle is "<<area1
	<<" and the area of second rectangle is "<<area2<<endl;
	return 0;    
}
