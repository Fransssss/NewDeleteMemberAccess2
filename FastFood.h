// Fransiskus Agapa

// Food Class Declaration

#ifndef NEWDELETEMEMBERACCESS2_FASTFOOD_H
#define NEWDELETEMEMBERACCESS2_FASTFOOD_H

#include "string"

using std::string;

class FastFood
{
private:
    string _name;
    double _price;
    int _tasteRating;
public:
    FastFood();                      // default constructor
    FastFood(const string& name, const double& price, const int& tasteRating);
    string GetName() const;
    double GetPrice() const;
    int GetTasteRating() const;
    string toJson() const;

};


#endif //NEWDELETEMEMBERACCESS2_FASTFOOD_H
