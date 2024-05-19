#include <iostream>
using namespace std;
int main()
{
	//前置递增
	int a = 10;
	++a;//让变量+1
	cout << "a=:"<<a <<endl;

	
	//后置递增
	int b = 10;
	b++;//让变量+1
	cout << "b=" << b << endl;

	
	//前置后置的区别
	//前置递增 先让变量+1 然后进行表达式运算
	int a2 = 10;//11
	int b1 = ++a2 * 10;//110
	cout << "a2=" << a2 << endl;
	cout << "b1=" << b1 << endl;
	
	
	
	//后置递增 先进行表达式运算，后让变量+1
	int c = 10;//11
	int d = c++ * 10;//100
	cout << "c="<< c << endl;
	cout << "d="<< d << endl;
	
	
	
	
	
	system("pause");
	return 0;
	
}
