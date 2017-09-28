// 改进的插入排序二分查找
void BinaryInsertSort(vector<int>& array,int n)
{
    if(n<2)
    {
        return;
    }
    for (int i=1; i<n; i++) {
        int left=0;
        int right=i-1;
        int key=array[i];
        while (left<=right) {
            int mid=(left+right)/2;
            if (array[mid]<key) {
                left=mid+1;
            }else
            {
                right=mid-1;
            }
        }
        for (int j=i-1; j>=left; j--) {
            array[j+1]=array[j];
        }
        array[left]=key;
    }
    return;
}
