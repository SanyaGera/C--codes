#include<iostream>
using namespace std;
void AgeCalculator(int bd, int bm, int by, int cd, int cm, int cy){
	int days=0;
	int months=0;
	int years=0;
	int month[12]={31,28,30,31,30,31,30,31,30,31,30,31};
	days=(month[bm]-bd)+cd;
	bm++;
	cm--;
	cy--;
	years=cy-by;
	months=(13-bm)+cm;
	if(days>=month[months]){
		days=days-month[months];
		months++;
	}	
	if(months>=12){
		months=months-12;
		years++;
	}
	cout<<"Your age is "<<years<<" Years "<<months<<" months "<<days<<" Days "<<endl;
	
}
int main(){
	int bd,bm,by,cd,cm,cy;
	cout<<"Enter your birth year:"<<endl;
	cin>>by;
	cout<<"Enter your birth month:"<<endl;
	cin>>bm;
	cout<<"Enter your birth date:"<<endl;
	cin>>bd;
	cout<<"Enter current year:"<<endl;
	cin>>cy;
	cout<<"Enter current month:"<<endl;
	cin>>cm;
	cout<<"Enter current date:"<<endl;
	cin>>cd;
	AgeCalculator( bd,  bm, by,  cd,  cm,  cy);
	
	
}
