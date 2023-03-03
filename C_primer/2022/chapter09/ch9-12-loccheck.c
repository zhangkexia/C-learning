/* loccheck.c -- 查看变量被储存在何处 */
#include <stdio.h>
void mikado(int); /* 函数原型 */
int main(void)
{
    int pooh = 2, bah = 5; /* main()的局部变量 */
    printf("In main(), pooh = %d and & pooh = %p\n", pooh, &pooh);
    printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
    mikado(pooh); // 值传递，调用的函数新开辟内存，存入这个值

    return 0;
}

void mikado(int bah)
{
    int pooh = 10;
    printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
}