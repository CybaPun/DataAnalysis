#include<iostream>
using namespace std;
int main(){
	while(1){
		double a,b,c;
	Target:
	cout<<"请输入理论值：";
	cin>>a;
	if(a==0){
		system("cls");
		cout<<"理论值不可为0，请再试一次\n";
		goto Target; 
	}
	cout<<"\n请输入实际值：";
	cin>>b;
	c=(a-b)/a*100;
	if(c<0)c=-c;
	cout<<"\n相对误差为：\n"<<c<<"%\n"<<"\n继续使用请输入1，退出可输入0："; 
	cin>>c;
	if(c==0)break; 
	if(c==1)system("cls");
	}
	return 0;
	
} 
