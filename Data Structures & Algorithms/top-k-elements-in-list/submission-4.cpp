class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> hash;
        vector<vector<int>> bucket(nums.size()+1);
        for(int i=0; i< nums.size(); i++){
            hash[nums[i]]++;
        }

        for(auto it = hash.begin(); it != hash.end(); it++){
            bucket[it->second].push_back(it->first);
        }
        
        for(int i= bucket.size()-1; i>=0 ; i--){
            for(int j=0; j < bucket[i].size(); j++){
                res.push_back(bucket[i][j]); 
                if(res.size() == k)
                    return res;
            }
        }

        return res;
    }
};
