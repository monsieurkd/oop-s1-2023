#include <string>
#include "Asset.h"

                         // a default constructor 

// a constructor that takes the product type  and value
Asset::Asset(int value, std::string product_type){
    _value = value;
    _product_type=product_type;
};      
Asset::Asset(){
        _value = 0;
        _product_type = "";
    };   
std::string Asset::get_product_type(){
    return _product_type;
};    // returns the financial asset type 
int Asset::get_value(){
    return _value;
};                   // returns the the value of asset
Asset::~Asset(){};                          // A default destructor
