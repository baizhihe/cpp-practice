#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a;
	char choice;
	do{
	cout<<"【判断闰年练习】"<<endl; 
	cout<<"请输入想查询的年份"<<endl;
	cin>>a;
	int mod4=a%4,mod100=a%100,mod400=a%400;
	if(mod4==0&&mod100!=0){cout<<"该年为闰年"<<endl; 
	}
	else if(mod400==0){cout<<"该年为闰年"<<endl; 
	}
	else{cout<<"该年不是闰年"<<endl; 
	}
	cout<<"要再来一次吗？（Y/N）" <<endl; 
	cin>>choice;}while(choice=='Y'||choice=='y');
	cout<<"感谢使用！结束运行"<<endl;
	return 0;
}
