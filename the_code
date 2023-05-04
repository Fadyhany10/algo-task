#include <stdio.h>
int main() {
    int n; // O(1)
    scanf("%d", &n); // O(1)
    int nums[n]; // O(1)
    for(int i=0 ; i<n ; i++) // O(n)
        scanf("%d", &nums[i]); // O(1)
    int max_so_far = -1e9; // O(1)
    int max_ending_here = 0; // O(1)
    for (int i = 0; i < n; i++) { // O(n)
        max_ending_here += nums[i]; // O(1)
        if (max_so_far < max_ending_here) { // O(1)
            max_so_far = max_ending_here;// O(1)
        }
        if (max_ending_here < 0) {// O(1)
            max_ending_here = 0;// O(1)
        }
    }
    printf("Maximum sum of contiguous subarray: %d", max_so_far); // O(1)
    return 0;
}
