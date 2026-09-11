#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
	double a,b;char choice; 
	do{
	cout<<"请输入你的体重（千克）"<<endl;
	cin>>a;
	if(a<=0) {cout<<"你在开玩笑吗？重新填去！"<<endl;
	choice='N' ;
	continue;
	}
	cout<<"请输入你的身高（米）" <<endl;
	cin>>b;
	if(b<=0) {cout<<"你在开玩笑吗？回去重写！"<<endl;
	choice='N';
	continue; 
	}
	double BMI=a/(b*b);
	cout<<"你的BMI指数为："<<BMI<<endl; 
	if(BMI<18.5&&BMI>0){cout<<"体重过轻，多吃点！"<<endl;}
	else if(BMI>=18.5&&BMI<=23.9){cout<<"身材匀称，继续保持！"<<endl;}
	else{cout<<"体重超标，该运动了！"<<endl;
	}
	cout<<"再测一次？(输入Y/N)"<<endl;
	cin>>choice;}while(choice=='Y'||choice=='y');
	cout<<"程序结束，感谢使用！";
	return 0;
}
