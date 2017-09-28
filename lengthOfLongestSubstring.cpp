//重复的最长链
int lengthOfLongestSubstring(string s) {
    vector<int> dict(255,-1);
    int start=-1,n=s.size(),maxlen=0;
    for(int i=0;i<n;i++)
    {
        if(dict[s[i]]>start)
            start=dict[s[i]];
        dict[s[i]]=i;
        maxlen=max(maxlen,i-start);
        
    }
    return maxlen;
}
