#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double scores[5] ;double sum=0;
	cout<<"总分计算（for与scores练习）"<<endl;
	cout<<"请分别输入5个成绩（用回车分开输入）"<<endl ;
	for(int i=0;i<5;i++)
	{cout<<"第"<<i+1<<"科的成绩为:";
	cin>>scores[i] ;cout<<endl;
	sum=sum+scores[i];}
	sum=sum/5;
	cout<<"经计算，你的平均分为："<<sum<<endl; 
	double maxScore=scores[0];
	for(int m=1;m<5;m++)
	{if(maxScore<=scores[m]){
	maxScore=scores[m];};
	}
	cout<<"最高分为：" <<maxScore<<endl;
			return 0;
}
