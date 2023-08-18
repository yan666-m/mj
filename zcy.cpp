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
void yuanxing()     //圆形面积
        {
                double s, r, S;
                cout << "请输入圆形的半径:" << endl;
                cin >> r;
                s = 3.1416 * r * r;
                int x;
                cout << "请选择单位" << endl << "1.厘米，2.英寸";
                cin >> x;
                if (x == 1)S = s;
                else S = 6.4516 * s;
                cout << "圆形面积为" << S << "平方厘米";
        };

}；
int main()
{
	mianji ss;
	  cout<<"请选择图形-1、圆形；2、正方形"<<endl;
        int choice;
        cin>>choice;
        switch(choice)
        {
                case(1):ss.yuanxing();
                case(2):ss.zhengfangxing();
        }

}
