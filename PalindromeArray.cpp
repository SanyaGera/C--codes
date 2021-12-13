//Question
//Write a program to check if elements of an array are same or not it read from front or back.
//Solution
#include<iostream>
using namespace std;
int main(){
int l;
cout<<"Enter the length of the array "<<endl;
cin>>l;
int arr[l],rev[l];
cout<<"Enter the elements of the array "<<endl;
for(int i=0;i<l;i++){
	
	cin>>arr[i];
}
int pal=0;
for(int i=0;i<(l/2);i++ ){
	if(arr[i]==arr[l-i-1]){
	
	pal=1;
}
}
if(pal==1){
	cout<<"Yes the array is palindrome "<<endl;
}
else{
	cout<<"No the array is not palindrome "<<endl;
}


}
