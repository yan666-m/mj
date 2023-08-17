#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class mianji
{
public:
	void  zhengfangxing()//正方形面积
	{
		cout<<"请输入正方形的边长"<<endl;
		double a,b,sig,s;
		cin>>a;
		cout<<"请选择单位-1、厘米；2、英寸"<<endl;
		cin>>sig;
		if(sig==1) b=a;
		else b=2.54*a;
		s=b*b;
		cout<<"正方形面积为"<<s<<"平方厘米"<<endl;
	};

}；
int main()
{
	mianji ss;
	ss.zhengfangxing();
}
