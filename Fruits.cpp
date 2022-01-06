//Question
//Make a class named Fruit with a data member to calculate the number of fruits in a basket.
//Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket. Print the number of fruits of each type and 
//the total number of fruits in the basket.
//Solution
#include<iostream>
using namespace std;
class Apples{
	protected:
		int numA;
	public:
		void setApples(int n){
			numA=n;
		}
		void getApples(void){
			cout<<"The number of Apples are "<<numA<<endl;
		}
};
class Mangoes{
	protected:
		int numM;
	public:
		void setMangoes(int n){
			numM=n;
		}
		void getMangoes(void){
			cout<<"The number of Mangoes are "<<numM<<endl;
		}
};
class fruits: public Apples, public Mangoes{
	int total;
	public:
		void setTotal(void){
		total=numA+numM;
		}
		void getTotal(void){
			cout<<"The total number of fruits in the basket are "<<total<<endl;
		}
};
int main(){
	fruits basket;
	basket.setApples(10);
	basket.getApples();
	basket.setMangoes(5);
	basket.getMangoes();
	basket.setTotal();
	basket.getTotal();
}
