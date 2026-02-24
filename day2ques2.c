#include <stdio.h>

int main() {
    int n;

    // Read array size
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    int comparisons = 0;
    int foundIndex = -1;

    // Linear Search
    for (int i = 0; i < n; i++) {
        comparisons++;  // Count each comparison
        if (arr[i] == k) {
            foundIndex = i;
            break;
        }
    }

    // Output result
    if (foundIndex != -1) {
        printf("Found at index %d\n", foundIndex);
    } else {
        printf("Not Found\n");
    }

    printf("Comparisons = %d\n", comparisons);

    return 0;
}