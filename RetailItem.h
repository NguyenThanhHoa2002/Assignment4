#include "string"

using namespace std;

/**
 * @brief a class named RetailItem that holds data about an item in a retail store
 *
 */
class RetailItem
{
private:
    /**
     * @brief A string that holds a brief description of the item
     *
     */
    string description;

    /**
     * @brief An int that holds the number of units currently in inventory
     *
     */
    int unitsOnHand;

    /**
     * @brief A double that holds the item’s retail price
     *
     */
    double price;

public:
    /**
     * @brief Construct a new Retail Item object
     *
     * @param a_description
     * @param a_unitsOnHand
     * @param a_price
     */
    RetailItem(const string &a_description, const int &a_unitsOnHand, const double &a_price);

    /**
     * @brief Set the Description object
     *
     * @param a_description
     */
    void setDescription(const string &a_description);

    /**
     * @brief Set the Units On Hand object
     *
     * @param a_unitsOnHand
     */
    void setUnitsOnHand(const int &a_unitsOnHand);

    /**
     * @brief Set the Price object
     *
     * @param a_price
     */
    void setPrice(const double &a_price);

    /**
     * @brief Get the Description object
     *
     * @return string
     */
    string getDescription() const;

    /**
     * @brief Get the Units On Hand object
     *
     * @return int
     */
    int getUnitsOnHand() const;

    /**
     * @brief Get the Price object
     *
     * @return double
     */
    double getPrice() const;
};

RetailItem::RetailItem(const string &a_description, const int &a_unitsOnHand, const double &a_price)
{
    description = a_description;
    unitsOnHand = a_unitsOnHand;
    price = a_price;
}

void RetailItem::setDescription(const string &a_description)
{
    description = a_description;
}

void RetailItem::setUnitsOnHand(const int &a_unitsOnHand)
{
    unitsOnHand = a_unitsOnHand;
}

void RetailItem::setPrice(const double &a_price)
{
    price = a_price;
}

string RetailItem::getDescription() const
{
    return description;
}

int RetailItem::getUnitsOnHand() const
{
    return unitsOnHand;
}

double RetailItem::getPrice() const
{
    return price;
}
