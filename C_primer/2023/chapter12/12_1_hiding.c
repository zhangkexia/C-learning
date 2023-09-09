// hiding.c -- 块中的变量
#include <stdio.h>
int main(){
    int x = 30;

    printf("x in outer block: %d at %p\n", x, &x);
    {
        int x = 77;
        printf("x in inner block: %d at %p\n", x, &x);
    }

    printf("x in outer block: %d at %p\n", x, &x);

    while(x++ < 33){ //这里用的x，是外面的x
        int x = 100;
        x++;
        printf("x in while loop: %d at %p\n", x, &x);
    }

    printf("x in outer block: %d at %p\n", x, &x);

    return 0;
}