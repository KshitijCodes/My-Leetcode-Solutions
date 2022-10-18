class Solution {
public:
    // void swap(char &ch1, char &ch2){
    //     char temp = ch1;
    //     ch1 = ch2;
    //     ch2 = temp;
    // }
    void reverseString(vector<char>& s) {
        int m = s.size();
        for(int i=0; i<=((m-1)/2); i++){
            swap(s[i],s[m-1-i]);
        }
    }
};
