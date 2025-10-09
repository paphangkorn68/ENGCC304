#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <limits.h>

int main() {
    int arr[100];
    int count = 0;
    char input[1000];

    printf("Enter value:\n");
    fgets(input, sizeof(input), stdin);

    char *token = strtok(input, " ");
    while (token != NULL) {
        arr[count++] = atoi(token);
        token = strtok(NULL, " ");
    }

    printf("Index:");
    for (int i = 0; i < count; i++) {
        printf(" %d", i);
    }
    printf("\n");

    printf("Array:");
    for (int i = 0; i < count; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < count; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }

    printf("\nMin : %d\n", min);
    printf("Max : %d\n", max);

    return 0;
}