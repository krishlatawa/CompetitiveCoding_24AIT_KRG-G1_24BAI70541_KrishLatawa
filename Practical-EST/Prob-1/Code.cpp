class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // char,index
        unordered_map<char,long long> mpp;
        long long l=0,r,maxlen=0;

        for(long long r=0;r<s.length();r++){
            if(mpp.find(s[r])!=mpp.end()){
                l=max(l,mpp[s[r]]+1);
            }

            mpp[s[r]]=r;

            maxlen=max(maxlen,r-l+1);
        }
        return maxlen;
    }
};