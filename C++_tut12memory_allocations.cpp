#include <iostream>
using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void Shop ::setPrice(void)
{
    cout << "enter id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter price of your items" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of items with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop StarBucks;
    StarBucks.initCounter();
    for (int i = 0; i < 5; i++)
    {
        StarBucks.setPrice();
    }
    StarBucks.displayPrice();

    // member functions are in common memory part
    // but variables have different memory allocation

    return 0;
}