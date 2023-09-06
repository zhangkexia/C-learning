// nono.c -- 千万不要模仿！！
#include <stdio.h>
int main(void){
    char side_a[] = "Side A";
    char dont[] = {'W', 'O', 'W', '!'};
    char side_b[] = "Side B";

    puts(dont); // dont不是一个字符串，是一个字符数组; 缺少一个表示结束的空字符。

    return 0;
}