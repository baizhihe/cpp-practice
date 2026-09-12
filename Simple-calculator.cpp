#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char choice;
	do{
	double a,b;char op;
	cout<<"【简易计算器】"<<endl;
	cout<<"规则："<<endl;
	cout<<"输入两个数字和一个简易运算符号(=,-,*,/)系统自动解答" <<endl;
	cout<<"(注意:数字顺序有意义)"<<endl<<endl;
	cout<<"请输入第一个数字"<<endl;
	cin>>a;
	cout<<"请输入第二个数字"<<endl;
	cin>>b;
	cout<<"请输入运算符"<<endl;
	cin>>op ;
	cout<<"计算结果为：";
	if(op=='+'){double result=a+b;cout<<result<<endl;}
	else if(op=='-'){double result=a-b;cout<<result<<endl;}
	else if(op=='*'){double result=a*b;cout<<result<<endl;}
	else if(op=='/')
	{if(b==0){cout<<"除数不能为0！" ;cout<<endl; }
	else{double result=a/b;cout<<result<<endl;}}
	else{cout<<"这个算不了"<<endl;}	
	cout<<"再来一次？（Y/N）" <<endl;
	cin>>choice ;
	}while(choice=='Y'||choice=='y');
	return 0;}
