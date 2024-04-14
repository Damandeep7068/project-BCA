#include<iostream>
using namespace std;

class array{
	private:
		int*myArray;
	public:
		array(int elements){
			myArray=new int[elements];
		}
		void initializeArray(int size){
			int *temp=myArray;
			for(int i=0;i<size;i++){
				*temp=i*10;
				temp++;			
			}
		}
		void display(int size){
			for(int i=0;i<size;i++){
				cout<<myArray[i]<<endl;
			}
		}
};
int main(){
	array obj(5);
	obj.initializeArray(5);
	obj.display(5);
	return 0;
}
