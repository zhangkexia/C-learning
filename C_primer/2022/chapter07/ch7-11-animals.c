/* animals.c -- 使用switch 语句 */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;

    printf("Give me a letter of the alphabet, and I will give ");
    printf("an animal name\nbeginning with that letter.\n");
    printf("Please type in a letter; type # to end my act.\n");
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
        {
            continue;
        }
        if (islower(ch))
        {
            switch (ch)
            {
            case 'a':
                printf("argali, a wild sheep of Asia\n");
                break;
            case 'b':
                printf("babirusa, a wild pig of Malay\n");
                break;
            case 'c':
                printf("coati, racoonlike mammal\n");
            default:
                printf("That's a stummper!\n");
            } /* switch 结束 */
        }
        else
        {
            printf("I recognize only lowercase letters.\n");
        }
        while (getchar() != '\n')
        {
            continue; /* 跳过输入行的剩余部分 */
        }
        printf("Please type another letter or a #.\n");
    } /* while 循环结束 */
    printf("Bye!\n");
    return 0;
    
}