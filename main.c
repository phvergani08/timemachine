 /* CREATING A TIME MACHINE
  * - The file consists in questions of a txt file.
  * - The answers will be storaged in an txt files. */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

 int main() {
     // START APP
     printf("Welcome to the time machine!\n\n");

     // catching data from files.txt
     FILE *fptr;

    fptr = fopen("questions.txt", "r");

    // questions and answers
    char questions[80];
    char answer1[200];
    char answer2[200];
    char answer3[200];

    // First question
    fgets(questions, 80, fptr);
    printf("%s\n", questions);
    fgets(answer1, sizeof(answer1), stdin); // fgets instead of scanf

    // Second Question
    fgets(questions, 80, fptr);
    printf("%s\n", questions);
    fgets(answer2, sizeof(answer2), stdin);

    // third question
    fgets(questions, 80, fptr);
    printf("%s\n", questions);
    fgets(answer3, sizeof(answer3), stdin);
    fclose(fptr);

    // Creating the answers file
    FILE *fptt;

    fptt = fopen("answers.txt", "w");
    fclose(fptt);

    // storing the answers
    FILE *fpty;

    fpty = fopen("answers.txt", "w");
    fprintf(fpty, "WHAT IS YOUR DREAM: %s", answer1);
    fprintf(fpty, "WHY DID YOU WANT TO DO THAT: %s", answer2);
    fprintf(fpty, "HOW MANY TIME YOU PRETEND TO SPEND TO REALISE IT: %s", answer3);

    fclose(fpty);

    // Waiting time
    system("clear");
    printf("Wait a little..\n");
    sleep(3);
    system("clear");
    // See the results:
    char answers[300];

    printf("Your results: \n\n");
    FILE *fptu;

    fptu = fopen("answers.txt", "r");
    while (fgets(answers, 300, fptu)) {
        printf("%s\n", answers);
    }

    fclose(fptu);
 }
