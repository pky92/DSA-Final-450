# include<iostream>
# include <bits/stdc++.h>
using namespace std;

void print(vector<int>&num){
    for(auto a:num)cout<<a<<" ";
    cout<<endl;
}
void reverseArr(vector<int>&nums){
    int l=0;
    int r=nums.size()-1;

    while(l<r)swap(nums[l++],nums[r--]);
}
int main(){
    
    vector<int>nums{1,2,3,4,5};

    reverseArr(nums);
    print(nums);
    return 0;
}