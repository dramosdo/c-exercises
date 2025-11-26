#include <stdio.h>

// Practice exercise: use if/else with simple input/output.
// Goal: read today's temperature in degrees Fahrenheit and print a message
// describing the weather using an if/else chain.
// TODOs for you:
// 1) After reading the value into temperature, add an if/else chain to
//    classify the day as "freezing" (32 or below), "mild" (33-75), or "hot"
//    (above 75).
// 2) Print a short message for each category.
// Example runs students should aim for:
// - Input: 20  -> Output: "Freezing day, wear a coat!"
// - Input: 60  -> Output: "Nice and mild outside."
// - Input: 90  -> Output: "It's hot, stay hydrated."
// Hint: remember that conditions are checked top to bottom; handle the highest
// or lowest range first so later checks are not skipped.
int main() {
    int temp = 0;

    printf("Enter today's temperature (F): ");
    scanf("%d", &temp);

    // Your if/else statements go below this line.
    if (temp <= 32) {
        printf("It is cold outside, wear a jacket!\n");
    }
    else if (temp >= 33 && temp <= 75) {
        printf("Nice weather outside!\n");
    }
    else { 
        printf("It's hot outside!\n");
    }

    return 0;
}
