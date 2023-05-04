#include <stdio.h>

int max_subarray_sum(int nums[], int n, int max_so_far, int max_ending_here) {
    // Base case: if there are no elements in the array, return the max sum found so far
    if (n == 0) {
        return max_so_far;
    }

    // Recursive case:
    max_ending_here += nums[n-1];

    if (max_so_far < max_ending_here) {
        max_so_far = max_ending_here;
    }

    if (max_ending_here < 0) {
        max_ending_here = 0;
    }

    return max_subarray_sum(nums, n-1, max_so_far, max_ending_here);
}

int main() {
    int n;
    scanf("%d", &n);
  int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int max_so_far = -1e9;
    int max_ending_here = 0;

    int max_sum = max_subarray_sum(nums, n, max_so_far, max_ending_here);

    printf("Maximum sum of contiguous subarray: %d", max_sum);

    return 0;
}
