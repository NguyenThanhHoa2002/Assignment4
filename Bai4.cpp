#include "iostream"
#include "vector"
#include <iomanip>
#include "Inventory.h"
using namespace std;

const int col = 4;
const int col_w = 25;

void drawLine();
void printInventoryItem();
void printInventoryItem(const Inventory &iItem);

int main(int argc, char const *argv[])
{
    vector<Inventory> inventory;

    inventory.push_back(Inventory(-1, 59.95, 12));
    inventory.push_back(Inventory(2, 34.95, 40));
    inventory.push_back(Inventory(3, 24.95, 20));

    drawLine();

    printInventoryItem();

    drawLine();

    int i = 0;
    for (Inventory &iItem : inventory)
    {
        printInventoryItem(iItem);
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
    cout << " " << setw(col_w) << left << "Item Number" << setw(col_w) << left << "Quantity" << setw(col_w) << left << "Cost" << setw(col_w) << left << "Total cost" << endl;
}

void printInventoryItem(const Inventory &iItem)
{
    cout << " " << setw(col_w) << left << iItem.getItemNumber() << setw(col_w) << left << iItem.getQuantity() << setw(col_w) << left << iItem.getCost() << setw(col_w) << left << iItem.getTotalCost() << endl;
}
