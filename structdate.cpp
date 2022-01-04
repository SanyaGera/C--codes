//Question
//Create a structure named Date having day, month and year as its elements. Store the current date in the structure. 
//Now add 45 days to the current date and display the final date.
//Solution
#include<iostream>
using namespace std;
struct date{
	int year;
	int month;
	int date;
};
int main(){
	date d;
	cout<<"enter the year"<<endl;
	cin>>d.year;
	cout<<"enter the month"<<endl;
	cin>>d.month;
	cout<<"enter the date"<<endl;
	cin>>d.date;
	int m[]={31,28,30,31,30,31,30,31,30,31,30,31};
	d.date+=45;
	while(d.date>=m[d.month-1]){
		d.date=d.date-m[d.month-1];
		d.month++;
	}
	if(d.month>=12){
		d.month=-12;
		d.year++;
	}
	cout<<"The final date is "<<d.date<<"/"<<d.month<<"/"<<d.year<<endl;
}
