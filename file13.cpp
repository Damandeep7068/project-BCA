#include<iostream>
using namespace std;

class array{
	private:
		int arr1[3];
		int arr2[3];
		int sum1,sum2;
	public:
		void get(){
			cout<<"Enter three numbers for first array:";
			for(int i=0;i<3;i++){
				cin>>arr1[i];
				sum1+=arr1[i];
			}
			cout<<"Enter three numbers for sor second array:";
			for(int i=0;i<3;i++){
				cin>>arr2[i];
				sum2+=arr2[i];
			}
		}
		void display(){
			if(sum1>sum2){
				cout<<"Sum of 1st array is greater";
			}
			else if(sum2>sum1){
				cout<<"Sum of 2nd array is greater";
			}
		}
};
int main(){
	array a;
	a.get();
	a.display();
	
	return 0;
}
