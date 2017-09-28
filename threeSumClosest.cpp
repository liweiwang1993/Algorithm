//三个数相加最接近的数
int threeSumClosest(vector<int>& nums, int target) {
    int sz=nums.size();
    if(sz<3)
        return 0;
    sort(nums.begin(),nums.end());
    int clostsum=nums[0]+nums[1]+nums[2];
    for(int i=0;i<sz;i++)
    {
        int j=i+1;
        int k=sz-1;
        while(j<k)
        {    int x=nums[i]+nums[j]+nums[k];
            if(target==x)
            {
                return target;
            }else if(abs(x-target)<abs(clostsum-target))
            {
                clostsum=x;
            }
            if(target>x){
                j++;
            }
            if(target<x){
                k--;
            }
        }
        while(i+1<sz&&nums[i+1]==nums[i])
            i++;
    }
    return clostsum;
}
