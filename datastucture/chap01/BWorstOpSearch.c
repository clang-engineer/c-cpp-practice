#include <stdio.h>

int BSearch(int ar[], int len, int target);

int main(void) {
    int arr1[500] = {0,};
    int arr2[5000] = {0,};
    int arr3[50000] = {0,};
    int idx;

    idx = BSearch(arr1, sizeof(arr1) / sizeof(int), 1);
    if (idx == -1)
        printf("can not find factor. \n");
    else
        printf("position is: %d. \n", idx);

    idx = BSearch(arr2, sizeof(arr2) / sizeof(int), 1);
    if (idx == -1)
        printf("can not find factor. \n");
    else
        printf("position is: %d. \n", idx);

    idx = BSearch(arr3, sizeof(arr3) / sizeof(int), 1);
    if (idx == -1)
        printf("can not find factor. \n");
    else
        printf("position is: %d. \n\n", idx);

    return 0;
}

int BSearch(int ar[], int len, int target) {
    int first = 0;
    int last = len - 1;
    int mid;
    int opCount = 0;

    while (first <= last) {
        mid = (first + last) / 2;

        if (target == ar[mid]) {
            return mid;
        } else {
            if (target < ar[mid])
                last = mid - 1;
            else
                first = mid + 1;
        }
        opCount += 1;
    }

    printf("operator count: %d\n", opCount);
    return -1;
}