// 选择排序
void selection_sort(vector<int>& array){
    int size=array.size(),j;
    for (int i=0; i<size-1; i++) {
        int min=i;
        for (j=i+1; j<size; j++) {
            if (array[min]>array[j]) {
                min=j;
            }
            
        }
        if (min!=i) {
            swap(array[min],array[i]);
        }
        
        
    }
}
