//Question
//Create a class 'Student' with three data members which are name, age and address. The constructor of the class assigns default values to name as "unknown", age as '0' and 
//address as "not available". It has two functions with the same name 'setInfo'. First function has two parameters for name and age and assigns the same whereas the second 
//function takes has three parameters which are assigned to name, age and address respectively. Print the name, age and address of 10 students.
//Hint - Use array of objects
//Solution
#include<iostream>
#include<string>
using namespace std;
class Student{
	int age;
	string address;
	string name;
	public:
		Student(){
			name="unknown";
			age=0;
			address="not available";
		}
		void setInfo(string name1,int age1){
			name=name1;
			age=age1;
			
		}
		void setInfo(string name2,int age2,string address2){
			name=name2;
			age=age2;
			address=address2;
		}
		void getinfo(){
			cout<<"Name of the student : "<<name<<endl;
			cout<<"Age of the student : "<<age<<endl;
			cout<<"Address of the student : "<<address<<endl;
		}
};
int main(){
	Student st[10];
	string name,address;
	int x,age,i;
	cout<<"Out of 10 students, enter the number of students whose address is unavaialable "<<endl;
	cin>>x;
	
	for(i=0;i<x;i++){
		cout<<"Enter name "<<endl;
		cin.ignore();
		getline(cin,name);
		cout<<"Enter age "<<endl;
		cin>>age;
		st[i].setInfo(name,age);
		st[i].getinfo();
	}
	for(i=0;i<10-x;i++){
		cout<<"Enter name "<<endl;
		cin.ignore();
		getline(cin,name);
		cout<<"Enter age "<<endl;
		cin>>age;
		cout<<"Enter address "<<endl;
		cin.ignore();
		getline(cin,address);
		st[i].setInfo(name,age,address);
		st[i].getinfo();
	}
	
}
