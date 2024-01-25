#include <iostream>
using namespace std;

int maxProfits(vector<int>& prices){
    if (prices.empty()){
        return 0;
    }
    int pricemin=prices[0];
    int profitmax=0;

    for(int i=1;i<prices.size();i=i+1){
        pricemin=min(pricemin,prices[i]);
        profitmax=max(profitmax,prices[i]-pricemin)
    }
    return profitmax;
}

