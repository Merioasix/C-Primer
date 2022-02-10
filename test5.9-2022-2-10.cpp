#include <iostream>
using namespace std;



int main()
{

	unsigned aCnt = 0;
	unsigned eCnt = 0;
	unsigned iCnt = 0;
	unsigned oCnt = 0;
	unsigned uCnt = 0;
	char ch = '0';

	while (cin >> ch ,!cin.eof())
	{
		if (ch == 'a')
			aCnt++;
		else if (ch == 'e')
			eCnt++;
		else if (ch == 'i')
			iCnt++;
		else if (ch == 'o')
			oCnt++;
		else if (ch == 'u')
			uCnt++;
	}
	cout << aCnt << eCnt << iCnt << oCnt << uCnt << endl;


	system("pause");
	return 0;
}