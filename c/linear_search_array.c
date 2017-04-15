#include <stdio.h>

int main() {
    // this is the array we'll search in
    int x[10] = {23, 54, 4, 2, 39, 48, 28, 19, 20, 40};
    
    int i;

    // if the value is 1 then TRUE
    // else if the value is 0 then FALSE
    int flag = 0;

    // this will hold the user input
    int n;

    printf("Enter a number you want to search for: ");
    scanf("%d", &n);

    for (i = 0; i < 10; i++) {
        if (x[i] == n) {
            flag = 1;
        }
    }

    if (flag == 0) {
        printf("The number is not present in the array.\n");
    } else {
        printf("The number is present in the array.\n");
    }
    
    return 0;
}