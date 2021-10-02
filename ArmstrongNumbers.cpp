//Question
//A three digit number is called Armstrong number if sum of cube of its digit is equal to number itself.
//E.g.- 153 is an Armstrong number because (13)+(53)+(33) = 153.
//Write all Armstrong numbers between 100 to 500.
//Solution
#include<iostream>
#include<cmath>

using namespace std;
int SumOfCubes(int n){
	int j,sum;
	sum=0;
	j=0;
	while(n!=0){
		j=n%10;
		sum=sum+pow(j,3);
		n=n/10;
	}
	return sum;
}
int main(){
	int n,sum;
	cout<<"The list of Armstrong numbers between 100 and 500 is :"<<endl;
	for(n=100;n<=500;n++){
		sum=SumOfCubes(n);
		if(sum==n){
			cout<<n<<endl;
		}
	}
	return 0;
	
    
}
