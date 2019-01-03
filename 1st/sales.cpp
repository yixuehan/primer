// 销量
#include <iostream>
using namespace std;

#include "sales_item.h"

int main()
{
    // 打印连续相同的书的销量总信息
    Sales_item total;
    cout << "isbn 销量 价格:";
    if (cin >> total) {
        Sales_item trans;
        cout << "isbn 销量 价格:";
        while (cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            }
            else {
                cout << total << endl;
                total = trans;
            }
            cout << "isbn 销量 价格:";
        }
        cout << total << endl;
    }
    else {
        cerr << "No data?!\n";
        return -1;
    }
    return 0;
}


