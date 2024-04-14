#include<iostream>
using namespace std;

int maximum(int*a,int*b,int*c){
	int max=*a;
	
if(*b > max){
	max=*b;
}
if(*c >max){
	max=*c;
}
return max;
}
int main(){
	int n1,n2,n3;
	cout<<"Enter first number:"<<endl;
	cin>>n1;
	cout<<"Enter second number:"<<endl;
	cin>>n2;
	cout<<"Enter third number:"<<endl;
	cin>>n3;
	int max=maximum(&n1,&n2,&n3);
	cout<<"The maximum among the three is:"<<max<<endl;
	
	return 0;
}
