//Question
//Take an array of length n where all the numbers are nonnegative and unique. Find the element in the array possessing the highest value. Split the element into two parts where first part contains the next highest value in the array and second part hold the required additive entity to get the highest value. Print the array where the highest value get splitted into those two parts.
//Sample input: 4 8 6 3 2
//Sample output: 4 6 2 6 3 2
//Solution
#include<iostream>
#include<cmath>
using namespace std;

int main(){
int l;
	cout<<"Enter the length of the array "<<endl;
	cin>>l;
	int arr[l];
	cout<<"Enter the elements of the array "<<endl;
	for(int i=0;i<l;i++){
		cin>>arr[i];
	}
int newarr[l+1];
int highest=arr[0];
int second_highest=arr[0];
int j;
for(int i=0;i<l;i++){
	if(highest<arr[i]){
		highest=arr[i];
		j=i;
	}
}
for(int i=0;i<l;i++){
	if(arr[i]<highest && arr[i]>second_highest){
		second_highest=arr[i];
	}
}
int diff=highest-second_highest;
for(int i=0;i<j;i++){
	newarr[i]=arr[i];
}
newarr[j]=second_highest;
newarr[j+1]=diff;
for(int i=j+2;i<l+1;i++){
	newarr[i]=arr[i-1];
}
cout<<"Output array is : ";
for(int i=0;i<l+1;i++){
	cout<<newarr[i]<<" ";
}
}
