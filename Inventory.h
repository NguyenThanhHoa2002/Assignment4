using namespace std;

/**
 * @brief an Inventory class that can hold information and calculate data for items in a retail store’s inventory
 *
 */
class Inventory
{
private:
    /**
     * @brief An int that holds the item’s item number
     *
     */
    int itemNumber;

    /**
     * @brief An int for holding the quantity of the items on hand
     *
     */
    int quantity;

    /**
     * @brief A double for holding the wholesale per-unit cost of the item
     *
     */
    double cost;

    /**
     * @brief A double for holding the total inventory cost of the item (calculated as quantity times cost)
     *
     */
    double totalCost;

public:
    /**
     * @brief Construct a new Inventory object
     *
     */
    Inventory();

    /**
     * @brief Construct a new Inventory object
     *
     * @param a_itemNumber
     * @param a_cost
     * @param a_quantity
     */
    Inventory(const int &a_itemNumber, const double &a_cost, const int &a_quantity);

    /**
     * @brief Set the Item Number object
     *
     * @param a_itemNumber
     * @return int
     */
    int setItemNumber(const int &a_itemNumber);

    /**
     * @brief Set the Quantity object
     *
     * @param a_quantity
     * @return int
     */
    int setQuantity(const double &a_quantity);

    /**
     * @brief Set the Cost object
     *
     * @param a_cost
     * @return int
     */
    int setCost(const double &a_cost);

    /**
     * @brief Set the Total Cost object
     *
     * @param a_cost
     * @param a_quantity
     */
    void setTotalCost(const double &a_cost, const int &a_quantity);

    /**
     * @brief Get the Item Number object
     *
     * @return int
     */
    int getItemNumber() const;

    /**
     * @brief Get the Quantity object
     *
     * @return int
     */
    int getQuantity() const;

    /**
     * @brief Get the Cost object
     *
     * @return double
     */
    double getCost() const;

    /**
     * @brief Get the Total Cost object
     *
     * @return double
     */
    double getTotalCost() const;
};

Inventory::Inventory()
{
    itemNumber = 0;
    quantity = 0;
    cost = 0;
    totalCost = 0;
}

Inventory::Inventory(const int &a_itemNumber, const double &a_cost, const int &a_quantity)
{
    int check = 0;
    check += setItemNumber(a_itemNumber);
    check += setQuantity(a_quantity);
    check += setCost(a_cost);
    if (check == 0)
        setTotalCost(a_cost, a_quantity);
    else
    {
        itemNumber = 0;
        quantity = 0;
        cost = 0;
        totalCost = 0;
    }
}

int Inventory::setItemNumber(const int &a_itemNumber)
{
    if (a_itemNumber < 0)
        return -1;
    itemNumber = a_itemNumber;
    return 0;
}

int Inventory::setQuantity(const double &a_quantity)
{
    if (a_quantity < 0)
        return -1;
    quantity = a_quantity;
    return 0;
}

int Inventory::setCost(const double &a_cost)
{
    if (a_cost < 0)
        return -1;
    cost = a_cost;
    return 0;
}

void Inventory::setTotalCost(const double &a_cost, const int &a_quantity)
{
    totalCost = (double)(a_quantity * a_cost);
}

int Inventory::getItemNumber() const
{
    return itemNumber;
}

int Inventory::getQuantity() const
{
    return quantity;
}

double Inventory::getCost() const
{
    return cost;
}

double Inventory::getTotalCost() const
{
    return totalCost;
}
