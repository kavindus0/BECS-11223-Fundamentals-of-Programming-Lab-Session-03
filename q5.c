#include "stdio.h"

/*
Kavindu Sachinthe
ECS
galkotu-ec22053@stu.kln.ac.lk
*/
int main() {

    int intsize = (int) sizeof(int);
    printf("integer has %d byte of size\n", intsize);
    int charsize = (int) sizeof(char);
    printf("character has %d byte of size\n", charsize);
    int floatsize = (int) sizeof(float);
    printf("float has %d byte size\n", floatsize);
    int doublesize = (int) sizeof(double);
    printf("double has %d byte size\n", doublesize);
    return 0;
}