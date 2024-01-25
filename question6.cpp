#include <iostream>
using namespace std;

int helper(vector<int>& nums, int start, int end){
    int maxprev=0;
    int maxcurr=0;
    for(int i=start;i<=end;i=i+1){
        int temp=maxcurr;
        maxcurr=max(maxprev+nums[i],maxcurr);
        maxprev=temp;
    }
    return maxcurr;
}

int rob(vector<int>& nums){
    int n=nums.size();
    if(n==1){
        return nums[0];
    }
    return max(helper(nums,0,n-2),helper(nums,1,n-1));
}


