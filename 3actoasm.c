
#include <stdio.h>

int main() {
    char op, a, b, result[10];

    printf("Enter Three Address Code (e.g., t1=a+b): ");
    scanf("%9[^=]=%c%c%c", result, &a, &op, &b);

    printf("\n8086 Assembly Code:\n");
    printf("MOV AX, %c\n", a);

    switch (op) {
        case '+':
            printf("ADD AX, %c\n", b);
            break;
        case '-':
            printf("SUB AX, %c\n", b);
            break;
        case '*':
            printf("MOV BL, %c\n", b);
            printf("MUL BL\n");
            break;
        case '/':
            printf("MOV BL, %c\n", b);
            printf("DIV BL\n");
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("MOV %s, AX\n", result);

    return 0;
}

