//Question
//Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
//Solution
#include<iostream>
#include<string>
using namespace std;
struct Student{
	string name;
	int roll_no;
	int maths_marks;
	int phy_marks;
	int chem_marks;
	
};
int main(){

struct Student S[5];
for(int i=0;i<5;i++){
 	S[i].roll_no=i+1;
 	cout<<"Enter the name of roll no. "<<i+1<<endl;
 	cin>>S[i].name;
 	cout<<"Enter the marks in maths "<<endl;
 	cin>>S[i].maths_marks;
 	cout<<"Enter the marks in physics "<<endl;
 	cin>>S[i].phy_marks;
 	cout<<"Enter the marks in chemistry "<<endl;
 	cin>>S[i].chem_marks;
 	
}
for(int i=0;i<5;i++){
  cout<<"Percentage of roll no "<<i+1<<" is "<<(S[i].maths_marks+S[i].chem_marks+S[i].phy_marks)/3<<" % "<<endl;
  }
 
return 0;
}
