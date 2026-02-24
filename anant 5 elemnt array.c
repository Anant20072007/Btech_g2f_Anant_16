#include <stdio.h>

int main() {
    int arr[5];  // Declare an array of 5 integers
    
    // Accept 5 elements from the user
    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    // Display the elements
    printf("\nArray elements are:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}