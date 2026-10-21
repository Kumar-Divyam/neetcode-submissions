class Solution {
public:

    bool compare (string s1, string s2){
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return s1==s2;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 0){
            return {{""}};
        }
        vector<vector<string>> res;
        map<string, vector<int>> hash;
        for(int i=0; i < strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            auto it = hash.find(temp);
            if(it != hash.end()){
                it -> second.push_back(i);
            }
            else{
                vector<int> t = {i};
                hash.insert({temp, t});
            }
        }
        for(auto it=hash.begin() ; it != hash.end() ; it++){
            vector<string> common;
            for(int i=0; i< it->second.size(); i++){
                common.push_back(strs[it->second[i]]);
            }
            res.push_back(common);
        }


        return res;
    }
};
