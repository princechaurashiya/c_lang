#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    printf("Enter the length of array:\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (array[j] < array[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(&array[i], &array[min]);
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
