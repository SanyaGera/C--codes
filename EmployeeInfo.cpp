//Question
//Write a program to print the name, salary and date of joining of 10 employees in a company. Use array of objects.
//Solution
#include<iostream>
#include<string>
using namespace std;
class Employee{
	int salary;
	int DOJ_Years;
	int DOJ_Month;
	int DOJ_date;
	string name;
	public:
		void setInfo(string name1, int sal, int YYYY,int MM,int DD){
			name=name1;
			salary=sal;
			DOJ_Years=YYYY;
			DOJ_Month=MM;
			DOJ_date=DD;
		}
		void getInfo(){
			cout<<"Name of the Employee :"<<name<<endl;
			cout<<"Salary of the Employee :"<<salary<<endl;
			cout<<"Date of joining of the Employee :"<<DOJ_date<<"/"<<DOJ_Month<<"/"<<DOJ_Years<<endl;
		}
	
};
int main(){
	string name;
	int salary, YYYY,DD,MM;
	Employee Em[10];
	for(int i=0;i<10;i++){
		cout<<"Enter the name of the employee :"<<endl;
		cin.ignore();
		getline(cin,name);
		cout<<"Enter the salary of the employee :"<<endl;
		cin>>salary;
		cout<<"Enter the year of joining "<<endl;
		cin>>YYYY;
		cout<<"Enter the month of joining "<<endl;
		cin>>MM;
		cout<<"Enter the date of joining "<<endl;
		cin>>DD;
		Em[i].setInfo(name,salary,YYYY,MM,DD);
		Em[i].getInfo();
		
			}
}
