#include "stdio.h"

/*
Kavindu Sachinthe
ECS
galkotu-ec22053@stu.kln.ac.lk
*/

int main() {

    int a = 25;
    float b = 45.0;
    char c = 'A';
    float sum;
    sum = a + b + c;
    printf("Result = %f\n", sum);
    return 0;

//As a multi-line comment in your program, write the answers to the following questions:
    //- What is the output of the above program?
    /* c charactor denotes ascci value of A = 65,
      when it operate, it work with integer value
     then implicit type casting, int a + float b + char c and
     assign it to float variable called sum,
     then resulf printed and it print up to 6 decimal places due to float have 4 bytes and
     it show all 6 decimal places.
     to stop that use %.1f for only one decimal
     to stop that use %.2f for only two decimal etc
//- Explain reasons for the above output.
*/
}
