#include <iostream>
#include <vector>
#include "Sales_data.h"
using namespace std;
int main()
{
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue) 
	{
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) 
		{
			if (total.bookNo == trans.bookNo)
				total.combine(trans);
			else 
			{
				cout << "��ţ�" << total.bookNo << endl << "������" << total.units_sold << endl << "���۶" << total.revenue << endl;
				total = trans;
			}
		}
		cout <<"��ţ�"<< total.bookNo << endl <<"������" <<total.units_sold << endl <<"���۶"<< total.revenue << endl;
	}
	else {
		cerr << "NO data?" << endl;
		return -1;
	}
	system("pause");
	return 0;
}