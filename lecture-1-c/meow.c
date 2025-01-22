#include <stdio.h>
#include <cs50.h>

void meow(int n);

int main(void)
{
    int answer = get_int("How many times would you like to meow?\n");
    meow(answer);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
