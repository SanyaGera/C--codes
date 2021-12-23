//Question
//Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.
//Solution
#include<iostream>
using namespace std;
struct distance{
	int foot;
	int inch;
};
void AddDistance(struct distance a,struct distance b){
	struct distance result;
	result.foot=a.foot+b.foot;
	result.inch=a.inch+b.inch;
	if(result.inch>=12){
		result.inch-=12;
		result.foot++;
	}
	cout<<"The result of the addition of the two distances is "<<result.foot<<" foot and "<<result.inch<<" inch "<<endl;
}
int main(){
	struct distance x,y;
	
	cout<<"Enter the foot of first distance "<<endl;
	cin>>x.foot;
	cout<<"Enter the inch of first distance "<<endl;
	cin>>x.inch;
	cout<<"Enter the foot of second distance "<<endl;
	cin>>y.foot;
	cout<<"Enter the inch of second distance "<<endl;
	cin>>y.inch;
	AddDistance(x,y);
}
