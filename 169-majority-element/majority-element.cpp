class Solution {
public:
    int majorityElement(vector<int>& nums) {
         
         int cnt = 0;
         int candidate = 0;

         for (int& num : nums)
         {
           if (cnt==0)
           {
             candidate = num;
             cnt =1 ;
           }
           else 
           {
            if (candidate==num)
            cnt++;
            else 
            cnt--;
           }
           
         }
         return candidate;
    }
                      
};