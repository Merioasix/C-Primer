#include <iostream>
#include <string>
using namespace std;
using std::string;
/*��дһ��������������ַ������Ƚ����Ƿ���Ȳ����������������ȣ�����ϴ���Ǹ��ַ�����
��д�������򣬱Ƚ�����������ַ����Ƿ���ȣ�������ȳ���������Ƚϴ���Ǹ��ַ���*/
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