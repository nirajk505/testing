#include "Vehicle.h"
#include "VehicleType.h"


Vehicle:: Vehicle(std::string id, std::string brand, float price, VehicleType type)
   : _id(id), _brand(brand), _price(price), _type(type)
{
}

float Vehicle::CalculateTax(){
    return 0.18f * _price;
}

float Vehicle::CalculateTax(float tax_percent){
    return tax_percent * _price;
}

float Vehicle::CalculateTax(float cgst, float sgst){
    return ((cgst * _price) + (sgst * _price));
}

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs._id
       << " _brand: " << rhs._brand
       << " _price: " << rhs._price
       << " _type: " << DisplayEnum(rhs._type);
    return os;
}

std::string DisplayEnum(const VehicleType value){
    if(value == VehicleType::BIKE){
        return "BIKE";
    }
    else if(value == VehicleType::OTHER){
        return "OTHER";
    }
    else{
        return "CAR";
    }
} 

