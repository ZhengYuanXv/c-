#include <iostream>
using namespace std;

int main()
{
	float a = 3.1416554f;//单精度
	
	cout << "f1 ="<< a <<endl;
	
	double b = 3.1446546544;//双精度
	
	cout << "原神:"<< b <<endl;
	//都会显示6位有效数字
	
	//统计float和double占有内存空间
   
	cout << "float占有内存空间为:"<<sizeof(float)<<endl;//4字节
    cout << "double占有内存空间为:"<<sizeof(double)<<endl;//8字节
	
	//科学计数法
	
	float c = 3e2;//3*10的2次方(10 ^ 2)
	cout <<"c = "<< c <<endl;
	
	float d = 3e-2;// 3 * 0.1 ^ 2(0.1的2次方)
	cout <<"d = "<< d <<endl;
	
	
	
	system("pause");
	return 0; 
	
	
}
