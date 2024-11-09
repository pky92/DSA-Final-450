# include<iostream>
# include <bits/stdc++.h>
using namespace std;
void print(vector<int>&num){
    for(auto a:num)cout<<a<<" ";
    cout<<endl;
}

void solve(vector<int>&nums){

    int l=0;
    int r=nums.size()-1;

    while(l<r){
        if(nums[l]<0)l++;
        if(nums[r]>0)r--;
        else if (nums[l]>0 && nums[r]<0)swap(nums[l++],nums[r--]);
    }
}
int main(){
    
    vector<int>nums{-1,-9,98,4,5,-5,-3,39,34,-29,5,6,3,54,34,-1,-34,-54,98};

    solve(nums);
    print(nums);
    return 0;
}