//Question
//Take 10 integer inputs from user and store them in an array. Now, copy all the elements in another array but in reverse order.
//Solution
#include<iostream>
using namespace std;
int main(){
int num[10],rev[10];
for(int i=0;i<10;i++){
  cout<<"Enter the "<<i+1<<" number "<<endl;
  cin>>num[i];
}
cout<<"Reversed array is :";
for(int i=0;i<10;i++){
	rev[i]=num[10-i-1];
	cout<<rev[i]<<" ";
}
}
