#include <stdio.h>
#include <string.h>

int isPalindrome(char *start, char *end) {
    while (start < end) {
        if (*start != *end) {
            return 0; 
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    char *start = str;               
    char *end = str + strlen(str) - 1; 

    if (isPalindrome(start, end)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}

#include <stdio.h>

int isSpyNumber(int *num) {
    int sum = 0, product = 1;
    int n = *num;

    while (n > 0) {
        int digit = n % 10; 
        sum += digit;       
        product *= digit; 
        n /= 10;          
    }
    return sum == product;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isSpyNumber(&num)) {
        printf("The number %d is a spy number.\n", num);
    } else {
        printf("The number %d is not a spy number.\n", num);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int isPalindrome(char *start, char *end) {
    while (start < end) {
        if (*start != *end) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    char *start = str;               
    char *end = str + strlen(str) - 1; 

    if (isPalindrome(start, end)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
