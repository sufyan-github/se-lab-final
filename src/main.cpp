#include "bits/stdc++.h"
using namespace std;

class Vehicle
{
public:
    virtual void drive() = 0;
};


class Car : public Vehicle
{
public:
    void drive() override
    {
        cout << "Car is driving" << endl;
    }
};


int main()
{
    testVehicleFactory();
    testDrive();
    return 0;
}