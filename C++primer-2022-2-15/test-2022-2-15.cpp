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
				cout << "书号:" << total.bookNo << endl << "销售量:" << total.units_sold << endl << "销售金额:" << total.revenue << endl;
				total = trans;
			}
		}
		cout << "书号:" << total.bookNo << endl << "销售量:" << total.units_sold << endl << "销售金额:" << total.revenue << endl;
	}
	else {
		cout << "no data?" << endl;
	}
	return 0;
};
