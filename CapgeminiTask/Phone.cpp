#include <iostream>
#include <list>
#include <string>
#include "Phone.h"

Phone::Phone() {
    string brandName = modelName = formFactor = "NULL";
    int yearOfIssue = screenSize = price = 0;
};

Phone::Phone(string brandName, string modelName, string formFactor, int yearOfIssue, int screenSize, int price) {
    this->brandName = brandName;
    this->modelName = modelName;
    this->formFactor = formFactor;
    this->yearOfIssue = yearOfIssue;
    this->screenSize = screenSize;
    this->price = price;
}

string Phone::toString() {
    string toString;
    toString =  brandName + "," + modelName + "," + formFactor + "," + to_string(yearOfIssue) + "," + to_string(screenSize) + "," + to_string(price);
    return toString;
};
