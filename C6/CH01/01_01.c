#include <stdio.h>
int main(void)
{
    int dogs;

    printf("How many dogs do you have?\n");
    scanf_s("%d", &dogs);//scanf_s比scanf安全等级要高，尽量使用scanf_s
    printf("So you have %d dog(s)!\n", dogs);

    return 0;
}