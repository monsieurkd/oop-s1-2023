#include <string> 
#include "Asset.h"
#include "AssetPortfolio.h"
#include <iostream>

int main(){
    Asset B(3, "house");
    Asset A(1, "car");
    Asset C(2, "horse");
    Asset D(4, "boat");
    Asset E(5, "phone");
AssetPortfolio p1(5);
AssetPortfolio p2;


    std::cout << p1.add_asset(A) << std::endl;
    std::cout << p1.add_asset(B) << std::endl; 
    std::cout << p1.add_asset(C) << std::endl; 
    std::cout << p1.add_asset(D) << std::endl; 
    std::cout << p1.add_asset(E) << std::endl; 
    std::cout << p1.get_assets() << " " << p1.get_num_assets()<< " " << p1.has_asset("car")  << std::endl; 
    std::cout << p2.get_assets() << " " << p2.get_num_assets() << " "<<  p2.has_asset("car")  << std::endl; 
p1.~AssetPortfolio();
p2.~AssetPortfolio();
}