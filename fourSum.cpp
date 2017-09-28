//四个数相加为0
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> res;
    
    sort(nums.begin(),nums.end());
    int sz=nums.size();
    if(sz<4)
        return res;
    for(int i=0;i<sz;i++){
        int target2=target-nums[i];
        for(int j=i+1;j<sz;j++)
        {
            int k=j+1;
            int z=sz-1;
            int target3=target2-nums[j];
            while(k<z){
                
                int target4=nums[k]+nums[z];
                if(target4==target3)
                {   vector<int> fourth(4,0);
                    fourth[0]=nums[i];
                    fourth[1]=nums[j];
                    fourth[2]=nums[k];
                    fourth[3]=nums[z];
                    res.push_back(fourth);
                    while(k<z&&fourth[2]==nums[k])
                        k++;
                    while(k<z&&fourth[3]==nums[z])
                        z--;
                }else if(target4>target3){
                    z--;
                }else {
                    k++;
                }
            }
            while(j+1<sz&&nums[j+1]==nums[j])
                j++;
        }
        while(i+1<sz&&nums[i+1]==nums[i])
            i++;
    }
    return res;
    
}
