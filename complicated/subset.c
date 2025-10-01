#include <stdio.h>
#include <math.h>

void printAllSubsets(int arr[], int n) {
    int totalSubsets = pow(2, n); // Total subsets = 2^n
    printf("The total number of subsets are:%d",totalSubsets);

    printf("All subsets:\n");
    for (int i = 0; i < totalSubsets; i++) {
        printf("{ ");
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) { // check if j-th bit is set in i
                printf("%d ", arr[j]);
            }
        }
        printf("}\n");
    }
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printAllSubsets(arr, n);

    return 0;
}
