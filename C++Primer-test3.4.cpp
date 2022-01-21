#include <iostream>
#include <string>
using namespace std;
using std::string;
/*编写一个程序读入两个字符串，比较其是否相等并输出结果，如果不相等，输出较大的那个字符串，
改写上述程序，比较输入的两个字符串是否相等，如果不等长，输出长度较大的那个字符串*/
//int main()
//{
//	string line1,line2;
//	getline(cin,line1);
//	getline(cin, line2);
//
//	if (line1 == line2)
//	{
//		return 0;
//	}
//	else
//	{
//		if (line1 > line2)
//		{
//			cout << line1 << endl;
//		}
//		else
//		{
//			cout << line2 << endl;
//		}
//	}
//
//
//	system("pause");
//	return 0;
//}



int main()
{
	string line1, line2;
	getline(cin,line1);
	getline(cin, line2);
	if (line1.size() == line2.size())
	{
		return 0;
	}
	else
	{
		if (line1.size() > line2.size())
		{
			cout << line1 << endl;
		}
		else
		{
			cout << line2 << endl;
		}
	}




	system("pause");
	return 0;
}