//three sum equal to 0
vector<vector<int>> threeSum(vector<int>& num) {
    vector<vector<int>> a;
    vector<int> b(3,0);
    sort(num.begin(),num.end());
    int sz=num.size();
    for(int i=0;i<sz;i++){
        int target=0-num[i];
        int j=i+1;
        int k=sz-1;
        while(j<k){
            if(num[j]+num[k]>target)
                k--;
            else if(num[j]+num[k]<target)
                j++;
            else {
                b[0]=num[i];
                b[1]=num[j];
                b[2]=num[k];
                a.push_back(b);
                while(j<sz-1&&(b[1]==num[j]))
                    j++;
                while(k<sz-1&&(b[2]==num[k]))
                    k--;
                
                
            }
            
        }
        while(i+1<sz&&num[i+1]==num[i])
            i++;
    }
    return a;
}
