//Question
//Create a class named 'Rectangle' with two data members- length and breadth and a function to calculate the area which is 'length*breadth'. The class has three constructors which are :
//1 - having no parameter - values of both length and breadth are assigned zero.
//2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
//3 - having one number as parameter - both length and breadth are assigned that number.
//Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.
//Solution
#include<iostream>
#include<string>
using namespace std;
class Rectangle{
	int length;
	int breadth;
	public:
		Rectangle(){
			length=breadth=0;
		}
		Rectangle(int l,int b){
			length=l;
			breadth=b;
		}
		Rectangle(int a){
			length=breadth=a;
		}
		void getArea(void){
			int area=length*breadth;
			cout<<"The area of the rectangle is "<<area<<endl;
		}
};
int main(){
    Rectangle r1;
    Rectangle r2(4,5);
    Rectangle r3(4);
    r1.getArea();
    r2.getArea();
    r3.getArea();
    
    return 0;
}
