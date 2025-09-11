#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    int singleNumber(vector<int>& nums){
        int ans=0;
        for(int val : nums){
            ans=ans^val;
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> vec={1,2,3,4,1,2,3};
    cout<< sol.singleNumber(vec) << endl;
}