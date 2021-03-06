// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int low=0,high=n;
        //cout<<high-low;
        while(high-low>1)
        {
            int mid=low+(high-low)/2;
            if(isBadVersion(mid))
                high=mid;
            else
                low=mid;
        }
        return high;
    }
};