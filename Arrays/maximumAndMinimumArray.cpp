# include<iostream>
# include <bits/stdc++.h>
using namespace std;

void solve(vector<int>&nums,int &maxi,int &mini){
    
    for(auto a:nums){
        maxi=max(maxi,a);
        mini=min(mini,a);
    }

}

int main(){
    
    vector<int>nums{-1,90,5,-66,34,54};

int maxi=INT_MIN;
int mini=INT_MAX;
    solve(nums,maxi,mini);
    cout<<"maximum is :"<<maxi<<endl;
    cout<<"minimum is "<<mini<<endl;
    return 0;
}