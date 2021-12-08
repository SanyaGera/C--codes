//Question
//Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units
//by creating a class named 'Triangle' with the constructor having the three sides as its parameters.
//Solution
#include<iostream>
#include<cmath>

using namespace std;
class triangle{
	int a,b,c;
	public:
		triangle(){
			a=b=c=0;
		}
		triangle(int x,int y, int u){
			a=x;
			b=y;
			c=u;
		}
		void perimeter(void){
			cout<<"The perimeter of the triangle is "<<(a+b+c)<<endl;
		}
		void area(void){
			float s=(a+b+c)/2.0;
			float area=sqrt(s*abs(s-a)*abs(s-b)*abs(s-c));
			cout<<"The area of the triangle is "<<area<<endl;
		}
	
};
int main(){
	triangle t1(3,4,5);
	t1.perimeter();
	t1.area();
	return 0;    
}
