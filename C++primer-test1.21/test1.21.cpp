#include <iostream>
#include "Sales_item.h"
using namespace std;

//��д���򣬶�ȡ����ISBN��ͬ��Sales_item����������ǵĺ�
int main()
{
	Sales_item item1,item2;
	cin >> item1 >> item2;

	cout << item1 + item2 << endl;

	system("pause");
	return EXIT_SUCCESS;
}