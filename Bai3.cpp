#include "iostream"
#include <iomanip>
#include "RetailItem.h"
#include <vector>

using namespace std;

const int col = 4;
const int col_w = 25;

void drawLine();
void printInventoryItem();
void printRetailItem(const RetailItem &rItem, const int &index);

int main(int argc, char const *argv[])
{
    vector<RetailItem> listRetailItem;

    listRetailItem.push_back(RetailItem("Jacket", 12, 59.95));
    listRetailItem.push_back(RetailItem("Designer Jeans", 40, 34.95));
    listRetailItem.push_back(RetailItem("Shirt", 20, 24.95));

    drawLine();

    printInventoryItem();

    drawLine();

    int i = 0;
    for (RetailItem &RI : listRetailItem)
    {
        printRetailItem(RI, ++i);
    }

    drawLine();
    return 0;
}
void drawLine()
{
    cout << setfill('-');
    cout << setw(col_w * col + (col + 1)) << "-" << endl;
    cout << setfill(' ');
}
void printInventoryItem()
{
    cout << " " << setw(col_w) << left << "Item" << setw(col_w) << left << "Description" << setw(col_w) << left << "Units On Hand" << setw(col_w) << left << "Price" << endl;
}

void printRetailItem(const RetailItem &rItem, const int &index)
{
    cout << " " << setw(col_w) << left << "#" + to_string(index) << setw(col_w) << left << rItem.getDescription() << setw(col_w) << left << rItem.getUnitsOnHand() << setw(col_w) << left << rItem.getPrice() << endl;
}
