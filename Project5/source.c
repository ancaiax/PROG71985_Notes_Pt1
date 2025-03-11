#include <stdio.h>

//abstract data types (ADT)
//madisont - prog71985 - week 05

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define MAXSIZE 50
int main(void)
{
    int input; / Initialize the variables like input = 0 /
        scanf("%d", &input);
    {
        int answer = 32 / input;
        printf("%d\n", answer);
    }
    return 0;
}
/*Stdin is stream for the keyboard (where your input goes)
Stdout is stream for display .(where your output goes)
Stderr is stream for errors and is set to stdout(error to log file)

char input[50]

scanf("%s",input);
 problems with scanf


Overflows (has no concept of overflow capping)
Spaces (only takes input till the first \n character detected)
Implied stdin


 fgets
 atoi() function for fgets input validation . replacement of

he gave us the answer to assignment 1 refactor with like for loop checking each character of 
strings and checking them if they are alpha and then printing

 int main(int argc , char** argv)

 if(argc !=3)
 {
    printf("Usage %s %s",argv[0],argv[])

 }

 umm we were talking about how powershell is good to execute code due to how 
 it doesn't makes us leave our hand from the keyboard

 */