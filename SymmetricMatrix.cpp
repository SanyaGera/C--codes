//Question
//Initialize a 2D array of 3*3 matrix. 
//Check if the matrix is symmetric or not.
//Solution
#include<iostream>
#include<cmath>
using namespace std;

int main(){
int mat[3][3];
cout<<"Please enter your matrix "<<endl;
for(int i=0;i<3;i++){
	for(int j=0;j<3;j++){
		cin>>mat[i][j];
	}
}
bool flag=true;
for(int i=0;i<3;i++){
	for(int j=i;j<3;j++){
		if(mat[i][j]!=mat[j][i]){
			flag=false;
			break;
		}
	}
}
if(flag){
	cout<<"Matrix is symmetric"<<endl;
}
else{
	cout<<"Matrix is not symmetric"<<endl;
}
}
