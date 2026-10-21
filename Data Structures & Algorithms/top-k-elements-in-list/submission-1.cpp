class Solution {
public:
    /*static bool compareSecond (const pair<int,int> &a,const pair<int,int> &b){
        if(a.second == b.second)
            return a.second > b.second;
        return a.second > b.second;
    }*/

    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> hash;
        for(int i=0; i<nums.size(); i++){
            hash[nums[i]]++;
        }
        vector<pair<int,int>> sorted; 

        for(auto it = hash.begin(); it !=hash.end() ; it++ ){
            sorted.push_back({it->second, it->first});
        }
        //descending sort
        sort(sorted.rbegin(), sorted.rend());
        
        for(int i=0; i<k; i++){
            res.push_back(sorted[i].second);
        }
        return res;
    }
};
