#include <stdio.h>

int isPalindrome(int num);

int main()
{
    int n, count = 0, num = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d palindrome numbers are:\n", n);

    while (count < n)
    {
        if (isPalindrome(num))
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}

int isPalindrome(int num)
{
    int temp = num, reverse = 0, digit;

    while (temp > 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    if (num == reverse)
        return 1;
    else
        return 0;
}
