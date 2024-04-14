#include<iostream>
using namespace std;

class restaurant{
	private:
		int TotalBurger;
	public:
		restaurant(){
			TotalBurger=3;
		}
		int getBurgerQty(){
			return TotalBurger;
		}
};
class ShakesClass:public restaurant{
	private:
		int TotalShakes;
	public:
		ShakesClass(){
			TotalShakes=3;
		}
		int getShakesQty(){
			return TotalShakes;
		}
};
class bill:public ShakesClass{
	private:
	  int BurgerPrice;
	  int ShakesPrice;
    public:
	bill(){
		BurgerPrice=90;
		ShakesPrice=100;
	}
	void printInvoice(){
		cout<<"Your total bill is:"<<getBurgerQty()*BurgerPrice+getShakesQty()*ShakesPrice<<endl;
		cout<<"Thank you!!Please visit again."<<endl;
	}	
};
int main(){
	bill obj;
	obj.printInvoice();
	return 0;
}
