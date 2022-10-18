class Solution {
public:
    void swap(char &s1,char &s2){
        char temp;
        temp = s1;
        s1 = s2;
        s2 = temp;
    }
    
    int secondsToRemoveOccurrences(string s) {
        int res=0;
        bool steps = true;
        while(steps){
            steps = false;
            for(int i=0; i<s.size()-1; i++){
                if(s[i]=='0' && s[i+1]=='1'){
                    swap(s[i],s[i+1]);
                    steps = true;
                    i++;
                }
            }
            if(steps){
                res++;
            }
        }
        return res;
    }
};
