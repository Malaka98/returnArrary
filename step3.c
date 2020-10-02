#include <stdio.h>

int getarray(void);

int main(void) {

    int ptr;

    ptr = getarray();

    printf("Print array: \n");

    for(int i=0;i<5;i++) {

        printf("%d\t", ptr[i]);

    }

    return 0;
}

int *getarray(void) {

     int arr[5];

    printf("Enter value in array: ");

    for(int i=0;i<5;i++) {

        scanf("%d", &arr[i]);

    }

    return arr;
}
