#include <stdio.h>

int main(void){
    char c1,c2,c3;
    int i;
    float x;
    double y;

    printf("\n%s\n%s","Input 3 char,"
           " int, float and a double : ");
    scanf("%c%c%c%d%f%lf", &c1,&c2,&c3,&i,&x,&y);
    printf("\nHere is the data that you type in :\n");
    printf("%3c%3c%3c%5d%17e%17e\n\n", c1,c2,c3,i,x,y);

    return 0;
}