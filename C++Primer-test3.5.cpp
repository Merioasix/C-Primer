#include <iostream>
#include <string>
using namespace std;
/*编写一个程序从标准输入中读入多个字符串并将他们连接在一起，输出连接成大字符串，
然后修改上述程序用空格把输出的多个字符串分隔开来*/
int main()
{
	string line1, line2, line3;
	string line4,line5;
	getline(cin, line1);
	getline(cin, line2);
	getline(cin, line3);

	line4 = line1 + line2 + line3;
	line5 = line1 + " " + line2 + " " + line3;

	cout << line4 << endl;
	cout << line5 << endl;

	system("pause");
	return 0;
}