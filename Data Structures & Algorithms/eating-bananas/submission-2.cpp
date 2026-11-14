class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int mxm = INT_MIN;
        int res=INT_MAX;
        for(int i= 0; i<piles.size(); i++)
            mxm = max(mxm, piles[i]);

        int l=1, r=mxm;
        while(l<=r){
            int mid = l + (r-l)/2;
            long t=0;
            for(int i=0; i<piles.size(); i++){
                if(piles[i]%mid)
                    t += (piles[i]/mid) + 1;
                else
                    t += (piles[i]/mid);
            }
            if(t> h){
                l = mid+1;
            }
            else{
                res = min(res, mid);
                r = mid-1;
            }
        }
        return res;
    }
};