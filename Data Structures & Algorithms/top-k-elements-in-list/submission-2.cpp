class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minheap;
        unordered_map<int, int> hash;
        for(int i; i< nums.size(); i++){
            hash[nums[i]]++;
        }
        for(auto it = hash.begin(); it != hash.end(); it++){
            minheap.push(make_pair(it->second, it->first));
            if(minheap.size() > k)
                minheap.pop();
        }
        
        for(int i=0; i<k ; i++){
            res.push_back(minheap.top().second);
            minheap.pop();
        }

        return res;
    }
};
