//
// Created by Hoen on 2025/4/23.
//
# include <stdio.h>

int nums1[]={1,2,3,0,0,0}, m = 3, nums2[] = {2,5,6}, n = 3;

void mergeArrays(int nums1[], int nums2[], int m, int n, int result[]) {
    int i;
    for (i=0;i<m;i++) {
        result[i] = nums1[i];
    }
    for (i=0;i<n;i++) {
        result[m+i] = nums2[i];
    }
}

void bubble_sort(int result[],int size) {
    int i,j;
    for (i=0;i<size;i++) {
        for (j=0;j<size;j++) {
            if (result[i]<result[j]) {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }
}

int main(){
    int result[m + n];
    mergeArrays(nums1, nums2, m, n, result);
    bubble_sort(result,m+n);
    for (int i=0;i<m+n;i++) {
        printf("%d ",result[i]);
    }
}