#include <stdio.h>
#include <stdlib.h>



#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<time.h>
using namespace std;

struct Unite{
	int unite;//���浥��������Ԫ
	char data[9];//����õ�Ԫ��һ�μ��������
};
int  get_days(const char* from,int year1,int month1,int day1);//������������֮�������
class ForgettingCurveMemory{

   public:
   	ForgettingCurveMemory();
	void readfile();//�жϽ�����Ҫ��ϰ�ļ�����Ԫ
	void RecordUniteDate();//��¼���챳�еĵ�Ԫ���Լ�����
	int cuntdate(const char* from);��ȡϵͳ��ǰ����
	void meum();
   	~ForgettingCurveMemory();

   private:
      ofstream outfile;
      ifstream infile;
};
ForgettingCurveMemory::ForgettingCurveMemory(){
}
void ForgettingCurveMemory::readfile(){
	int flag=0;//���������ظ��ж��ļ����һ����Ԫ��Ϣ
	int days;
	Unite unite2;
	const char* from;
	const char* to;
	ifstream infile("unite.dat",ios::out);
	if(!infile){
		cerr<<"open error!"<<endl;
		abort();
	}
	cout<<"��������Ҫ���еĵ�Ԫ��"<<endl;
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
	ofstream outfile("unite.dat",ios::out | ios::binary | ios::app);//�ڶ������ļ���׷������
	cout<<"����������(���ո�ʽ��xxxx-xx-xx ��)"<<endl;
	cin>>unite1.data;
	cout<<"�����뵥Ԫ��"<<endl;
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
		cout<<"1����¼����ĵ�Ԫ"<<endl;
		cout<<"2�����ҽ���Ӧ�ø�ϰ�ĵ�Ԫ"<<endl;
		cout<<"3���˳�����"<<endl;
		cout<<"**~**~**~**~**~**~**~**~**~*"<<endl;
		cout<<"ѡ�������";

		cin>>num;
		switch(num){
			case 1:example1.RecordUniteDate();break;
			case 2:example1.readfile();break;
			case 3:exit(0);break;
		}
	}while(1);


}
//����ĺ���
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
