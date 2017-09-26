//快速排序的改进
int GetTheMidNum(vector<int>& a,int low,int high){
    int mid=(low+high)>>1;
    int x1=a[low]>a[high]?low:high;
    int x2=a[low]>a[mid]?low:mid;
    int x3=a[mid]>a[high]?mid:high;
    if (x1==x2) {
        return x3;
    }else
        return a[x1]>a[x2]?x2:x1;
}
int partition(vector<int>& a,int low,int high){
    if (a.size()==0||low>high) {
        return -1;
    }
    int left=low;
    int right=high;
    int index=GetTheMidNum(a, left, right);
    if (index!=left) {
        swap(a[index],a[left]);
    }
    int temp=a[left];
    while (left<right) {
        //从右边找第一个小于pivot的下表
        while (a[right]>=temp&&left<right) {
            right--;
        }
        //从左边找第一个大于pivot的下表
        while (a[left]<=temp&&left<right) {
            left++;
        }
        if (left<right) {
            swap(a[left],a[right]);
        }
    }
    a[low]=a[left];
    a[left]=temp;
    return left;
}

void AdjustQuickSort(vector<int>& a,int low,int high){
    if (low<high) {
        int k=partition(a,low,high);
        AdjustQuickSort(a,low,k-1);
        AdjustQuickSort(a,k+1,high);
    }
}
