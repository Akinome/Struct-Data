//
// Created by Hoen on 2025/4/24.
//
# include <stdio.h>

int nums1[]={1,2,3,0,0,0}, m = 3, nums2[] = {2,5,6}, n = 3;

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    // 初始化两个指针i和j，分别指向nums1和nums2的最后一个有效元素
    int i = m - 1, j = n - 1;
    // 从nums1的末尾开始填充，k指向合并后数组的最后一个位置
    for (int k = m + n - 1; k >= 0 + n; --k)
    {
        // 如果nums1的所有元素都已经处理完，直接将nums2的剩余元素放入nums1
        if (i < 0) {
            *(nums1 + k) = *(nums2 + j);
            --j;
        }else if (j < 0) {
            *(nums1 + k) = *(nums1 + i);
            --i;
        }
        if (*(nums1 + i) > *(nums2 + j)){
            *(nums1 + k) = *(nums1 + i);
            --i;
        }else{
            *(nums1 + k) = *(nums2 + j);
            --j;
        }
    }
    
}

int main(){
    merge(nums1, 6, 3, nums2, 3, 3);
    for (int i = 0; i < 6; ++i) {
        printf("%d ", nums1[i]);
    }
}