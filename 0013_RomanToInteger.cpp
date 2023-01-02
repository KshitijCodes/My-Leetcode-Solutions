class Solution {
public:
    unordered_map<char,int> roman{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };
    
    int romanToInt(string s) {
        int res = 0;
        for(int i=0; i<s.length()-1; i++){
            if(roman.at(s[i])>=roman.at(s[i+1])){
                res += roman.at(s[i]);
            }
            else{
                res -= roman.at(s[i]);
            }
        }
        res += roman.at(s[s.length()-1]);
        return res;
    }
};
