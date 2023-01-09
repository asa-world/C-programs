#include <stdio.h>
#include <stdlib.h>



#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<time.h>
using namespace std;

struct Unite{
	int unite;//保存单词所属单元
	char data[9];//保存该单元第一次记忆的日期
};
int  get_days(const char* from,int year1,int month1,int day1);//计算两个日期之间的天数
class ForgettingCurveMemory{

   public:
   	ForgettingCurveMemory();
	void readfile();//判断今天需要复习哪几个单元
	void RecordUniteDate();//记录今天背诵的单元号以及日期
	int cuntdate(const char* from);获取系统当前日期
	void meum();
   	~ForgettingCurveMemory();

   private:
      ofstream outfile;
      ifstream infile;
};
ForgettingCurveMemory::ForgettingCurveMemory(){
}
void ForgettingCurveMemory::readfile(){
	int flag=0;//用来消除重复判断文件最后一个单元信息
	int days;
	Unite unite2;
	const char* from;
	const char* to;
	ifstream infile("unite.dat",ios::out);
	if(!infile){
		cerr<<"open error!"<<endl;
		abort();
	}
	cout<<"您今天需要背诵的单元："<<endl;
	while(!infile.eof()){

		infile.read((char*)&unite2,sizeof(unite2));
		from=unite2.data;
		if(flag==unite2.unite)
			break;
		flag=unite2.unite;
		days=ForgettingCurveMemory::cuntdate(from);
		if(days==1 || days==2 || days==4 || days==7 || days == 15 || days>15)
			cout<<unite2.unite<<" ";
	}
	cout<<endl;
	infile.close();
}
void ForgettingCurveMemory::RecordUniteDate(){
	Unite unite1;
	ofstream outfile("unite.dat",ios::out | ios::binary | ios::app);//在二进制文件里追加内容
	cout<<"请输入日期(按照格式“xxxx-xx-xx ”)"<<endl;
	cin>>unite1.data;
	cout<<"请输入单元号"<<endl;
	cin>>unite1.unite;
	outfile.write((char*)&unite1,sizeof(unite1));
	outfile.close();
}
int ForgettingCurveMemory::cuntdate(const char* from){

	int days;
	time_t rawtime;
    struct tm *ptminfo;
    time(&rawtime);
    ptminfo = localtime(&rawtime);
	days=get_days(from,ptminfo->tm_year + 1900, ptminfo->tm_mon + 1, ptminfo->tm_mday);
	return days;
}
ForgettingCurveMemory::~ForgettingCurveMemory(){
	outfile.close();
	infile.close();
}

void ForgettingCurveMemory::meum(){

	ForgettingCurveMemory example1;
	int num,flag=1;
	do{
		cout<<"**~**~**~**~**~**~**~**~**~*"<<endl;
		cout<<"1、记录今天的单元"<<endl;
		cout<<"2、查找今天应该复习的单元"<<endl;
		cout<<"3、退出程序"<<endl;
		cout<<"**~**~**~**~**~**~**~**~**~*"<<endl;
		cout<<"选择操作：";

		cin>>num;
		switch(num){
			case 1:example1.RecordUniteDate();break;
			case 2:example1.readfile();break;
			case 3:exit(0);break;
		}
	}while(1);


}
//类外的函数
time_t convert(int year,int month,int day)

{
	tm info={0};
	info.tm_year=year-1900;
	info.tm_mon=month-1;
	info.tm_mday=day;
	return mktime(&info);
}

int  get_days(const char* from,int year1,int month1,int day1)

{
	int year,month,day;
	sscanf(from,"%d-%d-%d",&year,&month,&day);
	int fromSecond=(int)convert(year,month,day);
	int toSecond=(int)convert(year1,month1,day1);
	return (toSecond-fromSecond)/24/3600;
}
int main(){

	ForgettingCurveMemory example;
	example.meum();
	return 0;
}
