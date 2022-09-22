//Power Of Two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool result = false;
        if(n==1|n==0) result = n;
        else if(n<0) result = false;
        else if((n&1)==0) result = isPowerOfTwo(n/2);
        return result;
    }
};
