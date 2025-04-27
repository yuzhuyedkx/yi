#include<stdio.h>
int binarySearch(int a[], int n,int b);
int main() {
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int n = 7;
    int c = sizeof(arr) / sizeof(arr[0]) - 1;
    int m = binarySearch(arr,n,c);
    if (m == 1) {
        printf("找到了！");
    }
    else {
        printf("找不到！");
        return 0;
    }
}
    //使用二分查找法
int binarySearch(int a[], int n,int b){
    int left = 0;
    int right = b;
    int mid = (left + right) / 2;
    while (left < right) {
        if (a[mid] < n) {
            left++;
        }
        else {
            right--;
        }
        mid = (left + right) / 2;
    }
    if (a[mid] == n) {
        return 1;
    }
    else {
        return 0;
    }
}