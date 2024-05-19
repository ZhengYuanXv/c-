#include <iostream>
using namespace std;
int main()
{
	//加减乘除
	int a = 10;
	int b = 3;
    cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;//两个整数相除 结果依然是整数，将小数部去除

	int a1 = 10;
	int b1 = 20;
	cout << a1 / b1 << endl;
	//除数不可以为0
	//两个小数可以相除
	double c = 0.5;
	double d = 0.25;
	cout << c / d << endl;//运算的结果也可以是小数
	//总结: 在除法运算中,除数不能为0
	
	
	
	
	
	
	
	system("pause");
	return 0;
	
}
