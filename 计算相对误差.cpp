#include<iostream>
using namespace std;
int main(){
	while(1){
		double a,b,c;
	Target:
	cout<<"����������ֵ��";
	cin>>a;
	if(a==0){
		system("cls");
		cout<<"����ֵ����Ϊ0��������һ��\n";
		goto Target; 
	}
	cout<<"\n������ʵ��ֵ��";
	cin>>b;
	c=(a-b)/a*100;
	if(c<0)c=-c;
	cout<<"\n������Ϊ��\n"<<c<<"%\n"<<"\n����ʹ��������1���˳�������0��"; 
	cin>>c;
	if(c==0)break; 
	if(c==1)system("cls");
	}
	return 0;
	
} 
