#include <iostream>
using namespace std;
// structure-> user defined datatype whose entities area made up
// of different dattypes basically heterogenous
typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;
// Unions -> better memory management // you can implement only one datatype

union money
{
    /* data */
    int bitcoin;
    char car;
    float dollar;
};

int main()
{
    // enum-> allocating the datatype
    enum Car
    {
        Mustang,
        Caddilac,
        DodgeCharger
    };
    Car c1 = Caddilac;
    cout << c1 << endl;
    cout << (c1 == 1) << endl;
    cout << (c1 == 2);

    cout << Mustang << endl;
    cout << Caddilac << endl;
    ep Prashant;
    union money m1;
    m1.bitcoin = 34;
    m1.car = 'A';
    m1.dollar = 83.4;
    cout << m1.bitcoin << endl;
    // struct employee Prashant;
    Prashant.eId = 1;
    Prashant.favChar = 'C';
    Prashant.salary = 1500000;

    cout << "The value is " << Prashant.salary << endl;
    cout << "The value is " << Prashant.eId << endl;
    cout << "The value is " << Prashant.favChar << endl;
    return 0;
}

// enum