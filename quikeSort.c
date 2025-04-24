# include <stdio.h>

// 快速排序函数
void quickSort(int arr[], int low, int high){

    // 如果low索引大于等于high索引，说明区间内没有元素或只有一个元素，无需排序，直接返回
    if (low >= high){
        return ;
    }

    // 选择基准元素，这里选择区间的第一个元素
    int base = arr[low], l = low, h = high;
    // 使用双指针法进行分区
    while (l < h){
        // 从右向左找到第一个小于基准元素的元素
        while (l < h && arr[h] >= base) h--;
        // 将找到的元素移动到左指针位置
        arr[l] = arr[h];
        // 从左向右找到第一个大于基准元素的元素
        while (l < h && arr[l] <= base) l++;
        // 将找到的元素移动到右指针位置
        arr[h] = arr[l];
    }
    // 将基准元素放到正确的位置
    arr[h] = base;
    // 递归对基准元素左边的子数组进行快速排序
    quickSort(arr, low, high - 1);
    // 递归对基准元素右边的子数组进行快速排序
    quickSort(arr, low + 1, high);
}

int main(){
    int arr[] = {5, 3, 8, 4, 2};
    quickSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
}