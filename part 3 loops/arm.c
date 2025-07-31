#include<stdio.h>

int main() {
    int n, count = 0, power = 1;
    printf("Enter the number you want to check \n");
    scanf("%d", &n);

    int originalNum = n;  // Store the original number
    int num = n;
    int result = 0;
    int a;

    // Count the number of digits
    while (n != 0) {
        n = n / 10;
        count++;
    }

    while (num != 0) {
        a = num % 10;
        int power = 1;
        for (int i = 0; i < count; i++) {  // Calculate a^count
            power = power * a;
        }
        result = result + power;
        num = num / 10;
    }

    // Compare with the original number
    if (result == originalNum) {
        printf("The number %d is an Armstrong number\n", originalNum);
    } else {
        printf("The number %d is not an Armstrong number\n", originalNum);
    }

    return 0;
}
