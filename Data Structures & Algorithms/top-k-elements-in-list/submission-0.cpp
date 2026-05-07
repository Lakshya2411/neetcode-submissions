class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        for(int num : nums){
            mp[num]++;
        }

        vector<int> ans;

        while(k--){

            int maxi = 0;
            int element;

            for(auto x : mp){

                if(x.second > maxi){
                    maxi = x.second;
                    element = x.first;
                }
            }

            ans.push_back(element);

            mp[element] = -1;
        }

        return ans;
    }
};