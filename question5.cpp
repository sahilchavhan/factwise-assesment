#include <iostream>
using namespace std;

int onCompleteCircuit(vector<int>& gas,vector<int>& cost){
    int totalgas=0;
    int totalcost=0;
    int currentgas=0;
    int startstation=0;
    for(int i=0;i<gas.size();i=i+1){
        totalgas=totalgas+gas[i];
        totalcost=totalcost+cost[i];
        currentgas=currentgas+gas[i]-cost[i];

        if(currentgas<0){
            currentgas=0;
            startstation=i+1;
        }
    }    
    if(totalgas<totalcost){
        return -1;
    }
    return startstation;
}


