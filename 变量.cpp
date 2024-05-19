#include <iostream>
using namespace std;

//常量的定义方式
//1.#define 宏变量 Day是常量，一旦修饰就会报错
//2.const 修饰的变量 const修饰的变量也称为常量 “变量”




#define Day 7

int main(){
	
   cout << "一周总共有:" << Day << "天" << endl;	
	
	const int month = 12;
	
	cout << "一年总共有:"  << month <<"个月份" << endl;
	system("pause");
	
	return 0;
	
	
	
}
