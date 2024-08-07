#include "stdio.h"
#include "limits.h"
#include "float.h"


/*
Kavindu Sachinthe
ECS
galkotu-ec22053@stu.kln.ac.lk
*/
int main() {
    printf("Maximum and minimum number that can be stored in int data type.\nMAX = %d \nMIN = %d\n\n",INT_MAX,INT_MIN);
    printf("Maximum and minimum number that can be stored in float data type.\nMAX = %lf \nMIN = %lf \n\n",FLT_MAX,-FLT_MAX);
    printf("Maximum and minimum number that can be stored in double data type.\nMAX = %lf \nMIN = %lf\n",DBL_MAX,-DBL_MAX);
//INT_MAX, INT_MIN, FLT_MAX, -FLT_MAX, DBL_MAX, DBL_MIN
    return 0;
}
