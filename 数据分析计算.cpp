#include<iostream>
#include<string> 
#include<cmath>
using namespace std;

template<class T>//数组赋值函数模板 
void input(int n,T arr[])
{
	for(int i=0;i<n;i++)
	cin>>arr[i];
}

template <class T>//输出数组函数模板 
void output(int n,const T arr[])
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"  ";
}

template<typename T>//从小到大冒泡排序函数模板 
void order(int n,T arr[])
{
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
			    T temp = arr[j+1];
			    arr[j+1]=arr[j];
			    arr[j] = temp;
		    }
		}
	}
}

template <class T>//求并输出中位数函数模板
T mid(int n,const T arr[])
{
	T Arr[n];
	for(int i=0;i<n;i++)
	Arr[i]=arr[i];
	order(n,Arr);
	T m=0;
	int N=n%2;
	switch(N) 
	{
		case 0:
			m=(Arr[n/2]+Arr[n/2-1])/2;
			break;
		default:
			m=Arr[n/2];
	}
	return m;
}

template <typename T>//求并输出平均值函数模板
T average(int n,const T arr[]) 
{
	T s=0;
	for(int i=0;i<n;i++)
	s+=arr[i];
	return s/n;
}

template <class T>//求并输出方差函数模板 
T Sum(int n,const T arr[])
{
	T s=0;
	T a = average(n,arr);
	T Arr[n];
	for(int i=0;i<n;i++)
	Arr[i]=arr[i];
	for(int i=0;i<n;i++)
	Arr[i]-=a;
	for(int i=0;i<n;i++)
	s+=(Arr[i]*Arr[i]);
	return s/n;
}

int fun(int T)//犯贱的小程序 
{
	switch(T){
		case 0:
		    break;
		case 1:
			cout<<"(好了好了，该认真点了)\n";
			break;
		case 2:
			cout<<"(乖，听话，宝)\n";
	        break;
		case 3:
			cout<<"(快点，我可没空陪你玩)\n";
			break;
		case 4:
			cout<<"(你到底用不用? 不用就退了吧)\n";
		    break;
		case 5:
			cout<<"(艹你妈，有屁快放，速！)\n";
			break;
		case 6:
			cout<<"(臭傻逼，给你最后一次机会，再这样就不和你玩了)\n";
			break;
		default:
			for(int i=0;i<100;i++){
				for(int j=0;j<60;j++){
					cout<<"你干嘛~\t我退了\t那咋了\t有病吧\t若如鸷\t贝如塔\tcnm\t我比你更崩溃\t啊啊啊啊啊啊啊啊\n";
				}
				system("cls");
			}
			cout<<"  呵呵。。。\n\n（版权所有---唐氏，请勿转发或侵权，谢谢配合）";
			cin.get();
			cin.get();
			system("cls");
			cout<<"再见！加拿~~\n"; 
			system("pause");
			return 0;
	} 
} 

double *table(int n)//物理实验误差A类不确定度的t分布表 
{
	double *T=new double[4];
	if((n<3)||(n>10&&n<15)||(n>15&&n<20)){
		for(int i=0;i<4;i++)
		T[i]=0;
	}
	else{
		switch(n){
		case 3:
			T[0]=1.32;T[1]=2.92;T[2]=4.30;T[3]=9.93;
			break;
		case 4:
			T[0]=1.20;T[1]=2.35;T[2]=3.18;T[3]=5.84;
			break;
		case 5:
			T[0]=1.14;T[1]=2.13;T[2]=2.78;T[3]=4.60;
			break;
		case 6:
			T[0]=1.11;T[1]=2.02;T[2]=2.57;T[3]=4.03;
			break;
		case 7:
			T[0]=1.09;T[1]=1.94;T[2]=2.46;T[3]=3.71;
			break;
		case 8:
			T[0]=1.08;T[1]=1.86;T[2]=2.37;T[3]=3.50;
			break;
		case 9:
			T[0]=1.07;T[1]=1.83;T[2]=2.31;T[3]=3.36;
			break;
		case 10:
			T[0]=1.06;T[1]=1.76;T[2]=2.26;T[3]=3.25;
			break;
		case 15:
			T[0]=1.04;T[1]=1.73;T[2]=2.15;T[3]=2.98;
			break;
		case 20:
			T[0]=1.03;T[1]=1.71;T[2]=2.09;T[3]=2.86;
			break;
		default://n趋于无穷
			T[0]=1.00;T[1]=1.65;T[2]=1.96;T[3]=2.58;
			break;
	    }
	}
	return T;
}

int main(){
    bool R=1;
	while(R){
    	cout<<"请问想输入多少个数字？（输完一个整数后点击回车键继续）\n"; 
			int M=0;
			string str;
			int time=0; 
			Target: 
			fun(time);
			if(time==7)
			return(fun(time));
			cin>>str;
			int m=0;
			int a=str.length();
			    for(int i=1;a-i>=0;i++){
				    int b=(int)str[a-i];//ASCII码 ，转字符型为整型 
				    if(b>47&&b<58){
					    b-=48;
				     	for(int j=0;i-j>0;j++){
						    b=b*10;
					    }
				    	b=b/10;
				        m+=b;
			    	}
				    else{
						system("cls");
					    cout<<"请输入一个有效正整数：\n";
					    time++;
						goto Target;
			     	}
		        }
		    if(m==0){
				system("cls");
				cout<<"请输入一个大于0的整数：\n";
				time++;
				goto Target;
			}	 
			system("cls");
		    M=m;
			/*while(true){
				cin>>M;
		    	if(M<1){
				system("cls");
				cout<<"输入的整数应大于等于 1\n请重新输入：";
			    }
			    else{
			    	system("cls");
			    	break;
				}
			} */
			double arr[M];
			cout<<"请输入"<<M<<"个数字，每输完一个数字点击回车键继续\n（或者输入一行数字，"<<M<<"个数字间各用一个空格隔开，输完后再点回车键继续）\n";
			input(M,arr);
			cout<<"\n已输完 "<<M<<" 个数字\n"<<"按输入先后顺序分别是：\n";
			output(M,arr);
			cout<<"\n以下是按从小到大重新排序后的数字：\n"; 
			order(M,arr);
			output(M,arr);
			double B=Sum(M,arr)*M/(M-1);
			double *t=table(M);
			cout<<"\n\n这串数字的\n最小值："<<arr[0]<<"\n最大值："<<arr[M-1]<<"\n中位数："<<mid(M,arr)
			<<"\n平均值："<<average(M,arr)<<"\n总和：\t"<<average(M,arr)*M<<"\n极差：\t"<<arr[M-1]-arr[0]
			<<"\n方差：\t"<<Sum(M,arr)<<"\n标准差："<<sqrt(Sum(M,arr))
			<<"\n\n物理实验误差数据分析（北林物理实验C专用）\n" <<"有限次测量的标准差：\tS = "<<sqrt(B)
			<<"\n算术平均值x的标准偏差：\tSx= "<<sqrt(B/M)<<" （代码打不出来x上加一杠的字符，记得补上）"
			<<"\nA类不确定度（按t分布表，n="<<M<<"）\n"
			<<"当P=0.68，t="<<t[0]<<"时，\tΔA="<<t[0]*sqrt(B/M)
			<<"\n当P=0.90，t="<<t[1]<<"时，\tΔA="<<t[1]*sqrt(B/M)
			<<"\n当P=0.95，t="<<t[2]<<"时，\tΔA="<<t[2]*sqrt(B/M)
			<<"\n当P=0.99，t="<<t[3]<<"时，\tΔA="<<t[3]*sqrt(B/M); 
			if(M<3)
			cout<<"\n(因为n<3，不符合实验次数标准，实验数据无意义，已自动将t赋值为0)";
			else if(M>20)
			cout<<"\n(因为n>20，超出了教材所给的范围，已自动将n默认为无穷大并为t赋相应的值)";
			else if((M>10&&M<15)||(M>15&&M<20)){
				cout<<"\n\n(因为n="<<M<<"，教材中的t分布表并未给出其具体值，暂时将t赋值为0)\n"
				<<"请问是否手动输入其相应的值？(输入数字代表你的选择，输完后按回车键继续)\n1：是		2：否\n" ; 
				int ch = 0;
				cin>>ch;
				if(ch==1){
					cout<<"请输入对应P下的相应的t值：(输完按回车键会计算输出结果，不需要用到的t值输入0按回车键跳过即可)\n";
					double e,f,g,h;
					cout<<"当P=0.68，t=";cin>>e;cout<<"ΔA="<<e*sqrt(B/M)
					<<"\n当P=0.90，t=";cin>>f;cout<<"ΔA="<<f*sqrt(B/M)
					<<"\n当P=0.95，t=";cin>>g;cout<<"ΔA="<<g*sqrt(B/M)
					<<"\n当P=0.99，t=";cin>>h;cout<<"ΔA="<<h*sqrt(B/M);
				}
			}
			delete[] table(M);
			cout<<"\n\n输入1按回车键清屏并继续\n"<<"输入0按回车键退出程序\n";
			cin>>R;
			if(R){
				cin.get();
			    system("cls"); 
			}
			else
			break;
	} 
	system("pause");
    return 0; 
 } 
