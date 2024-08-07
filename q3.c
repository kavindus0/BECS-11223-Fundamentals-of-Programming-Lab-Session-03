#include "stdio.h"
/*
Kavindu Sachinthe
ECS
galkotu-ec22053@stu.kln.ac.lk
*/
/*
Write a C program contains the following variable declarations and assignments:
Write output statements that would produce the output below (notice that the values stored in the variables
have been output):
90
Test Score 2 = 80
The sum of the scores = 170
Upload your completed C program into the Lab 03 – Program 03 submission folder.
 */

int main() {
    int test1Score = 90;
    int test2Score = 80;
    int sumOfScores = test1Score + test2Score;

    printf("Test Score 1 = %d\nTest Score 2 = %d\nThe sum of the scores = %d\n", test1Score, test2Score, sumOfScores);

    return 0;

}
