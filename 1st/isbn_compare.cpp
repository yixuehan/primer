#include <iostream>
using namespace std;

#include "sales_item.h"

int main()
{
    Sales_item item1, item2;
    cout <<  "isbn 销量  价格:";
    cin >> item1;
    cout <<  "isbn 销量  价格:";
    cin >> item2;
    if (item1.isbn() == item2.isbn()) {
        cout << item1 + item2 << endl;
        return 0;
    }
    else {
        cerr << "Data must refer to same ISBN\n";
        return -1;
    }
}
