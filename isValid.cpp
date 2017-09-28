//括号匹配
bool isValid(string s) {
    long len=s.size();
    long i=0;
    vector<char> res;
    char a;
    while (i<len) {
        
        switch (s[i]) {
            case '(':
                res.push_back(s[i]);
                i++;
                break;
            case '[':
                res.push_back(s[i]);
                i++;
                break;
            case '{':
                res.push_back(s[i]);
                i++;
                break;
            case ')':
                if (res.empty()) {
                    return false;
                }
                a=res[res.size()-1];
                res.pop_back();
                if (a!='(') {
                    return false;
                }
                i++;
                break;
            case ']':
                if (res.empty()) {
                    return false;
                }
                a=res[res.size()-1];
                res.pop_back();
                if (a!='[') {
                    return false;
                }
                i++;
                break;
            case '}':
                if (res.empty()) {
                    return false;
                }
                a=res[res.size()-1];
                res.pop_back();
                if (a!='{') {
                    return false;
                }
                i++;
                break;
                
            default:
                i++;
                break;
        }
    }
    if (res.empty()) {
        return true;
    }else{
        return false;
    }
    
}
