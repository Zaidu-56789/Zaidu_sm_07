#include <stdio.h>

int main() {
    int n, i;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Read n elements into the array
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the elements in reverse order
    printf("The numbers in reverse order are:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}