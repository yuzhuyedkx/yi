#include<stdio.h>
void palindromeTree(char a[], int l, int r);
int main() {
    char arr[100];
    printf("请输入一串数字：");
    scanf_s("%s", arr);
    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0]) - 1;
    palindromeTree(arr, left, right);
    return 0;
}

void palindromeTree(char a[], int l, int r) {
    while (l <= r) {
        if (a[l] == a[r]) {
            l++;
            r--;
        }
        else {
            printf("不是回文数！");
            break;
        }
    }
    printf("是回文数！");
}