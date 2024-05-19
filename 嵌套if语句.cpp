#include <iostream>
using namespace std;
int main(){
	
	//提出输入高考分数
	int score = 0;
    cout << "请输入高考考试分数" << endl;
	cin >> score;
	
	
	
	//显示高考分数
	cout << "您输入的分数为:" << endl;
	
	
	
	//判断
	//如果大于600 一本
	   // 大于700 北大
       // 大于650 清华
	   // 其余    人大
	if (score > 600){
		cout << "恭喜您考上一本大学" << endl;
		
	}
	if (score > 700){
		cout << "您能考入北京大学" << endl;
	}
	if (score > 650){
		cout << "您能考入清华大学" << endl;
	}
	else{
		cout << "您能考入人民大学" << endl;
	}
	
	
	//如果大于500 二本
	 if (score > 500)  {
		cout << "恭喜您考上二本大学" << endl;
	}
	
	//如果大于400 三本
	else if (score > 400)  {
		cout << "恭喜您考上三本大学" << endl;
	}
	
	//未考上本科
	else{
		cout << "未考上本科,请再接再励" << endl;
		
	}
	
	system("pause");
	
	
	return 0;
}
