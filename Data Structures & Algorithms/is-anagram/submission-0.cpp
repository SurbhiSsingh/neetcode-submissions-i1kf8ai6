class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       int i;
       if(s.length()!=s.length()){
        return false;
       } 
       return s==t;;
    }
};
