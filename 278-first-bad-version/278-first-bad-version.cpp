// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    


    int firstBadVersion(int n) {

        int l = 1;
        int r = n;
        int fbv = 1;

        while (l <= r){

            int m = l + (r - l) / 2;

            if (isBadVersion(m)){
                fbv = m;
                r = m - 1;
            }
            // search right
            else{
                l = m + 1;
            }
        }
        return fbv;
    }


};