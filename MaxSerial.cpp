int MaxSerial(vector<int>& a){
    if (a.size()<=0) {
        return -MaxLength;
    }
    int result=a[0];
    int max=result;
    for (int i=1; i<a.size(); i++) {
        if (max>0) {
            max+=a[i];
        }else
            max=a[i];
        if (max>result) {
            result=max;
        }
    }
    return result;
}
