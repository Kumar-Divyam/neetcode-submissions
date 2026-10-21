class Solution {
public:
    bool compare(string s1, string s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return s1 == s2;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;

        for (int i = 0; i < strs.size(); i++) {
            if (strs[i] != "#") {
                vector<string> common;
                vector<int> c_indices;

                common.push_back(strs[i]);
                c_indices.push_back(i);

                for (int j = i + 1; j < strs.size(); j++) {
                    if (strs[j] != "#") {
                        if (compare(strs[i], strs[j])) {
                            c_indices.push_back(j);
                            common.push_back(strs[j]);
                        }
                    }
                }
                for (int k = 0; k < c_indices.size(); k++) {
                    strs[c_indices[k]] = "#"; 
                }

                res.push_back(common);
            }
        }
        return res;
    }
};
