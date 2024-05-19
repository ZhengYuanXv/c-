#include <iostream>
using namespace std;
#include <string>//用c++风格字符串要包含一个头文件
int main()
{
	//c风格字符串
	//char 后加一个[]
	//等号后面要用双引号包含起来字符串
	char str[] ="hello would";
	cout << str << endl;
	
	
	//c++风格字符串
	string str2 ="hello would";
	cout << str2 << endl;
	
	
	
	return 0;
	
}
