class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        unordered_set<int>s(nums.begin(),nums.end());
        for(int num : nums){
            int streak = 0, curr = num;
            while(s.find(curr)!=s.end()){
                streak++;
                curr++;
            }
            res = max(res,streak);
        }
        return res;
        
    }
};
