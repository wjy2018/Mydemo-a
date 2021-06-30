#include <stdio.h>

#define ARR_LEN 255
#define elemtype int


/* 冒泡排序算法 */
void bubbleSort (elemtype arr[], int len){
    elemtype temp;
    int i,j;
    for(i = 0; i<len-1; i++){
        for(j = 0 ;j <len-1-i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

/* 不越界的前提下，省空间的操作如下
arr[j] = arr[j] + arr[j+1];
arr[j+1] = arr[j] - arr[j+1];
arr[j] = arr[j] - arr[j+1];
*/

/* 快速排序算法 */
void swap(elemtype arr[], int i, int j){
    elemtype temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void qsort(elemtype arr[], int left, int right){
    if(left >= right){
        return;
    }
    int i = left;
    int j = right;
    int base = arr[left];
    while(i < j){
        while (i < j && base <= arr[j])
        {
            /* code */
            j--;
        }
        swap(arr, i, j);
        while (i < j && base > arr[i])
        {
            /* code */
            i++;
        }
        swap(arr, i, j);
    }
    arr[i] = base;
    qsort(arr, left, i);
    qsort(arr, i+1, right);
}


int main(void){
    elemtype arr[ARR_LEN] = {1, -9, 3, -5, 20, 16, 38, 99, -1, 32};
    int i;
    bubbleSort(arr, 10);
    printf("bubble sort\n");
    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    elemtype brr[ARR_LEN] = {1, -9, 3, -5, 20, 16, 38, 99, -1, 32};
    qsort(brr, 0, 9);
    printf("quick sort\n");
    for(i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Check for your self!\n");
    return 0;
}