class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.length(), n = t.length();
        if(m!=n)
            return false;
        vector<int> s1(26,0);
        vector<int> t1(26,0);
        for(int i=0; i<m;i++){
            s1[s[i]-97]++;
        }
        cout<<endl;
        for(int i=0; i<n;i++){
            t1[t[i]-97]++;
        }
        for(int i=0;i<26;i++){
            if(s1[i] != t1[i])
                return false;
        }
        return true;
    }
};
