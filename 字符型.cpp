#include <iostream>
using namespace std;

int main()
{
	//1.字符型变量创建方式
	
	char ch = 'a';
	cout << ch <<endl;
	
	//2.字符型变量所占内存大小
	
	cout << "char字符型变量所占内存大小:"<<sizeof(char)<< endl;
	
	
	//3.字符型变量常见错误
	
	//char ch2 = "b";//创建字符型变量时候,要用到单引号
	//char ch2 = 'wadljw';//创建字符型变量时候,单引号内只能有一个字符
	
	
	//4.字符型变量对应ASCII编码
	//a - 97
	//A - 65
	cout << (int)ch << endl;
	
	system("pause");
	return 0;
}
