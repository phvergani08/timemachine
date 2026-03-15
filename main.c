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

     // reading file
     FILE *fptr;

    fptr = fopen("files.txt", "r");

    // perguntas e respostas
    char questions[80];
    char answer1[200];
    char answer2[200];
    char answer3[200];

    fgets(questions, 80, fptr);
    printf("%s\n", questions);
    scanf("%s", answer1);

    fgets(questions, 80, fptr);
    printf("%s\n", questions);
    scanf("%s", answer2);

    fgets(questions, 80, fptr);
    printf("%s\n", questions);
    scanf("%s", answer3);
    fclose(fptr);

    FILE *fptt;

    fptt = fopen("answers.txt", "w");
    fclose(fptt);

    FILE *fpty;

    fpty = fopen("answers.txt", "w");
    fprintf(fpty, "%s\n", answer1);
    fprintf(fpty, "%s\n", answer2);
    fprintf(fpty, "%s\n", answer3);

    fclose(fpty);
 }
