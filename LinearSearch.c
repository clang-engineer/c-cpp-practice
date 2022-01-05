#include <stdio.h>

int LSearch(int ar[], int len, int target) {
    int i;
    for(i=0; i<len; i++) {
        if(ar[i] == target) 
            return i;
    }
    return -1;
}

int main(void) {
    int arr[] = {3, 5, 2, 4, 9};
    int idx;

    idx= LSearch(arr, sizeof(arr)/sizeof(int), 4);

    if (idx == -1)
        printf("failed to find 4\n");
    else
        printf("target index is: %d\n", idx);


    idx= LSearch(arr, sizeof(arr)/sizeof(int), 7);

    if (idx == -1)
        printf("failed to find 4\n");
    else
        printf("target index is: %d\n", idx);



    return 0;
}
