//快速排序
void quicksort(vector<int>& arr,int left,int right){
    int i,j,temp;
    if (left>right) {
        return;
    }
    i=left;
    j=right;
    temp=arr[left];
    while (i!=j) {
        //从右边找第一个小于pivot的
        while (arr[j]>=temp&&i<j) {
            j--;
        }
        //从 左边找第一个大于pivot的
        while (arr[i]<=temp&&i<j) {
            i++;
        }
        
        if (i<j) {
            swap(arr[i],arr[j]);
        }
    }
    arr[left]=arr[i];
    arr[i]=temp;
    quicksort(arr, left, i-1);
    quicksort(arr, i+1, right);
    
}
