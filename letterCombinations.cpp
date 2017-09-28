//数字换字母组合
vector<string> letterCombinations(string digits) {
    vector<string> res;
    if(digits.empty())
        return res;
    int sz=digits.size();
    res.push_back("");
    vector<string> a={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    for(int i=0;i<sz;i++){
        int num=digits[i]-'0';
        if(num<0||num>9)
            break;
        
        string x=a[num];
        
        vector<string> tmp;
        for(int j=0;j<x.size();j++)
            for(int k=0;k<res.size();k++)
                tmp.push_back(res[k]+x[j]);
        res.swap(tmp);
    }
    
    return res;
}
