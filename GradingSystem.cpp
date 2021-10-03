//Question
//Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
//Marks        Grade
//91-100         AA
//81-90          AB
//71-80          BB
//61-70          BC
//51-60          CD
//41-50          DD
//<=40          Fail
//Solution
#include<iostream>
#include<cmath>

using namespace std;
void GradingSystem(int marks){
	if(91<=marks && marks<=100){
		cout<<"Grade : AA"<<endl;
	}
	else if(81<=marks && marks<=90){
		cout<<"Grade : AB "<<endl;
	}
	else if(71<=marks && marks<=80){
		cout<<"Grade : BB "<<endl;
	}
	else if(61<=marks && marks<=70){
		cout<<"Grade : BC "<<endl;
	}
	else if(51<=marks && marks<=60){
		cout<<"Grade : CD "<<endl;
	}
	else if(41<=marks && marks<=50){
		cout<<"Grade : DD "<<endl;
	}else{
		cout<<"Fail"<<endl;
	}
}
int main(){
	int a;
	cout<<"Enter your marks"<<endl;
	cin>>a;
	GradingSystem(a);
	return 0;
    
}
