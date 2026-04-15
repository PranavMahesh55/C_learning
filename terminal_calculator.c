#include <stdio.h>

void add(int *a, int *b, int *c){
    *c = *a+*b;
}

void subtract(int *a, int *b, int *c){
    *c = *a-*b;
}

void multiply(int *a, int *b, int *c){
    *c = (*a)*(*b);
}

void divide(int *a, int *b, int *c){
    *c = (*a)/(*b);
}

int main(void){
    int first_num;
    int second_num;
    int result;
    int operator;
    printf("Enter the operation you want done: ");
    operator = getchar();

    printf("Enter first number: ");
    scanf("%d", &first_num);
    printf("Enter second number: ");
    scanf("%d", &second_num);

    switch (operator) {
        case '+':
            printf("Adding both numbers, %d and %d\n", first_num, second_num);
            add(&first_num, &second_num, &result);
            printf("Result: %d\n", result);
            break;
        case '-':
            printf("Subtracting both numbers, %d and %d\n", first_num, second_num);
            subtract(&first_num, &second_num, &result);
            printf("Result: %d\n", result);
            break;
        case '*':
            printf("Multiplying both numbers, %d and %d\n", first_num, second_num);
            multiply(&first_num, &second_num, &result);
            printf("Result: %d\n", result);
            break;
        case '/':
            printf("Dividing both numbers, %d and %d\n", first_num, second_num);
            divide(&first_num, &second_num, &result);
            printf("Result: %d\n", result);
            break;
    }

    return 0;
}