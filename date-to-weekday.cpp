#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
int year,month,day;
string weekname[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
cout<<"请输入要转换的日期(年月日用回车分开)" <<endl;
	while(cin>>year>>month>>day){
	//计算天数
	int runyear=0;

	for(int i=1;i<year;i++){
		if((i%4==0&&i%100!=0)||i%400==0){runyear++;}
		}//得到闰年数目（不包括输入的当前年份）
	int c; int totalday=0;
	if((year%4==0&&year%100!=0)||year%400==0){//判断当年为闰年，二月有29天
	int daysofmonth[13]={0,31,29,31,30,31,30,31,31,30,31,30,31} ;
	for(int i=1;i<month;i++){
	totalday=totalday+daysofmonth[i]; 
	}
	} 
	else{
	int daysofmonth[13]={0,31,28,31,30,31,30,31,31,30,31,30,31} ;
	for(int i=1;i<month;i++){
	totalday=totalday+daysofmonth[i];  
	} }
	c=totalday+day;//得到该年的天数 
	int b=c+runyear*366+(year-1-runyear)*365;
	cout<<"该日是："<<weekname[b%7]<<endl;}
	return 0;
}
