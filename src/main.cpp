#include "bits/stdc++.h"
using namespace std;

class Vehicle
{
public:
    virtual void drive() = 0;
};


int main()
{
    testVehicleFactory();
    testDrive();
    return 0;
}