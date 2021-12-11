//Question
//Write a program to print the names of students by creating a Student class. If no name is passed while creating an object of the Student class, then the name should be "Unknown",
//otherwise the name should be equal to the String value passed while creating the object of the Student class.
//Solution
#include<iostream>
#include<string>
using namespace std;
class Student{
	string name;
	public:
		Student(){
			name="Unknown";
		}
		Student(string str){
			name=str;
		}
		void getName(void){
			cout<<"The name of the student is "<<name<<endl;
		}
};
int main(){
    Student Student1;
    Student Student2("Harsh");
    Student1.getName();
    Student2.getName();
    return 0;
}
