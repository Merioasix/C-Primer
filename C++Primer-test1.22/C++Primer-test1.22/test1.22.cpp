#include <iostream>
#include "Sales_item.h"
using namespace std;

/*��ȡ���������ͬISBN�����ۼ��ɣ�������ü�¼�ĺ�*/

int main()
{
	Sales_item item1, item2, item3, item4;
	cin >> item1 >> item2 >> item3 >> item4;
	cout << item1 + item2 + item3 + item4;

	system("pause");
	return EXIT_SUCCESS;
}