#include <iostream>
#include <string>
using namespace std;
/*��дһ������ӱ�׼�����ж������ַ�����������������һ��������ӳɴ��ַ�����
Ȼ���޸����������ÿո������Ķ���ַ����ָ�����*/
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