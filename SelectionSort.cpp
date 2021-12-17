//Code for Selection Sort
#include<iostream>
#include<cmath>

using namespace std;
void SelectionSort(int arr[],int l){
	int temp;
	for(int i=0;i<l-1;i++){
		for(int j=i+1;j<l;j++){
			if(arr[i]>arr[j]){
			 temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
	}
    cout<<"Sorted array is :"<<endl;
	for(int i=0;i<l;i++){
		cout<<arr[i]<<" ";
	}

}

int main(){
	int l;
	cout<<"Enter the length of the array "<<endl;
	cin>>l;
	int arr[l];
	cout<<"Enter the elements of the array "<<endl;
	for(int i=0;i<l;i++){
		cin>>arr[i];
	}
	SelectionSort(arr,l);
	return 0;    
}
