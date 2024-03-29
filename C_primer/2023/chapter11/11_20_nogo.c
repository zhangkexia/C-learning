// nogo.c -- 该程序是否能正常运行？
#include <stdio.h>
#define ANSWSER "Grant"
#define SIZE 40

char * s_gets(char * st, int n);

int main(void)
{
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (try != ANSWSER) // try ANSWSER都是指针，这里是比较地址，并不能比较字符串内容。
    {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }

    puts("That's right!");

    return 0;
    
}


char * s_gets(char * st, int n){
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if(ret_val){
        while(st[i] != '\n' && st[i] != '\0'){
            i++;
        }
        if(st[i] == '\n'){
            st[i] = '\0';
        }else {
            while (getchar() != '\n'){
                continue;
            }
        }
    }
    return ret_val;
}