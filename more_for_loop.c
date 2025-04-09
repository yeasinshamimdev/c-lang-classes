#include <stdio.h>
int main (){
    int count = 1;
    for (int i = 4; i <= 100; i = i + 4)
    {
       printf("4 X %d = %d\n", count, i);
       count++;
    }
    

    return 0;
}