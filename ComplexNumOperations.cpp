//Question
//Write a program to add, subtract and multiply two complex numbers using structures to function.
//Solution
#include<iostream>
#include<string>
using namespace std;
struct Complex{
	int real;
	int img;
};
 Complex ComplexAdd( Complex x, Complex y){
	 Complex k;
	 k.real=x.real+y.real;
	 k.img=x.img+y.img;
	 return k;
	
};
Complex ComplexDiff(Complex x, Complex y){
	 Complex k;
	 k.real=x.real-y.real;
	 k.img=x.img-y.img;
	return k;
};
Complex ComplexMul(Complex x, Complex y){
	Complex k;
	k.real=x.real*y.real-x.img*y.img;
	k.img=x.img*y.real+x.real*y.img;
	return k;
	};
int main(){
Complex a,b;
cout<<"Enter the real part of first Complex number :"<<endl;

cin>>a.real;
cout<<"Enter the imaginary part of first Complex number :"<<endl;
cin>>a.img;

cout<<"Enter the real part of second Complex number :"<<endl;
cin>>b.real;
cout<<"Enter the imaginary part of second Complex number :"<<endl;
cin>>b.img;

Complex sum= ComplexAdd(a,b);
Complex Diff= ComplexDiff(a,b);
Complex Product= ComplexMul(a,b);
cout<<"The sum of the two complex numbers is "<<sum.real<<" + ("<<sum.img<<") i "<<endl;

cout<<"The difference of the two complex numbers is "<<Diff.real<<" + ("<<Diff.img<<") i "<<endl;

cout<<"The product of the two complex numbers is "<<Product.real<<" + ("<<Product.img<<") i "<<endl;

return 0;
}
