#include <stdio.h>

int main() {
    int num1, num2, answer, user_answer;
    int correct = 0, wrong = 0;
    char choice='y';

    while (choice != 'n') {
        printf("Enter two numbers to add: ");
        scanf("%d %d", &num1, &num2);

        answer = num1 + num2;

        printf("What is %d + %d ? ", num1, num2);
        scanf("%d", &user_answer);

        if (user_answer == answer) {
            printf("Correct!\n");
            correct++;
        } else {
            printf("Wrong. The correct answer is %d.\n", answer);
            wrong++;
        }

        printf("Do you want to try another problem? (y/n): ");
        scanf(" %c", &choice);
    }

    printf("You got %d correct and %d wrong answers.\n", correct, wrong);

    return 0;
}