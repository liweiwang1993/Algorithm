//堆排序
//调整结构

/*对以某一节点为根的子树做堆调整(保证最大堆性质)*/
void HeapAdjust(int A[], int i, int heap_size)
{
    int l = 2*i+1;
    int r = 2*i+2;
    int largest;
    
    if(l < heap_size && A[l] > A[i])
    {
        largest = l;
    }
    else
    {
        largest = i;
    }
    if(r < heap_size && A[r] > A[largest])
    {
        largest = r;
    }
    if(largest != i)
    {
        swap(A[largest],A[i]);
        HeapAdjust(A, largest, heap_size);
    }
}

/*建立最大堆*/
void BuildHeap(int A[],int heap_size)
{
    for(int i = (heap_size-2)/2; i >= 0; i--)
    {
        HeapAdjust(A, i, heap_size);
    }
}

/*输出结果*/
void print(int A[],int heap_size)
{
    for(int i = 0; i < heap_size;i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

/*堆排序*/
void HeapSort(int A[], int heap_size)
{
    BuildHeap(A, heap_size);
    
    for(int i = heap_size - 1; i >= 0; i--)
    {
        swap(A[0],A[i]);
        HeapAdjust(A, 0, i);
    }
    print(A, heap_size);
}
