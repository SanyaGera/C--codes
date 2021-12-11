//Question
//Create a class to print an integer and a character using two functions having the same name but different sequence of the integer and the character parameters.
//For example, if the parameters of the first function are of the form (int n, char c), then that of the second function will be of the form (char c, int n).
//Solution
#include<iostream>
#include<string>
using namespace std;
class PrintNumberandChar{
	public:
		void print(int n, char c){
			cout<<"The integer is "<<n<<" and the character is "<<c<<endl;
		}
		void print(char c,int n){
			cout<<"The character is "<<c<<" and the integer is "<<n<<endl;
		}
};
int main(){
    PrintNumberandChar p1,p2;
    p1.print(4,'k');
    p2.print('l',5);
    
    return 0;
}
