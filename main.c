 /* CREATING A TIME MACHINE
  * - The file consists in questions of a txt file.
  * - The answers will be storaged in an txt files and discovered 1 year after.
  */

#include <stdio.h>
#include <string.h>
#include <time.h>

 int main() {
     // START APP
     printf("Welcome to the time machine!\n\n");

     // catching data from files.txt
     FILE *fptr;

    fptr = fopen("files.txt", "r");

    // questions and answers
    char questions[80];
    char answer1[200];
    char answer2[200];
    char answer3[200];

    fgets(questions, 80, fptr);
    printf("%s\n", questions);
    fgets(answer1, sizeof(answer1), stdin); // fgets instead of scanf

    fgets(questions, 80, fptr);
    printf("%s\n", questions);
    fgets(answer2, sizeof(answer2), stdin);

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
    fprintf(fpty, "%s\n", answer1);
    fprintf(fpty, "%s\n", answer2);
    fprintf(fpty, "%s\n", answer3);

    fclose(fpty);
 }
