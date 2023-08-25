#include <string> 
#include "Asset.h"
#include "AssetPortfolio.h"
#include <iostream>

int main(){
    Asset A;
    Asset B(3, "house");
    std::cout << A.get_product_type() << " " << A.get_value() << " "  << std::endl;
    std::cout << B.get_product_type() << " " << B.get_value() << " " << std::endl;
    A.~Asset();
    B.~Asset();

}