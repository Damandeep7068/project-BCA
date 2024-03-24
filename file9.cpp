#include<iostream>
using namespace std;

class ABC{
	private:
		float salary;
	public:
		ABC(){}
		ABC(float S){salary=S;}
		void show(){
			cout<<salary<<endl;
		}
		int friend operator+(float S,ABC obj);
};
int operator+(float S,ABC obj){
	return S+obj.salary;
}
int main(){
	ABC obj1(12000);
	ABC obj2=5500+obj1;
	obj2.show();
	
	return 0;
}
