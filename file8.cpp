#include<iostream>
using namespace std;

int SumOfSeries(int n){
	int sum=0;
	int term=0;
	
for(int i=1;i<=n;i++){
	term=term+i;
	sum=sum+term;
}
return sum;
}
int main(){
	int n;
	cout<<"Enter any positive integer of your wish:";
	cin>>n;
	cout<<"Explanation:"<<endl;
	for(int i=1;i<=n;++i){
		int term_sum=0;
		for(int j=1;j<=i;++j){
			term_sum+=j;
			cout<<j;
			if(j<i){
				cout<<"+";
			}
		}
		int seriesSum=SumOfSeries(i);
	    cout<<"Sum of series is:"<<seriesSum<<endl;
	}
	

	return 0;
}
