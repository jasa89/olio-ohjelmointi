#include "car.h"



std::string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

int Car::getYearmodel() const
{
    return yearmodel;
}

void Car::setYearmodel(int newYearmodel)
{
yearmodel = newYearmodel;
}

std::string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

Car::Car() : brand("Unknown"), model("Unknown"), yearmodel(0)
{

}

void Car::printData()
{
  cout<<"merkki="<<brand<<" malli = "<<model<<" ja vuosimalli "<<yearmodel<<endl;
}
