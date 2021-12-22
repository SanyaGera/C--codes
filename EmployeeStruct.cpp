//Question
//Write a structure to store the names, salary and hours of work per day of 10 employees in a company. Write a program to increase the salary depending on the number of hours 
//of work per day as follows and then print the name of all the employees along with their final salaries.
//Hours of work per day	8	10	>=12
//Increase in salary	$50	$100	$150
//Solution
#include<iostream>
#include<string>
using namespace std;
struct Employee{
	string name;
	int salary;
	int hoursperday;
};
void increasesalary(Employee E[]){
	for(int i=0;i<10;i++){
		if(E[i].hoursperday==8){
			E[i].salary+=50;
		}
		else if(E[i].hoursperday==10){
			E[i].salary+=100;
		}
		else if(E[i].hoursperday>=12){
			E[i].salary+=150;
		}
	}
	cout<<"Final Salaries of all employess :"<<endl;
	for(int i=0;i<10;i++){
		cout<<E[i].name<<" : "<<E[i].salary<<endl;
	}
	
		
}
int main(){
	Employee E[10];
	cout<<"Enter the details of Employees :"<<endl;
	for(int i=0;i<10;i++){
		cout<<"Enter the name :"<<endl;
		cin>>E[i].name;
		cout<<"Enter the number of hours per day :"<<endl;
		cin>>E[i].hoursperday;
		cout<<"Enter the salary :"<<endl;
		cin>>E[i].salary;
	}
	increasesalary(E);
}
