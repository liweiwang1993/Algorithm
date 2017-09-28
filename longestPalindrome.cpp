//最长回文数
string longestPalindrome(string s) {
    //check the string length
    if(s.size()<2)
        return s;
    int maxlen=1,left,right,maxleft=0,len=s.size();
    for(int start=0;start<len&&len-start>maxlen/2;)
    {
        left=right=start;
        while(right+1<len&&s[right]==s[right+1])
            right++;
        start=right+1;
        while(right+1<len&&left>0&&s[right+1]==s[left-1])
        {
            right++;
            left--;
        }
        if(maxlen<right-left+1)
        {
            maxleft=left;
            maxlen=right-left+1;
        }
    }
    return s.substr(maxleft,maxlen);
}
