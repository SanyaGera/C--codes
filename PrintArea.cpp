//Question
//Create a class to print the area of a square and a rectangle. The class has two functions with the same name but different number of parameters. The function for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for printing
//the area of square has one parameter which is the side of the square.
//Solution
#include<iostream>
#include<string>
using namespace std;
class PrintArea{
	public:
		void Area(int a){
			cout<<"The area of the square is "<<a*a<<endl;
		}
		void Area(int l, int b){
			cout<<"The area of the rectangle is "<<l*b<<endl;
		}
};
int main(){
    PrintArea A1,A2;
    A1.Area(3,4);
    A2.Area(6);
    return 0;
}
