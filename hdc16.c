#include <stdio.h>

int main() {
    int n;
    
    // Read array size
    scanf("%d", &n);
    
    int arr[n];
    
    // Read n elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Count frequency of each unique element
    for(int i = 0; i < n; i++) {
        // Skip if already counted (frequency = 0)
        if(arr[i] != 0) {
            int count = 1;
            
            // Count occurrences of arr[i]
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    arr[j] = 0;  // Mark as counted
                }
            }
            
            // Print element:count
            printf("%d:%d ", arr[i], count);
        }
    }
    
    printf("\n");
    return 0;
}
