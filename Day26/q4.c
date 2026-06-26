#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== QUIZ APPLICATION =====\n");

    
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;


    printf("\n2. Which language is used for system programming?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
        score++;
    printf("\n3. Which symbol is used for comments in C?\n");
    printf("1. //\n2. ##\n3. **\n4. %%\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nYour Score = %d/3\n", score);

    if(score == 3)
        printf("Excellent!\n");
    else if(score == 2)
        printf("Good Job!\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}