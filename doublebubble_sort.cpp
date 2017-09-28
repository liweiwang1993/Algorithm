// 双向冒泡排序
void doublebubble_sort(vector<int>& a){
    int size=a.size()-1;
    for (int i=0; i<size;) {
        for (int j=size; j>i; j--) {
            if (a[j]<a[j-1]) {
                swap(a[j],a[j-1]);
            }
        }
        i++;
        for (int k=i; k<size; k++) {
            if (a[k+1]<a[k]) {
                swap(a[k+1],a[k]);
            }
        }
        size--;
        
    }
}
