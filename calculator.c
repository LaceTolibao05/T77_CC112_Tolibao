#include <stdio.h>
int main()
{
    int num1, num2;
    char operator, clear, repeat = 'y';
    float answer = 0;

    while(repeat == 'y'){

        printf("enter equation: ");
        scanf("%d %c %d", &num1, &operator, &num2);

        switch(operator) {
            case '+':
                answer = num1 + num2;
                break;
            case '-':
                answer = num1 - num2;
                break;
            case '*':
                answer = num1 * num2;
                break;
            case '/':
                answer = (float) num1 / num2;
                break;
            default:
                printf("error: %c not supported", operator);
                return 1;


        }
            printf("answer: %d %c %d = %f\n", num1, operator, num2, answer);
            while((clear = getchar()) != '\n' && clear != EOF);

            printf("repeat?(y/n): ");
            scanf("%c", &repeat);
        }
        printf("\nProgrammed by: TOLIBAO, LACE MARIE P.");



    return 0;

}
