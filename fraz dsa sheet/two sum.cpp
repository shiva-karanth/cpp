//leetcode solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v;
        int n= nums.size();
        for(int i=0; i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int s=0,e=n-1;
        int sum;
        while(s<e){
        sum= v[s].first+v[e].first;
            if(sum==target){
                return {v[s].second,v[e].second};
            }
            else if(sum>target){
                e--;
            }
            else{
                s++;
            }
        }
        
        return {-1,-1};
    }
};