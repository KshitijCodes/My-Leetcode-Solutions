class Solution {
public:
    int numberOfSteps (int num) {
        int flag=0;
        while(num>0)
          {
            if(num%2==1)
               {
                num=num-1;
                flag++;
                }
            else
            {
                num=num/2;
                flag++;
            }  
        }    
        return flag;
    }
};
