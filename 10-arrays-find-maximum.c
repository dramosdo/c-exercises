#include <stdio.h>

// Practice exercise: scanning arrays to find an extreme value.
// Goal: read 5 integers into an array, then find and print the largest value.
// TODOs for you:
// 1) Use a loop to fill the values array with 5 integers.
// 2) Scan through the array to find the largest number. Track both the
//    current maximum and its position (index).
// 3) Print the maximum and its position (for example, position 0 is the
//    first item).
// Example output students should see:
//    Enter number 0: 9
//    Enter number 1: 3
//    Enter number 2: 14
//    Enter number 3: 7
//    Enter number 4: 2
//    Largest value: 14 at position 2
// Hint: start max_value with the first element before looping over the rest.
#define SIZE 5

int main(void) {
    int values[SIZE];

    // TODO: fill the array with user input using a for loop.
     int x = 0;
    while (x < SIZE) {
        printf("Enter number %d: ", x);
        scanf("%d", &values[x]);
        x = x + 1

    // TODO: find the largest number and its index using another loop.
        int max_value = values[0];
    int max_index = 0;

    x = 1;
    while (x < SIZE) {
        if (values[x] > max_value) {
            max_value = values[x];
            max_index = x;
        }
        x = x + 1;
    }
    // TODO: print the results in a clear sentence.
    printf("The largest value is: %d at %d\n", max_value, max_index);

    
    return 0;
}
