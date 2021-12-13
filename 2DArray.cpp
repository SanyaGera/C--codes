//Question
//Initialize and print all elements of a 2D array.
//Solution
#include<iostream>
using namespace std;
int main(){
int m,n;
cout<<"Enter the number of rows "<<endl;
cin>>m;
cout<<"Enter the number of columns "<<endl;
cin>>n;
int mat[m][n];
cout<<"Enter the matrix "<<endl;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>mat[i][j];
	}
}
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cout<<mat[i][j]<<" ";
	}
	cout<<endl;
}

}
