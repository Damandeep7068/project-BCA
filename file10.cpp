#include<iostream>
using namespace std;

class book{
	public:
		string title;
		string author;
};
int main(){
	string library[5][2]={
	{"2310990001","Harry potter"},
	{"2310990002","Dont be afraid"},
	{"2310990003","Laugh out loud"},
	{"2310990004","Motivation"},
	{"2310990005","Sherlock homes"},
	};
	cout<<"Enter ISBN:";
	string isbn;
	cin>>isbn;
	bool found=false;
	for(int i=0;i<5;++i){
		if(library[i][0]==isbn){
			found=true;
			cout<<"Book found"<<endl;
			cout<<"Title:"<<library[i][1]<<endl;
			break;
		}
	}
	if(not found){
			cout<<"Book with this isbn is not available."<<endl;
	}
	return 0;
}
