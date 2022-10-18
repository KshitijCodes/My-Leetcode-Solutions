//Hamming Weight Problem

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int hw=0;
        while(n){
            hw++;
            n = n&(n-1);
        }
        return hw;
    }
};
