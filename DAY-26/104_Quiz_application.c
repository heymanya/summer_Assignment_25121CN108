//WAP TO CREATE QUIZ APPLICATION.

#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("Q U I Z   A P P L I C A T I O N -----> \n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct Answer: Delhi\n");
    }

    // Question 2
    printf("\n2. How many staes are there in INDIA?\n");
    printf("1. 26\n2. 28\n3. 27\n4. 25\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct Answer: C\n");
    }

    // Question 3
    printf("\n3. How many hours are there in a day?\n");
    printf("1. 25\n2. 12\n3. 24\n4. 18\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct Answer: 7\n");
    }

    printf("\n===== RESULT =====\n");
    printf("Your Score = %d/3\n", score);

    if(score == 3)
    {
        printf("Excellent!\n");
    }
    else if(score == 2)
    {
        printf("Good Job!\n");
    }
    else
    {
        printf("Better Luck Next Time!\n");
    }

    return 0;
}