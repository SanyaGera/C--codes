//Question
//Create a class named 'PrintNumber' to print various numbers of different datatypes by creating different functions with the same name 'printn' having a parameter
//for each datatype.
//Solution
#include<iostream>
#include<string>
using namespace std;
class PrintNumber{
	public:
		void printn(int n){
		
			cout<<"The integer number is "<<n<<endl;
		}
		void printn(float n){
		
			cout<<"The float number is "<<n<<endl;
		}
		void printn(double n){
		
			cout<<"The double number is "<<n<<endl;
		}
		
};
int main(){
    PrintNumber p1,p2,p3;
    p1.printn(4);
    p2.printn(4.50);
    p3.printn(4.5678);
    
    return 0;
}
