#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char choice;
	do{
	int a,b; 
	cout<<"来算算今天的幸运值吧！"<<endl;
	cout<<"今天多少次感觉自己幸运？"<<endl; 
	cin>>a;
	cout<<"今天多少次感觉自己倒霉？"<<endl;
	cin>>b;
	if(a==0&&b==0) {cout<<"无事发生？平平淡淡才是真~"<<endl;
	cout<<"再试一次？"<<endl;
	cin>>choice;continue;}
	else{
	int luck=100+a*3-b*5;
	cout<<"今天的幸运值为:" <<luck<<endl; 
	if(luck>=80&&luck<=100) {cout<<"今天的命运掌握在你自己手里"<<endl;}
	else if(luck<80) {cout<<"你觉得今天不宜出门"<<endl;	}	
	else{cout<<"你觉得今天该去买彩票"<<endl;}
	cout<<"还要再来一次吗？（Y/N）"<<endl;
	cin>>choice;}}while(choice=='Y'||choice=='y');cout<<"感谢使用！"<<endl;return 0;
	return 0;}
