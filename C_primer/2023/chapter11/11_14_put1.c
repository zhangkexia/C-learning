// put1.c -- 打印字符串，不添加\n
#include <stdio.h>

void put1(const char * string) { // 不改变字符串
    while (*string != '\0'){
        putchar(*string++);
    }

}

int main(void) {
    put1("hwlloljljljl");
}

