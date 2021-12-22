//Question
//Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and year to store the dates. 
 //If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
//Solution
#include<iostream>
#include<string>
using namespace std;
struct Date{
	int date;
	int month;
	int year;
};
void CompareDates(Date d[]){
	bool flag=false;
	if(d[0].date==d[1].date){
		if(d[0].month==d[1].month){
			if(d[0].year==d[1].year){
				flag=true;
			}
		}
	}
	if(flag==true){
		cout<<"Dates are equal "<<endl;
	}
	else{
		cout<<"Dates are not equal "<<endl;
	}
}

int main(){
Date d[2];
for(int i=0;i<2;i++){
	cout<<"Enter the date :";
	cin>>d[i].date;
	cout<<endl;
	cout<<"Enter the month :";
	cin>>d[i].month;
	cout<<endl;
	cout<<"Enter the year :";
	cin>>d[i].year;
	cout<<endl;
}
CompareDates(d);
}
