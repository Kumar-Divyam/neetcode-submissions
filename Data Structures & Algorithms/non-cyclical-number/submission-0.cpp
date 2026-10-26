class Solution {
public:
    bool isHappy(int n) {
        set<int> rep;
        int t = n;
        while(t){
            int sum=0;
            while(t){
                int i = t%10;
                sum += (i*i);
                t/=10;
            }
            if(sum == 1)
                return true;
            if(rep.contains(sum)){
                return false;
            }
            rep.insert(sum);
            t = sum;
        }
        return false;
        
    }
};
