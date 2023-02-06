#pragma once
#include <iostream>

using namespace std;

template <typename T> class List {

};

class Phone
{
public:
    string brandName, modelName, formFactor;
    int yearOfIssue, screenSize, price;
    Phone();
    Phone(string brandName, string modelName, string formFactor, int yearOfIssue, int screenSize, int price);
    string toString();
};
