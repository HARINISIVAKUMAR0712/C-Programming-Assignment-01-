//CODE:

#include <stdio.h>

int main() {
    int questionsAnswered, remainingTime, alreadySubmitted;

    printf("Questions Answered: ");
    scanf("%d", &questionsAnswered);

    printf("Remaining Time: ");
    scanf("%d", &remainingTime);

    printf("Already Submitted: ");
    scanf("%d", &alreadySubmitted);

    if (questionsAnswered >= 1 && remainingTime > 0 && alreadySubmitted == 0) {
        printf("Submission Allowed\n");
    } else {
        printf("Submission Not Allowed\n");
    }

    return 0;
}
/*SAMPLE INPUT:
Questions Answered: 45
Remaining Time: 12
Already Submitted: 0
*/INPUT:
Submission Allowed
