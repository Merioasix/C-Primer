#include<iostream>
#include<vector>
#include "Sales_data.h"
using namespace std;

int main() {
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
			if (total.bookNo == trans.bookNo) {
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else {
				cout << "���:" << total.bookNo << endl << "������:" << total.units_sold << endl << "���۽��:" << total.revenue << endl;
				total = trans;
			}
		}
		cout << "���:" << total.bookNo << endl << "������:" << total.units_sold << endl << "���۽��:" << total.revenue << endl;
	}
	else {
		cout << "no data?" << endl;
	}
	return 0;
};
