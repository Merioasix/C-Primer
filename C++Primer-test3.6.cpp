#include <iostream>
#include <string>
using namespace std;


//int main()
//{
//	string str("some string");
//	for (auto c : str)
//		cout << c << endl;
//
//
//	system("pause");
//	return 0;
//}

/*使用范围for语句和ispunct函数来统计string对象中标点符号的个数*/
//int main()
//{
//	string s("Hello World!!!");
//	decltype(s.size()) punct_cnt = 0;
//
//	for (auto c : s)
//		if (ispunct(c))
//			++punct_cnt;
//	cout << punct_cnt
//		<< "punctuation characters in" << s << endl;
//
//	system("pause");
//	return 0;
//}

int main()
{
	string s("Hello World!!!");
	for (auto& c : s)
	{
		c = toupper(c);
	}
	cout << s << endl;



	system("pause");
	return 0;
}