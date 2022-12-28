#include <stdio.h>
void pound(int n); //函数声明

int main(void)
{
    int times = 5;
    char ch = '!';
    float f = 6.0f;

    pound(times);
    pound(ch);
    pound(f);

    return 0;
}

// 函数定义
void pound(int n)
{
    while (n-- > 0)
    {
        printf("#");
    }
    printf("\n");
    
}