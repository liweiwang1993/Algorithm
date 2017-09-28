//两个数相加为固定的值twosum
vector<int> twoSum(vector<int>& nums,int target)
{
    vector<int> result(2);
    
    map<int,int> mymap;
    long x;
    long size=nums.size();
    for(int i=0;i<size;i++){
        x=mymap.count(target-nums[i]);
        if(x==1)
        {
            result[1]=i;
            result[0]=mymap.find(target-nums[i])->second;
            
        }
        mymap.insert(make_pair(nums[i],i));
        
    }
    return result;
}
