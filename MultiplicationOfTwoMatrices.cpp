//Question
//Write a program to multiply two 3x3 matrices.
//Solution
#include<iostream>
using namespace std;
int main(){
	int mat1[3][3], mat2[3][3];
	cout<<"Enter your first matrix "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>mat1[i][j];
		}
	}
	cout<<"Enter your second matrix "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>mat2[i][j];
		}
	}
	int ans[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			ans[i][j]=0;
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				ans[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	cout<<"The final output is "<<endl;
	for(int i=0;i<3;i++){
		cout<<"[ ";
		for(int j=0;j<3;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<" ]";
		cout<<endl;
	}
}
