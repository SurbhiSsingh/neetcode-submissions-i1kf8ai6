class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int res=0;
      unordered_set<int>store(nums.begin(),nums.end());
      for(int num:nums){
        int s=0,curr=num;
        while(store.find(curr)!=store.end()){
            s++;
            curr++;
        }
         res=max(res,s);
      }
      return res;  
    }
};
