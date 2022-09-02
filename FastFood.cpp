// Fransiskus Agapa

// Food Class' Definition

#include "FastFood.h"
#include "sstream"

using std::stringstream;

FastFood::FastFood()
{
    _name = "NoName";
    _price = 0.0;
    _tasteRating = -1;                           // -1 means no input
}

FastFood::FastFood(const string &name, const double &price, const int &tasteRating)
{
    _name = name;
    _price = price;
    _tasteRating = tasteRating;
}

string FastFood::GetName() const
{
    return _name;
}

double FastFood::GetPrice() const
{
    return _price;
}

int FastFood::GetTasteRating() const
{
    return _tasteRating;
}

string FastFood::toJson() const
{
    stringstream asJson;
    asJson << "{\"Fast Food\":\"" << _name << "\", \"Price\":" << _price << ", \"Taste\":" << _tasteRating << "}";
    return asJson.str();
}

