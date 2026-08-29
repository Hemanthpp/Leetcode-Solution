class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.size()>s.size()){
            return ans;
        }
        vector<int>windowfreq(26,0);
        vector<int>pfreq(26,0);
        for(int i=0;i<p.size();i++){
            pfreq[p[i]-'a']++;
        }
        int windowsize=p.size();
        for(int j=0;j<p.size();j++){
            windowfreq[s[j]-'a']++;
            }
            if(pfreq==windowfreq){
                ans.push_back(0);
        }
        for(int i=windowsize;i<s.size();i++){
            windowfreq[s[i]-'a']++;
            windowfreq[s[i-windowsize]-'a']--;
         if(pfreq==windowfreq)
          ans.push_back(i-windowsize+1);
        }
        return ans;
    }
};