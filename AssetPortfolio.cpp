#include <string> 
#include "AssetPortfolio.h"



AssetPortfolio::AssetPortfolio(){
    asset = 0;
    
};           // default constructor capacity of zero assets
AssetPortfolio::AssetPortfolio(int size){
    asset = size;
    listOfAsset = new Asset[asset];
};   // constructor for a portfolio of given size

// returns the number of assets which are in the portfolio
int AssetPortfolio::get_num_assets(){
    return currentAsset;
}; 

// returns true if any asset in the portfolio is of the specified product type
// otherwise returns false
bool AssetPortfolio::has_asset(std::string product){
    bool check = false;
    for ( int i = 0 ;i < asset ; i++) {
    if (listOfAsset[i].get_product_type() == product)
    {
        check = true;
    }
    }
    return check;

}; 

Asset* AssetPortfolio::get_assets(){
    return listOfAsset;
};       // returns the array of assets of the portfolio

// returns true and adds new asset to the portfolio if the portfolio is not full
// otherwise returns false
bool AssetPortfolio::add_asset(Asset new_asset){
    if (currentAsset < asset){
        listOfAsset [currentAsset] =new_asset;
        currentAsset ++;
        return true;
    }else{
        return false;
    }
};

AssetPortfolio::~AssetPortfolio(){
    delete[] listOfAsset;
};  // dest