//Question
//A person is elligible to vote if his/her age is greater than or equal to 18. Define a function to find out if he/she is elligible to vote.
//Solution
#include<iostream>
#include<cmath>

using namespace std;
void EligibilitytoVote(int age){
	if(age>=18){
		cout<<"You are eliglible to vote"<<endl;
	}else{
		cout<<"You are not eligible to vote"<<endl;
	}
}
int main(){
	int age;
	cout<<"Enter your age"<<endl;
	cin>>age;
	EligibilitytoVote(age);
	return 0;
	
    
}
