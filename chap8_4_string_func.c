#include <stdio.h>
#include <string.h> // used to count the number of characters  in the string
int main()
{
    //int length = strlen(st);

    char st[] = "Rishi";
    char s1[56] = "Harry";
    char s2[56] = "bhai";
    
    //printf("%d", strlen(st));

    char target[30];
    strcpy(target, st); // target now contains "Rishi"
    printf("%s %s\n", st, target);


    strcat(s1,s2);  // s1 now contains harrybhai with no space in between
    printf("%s %s\n", s1, s2);


//strcmp() used to compare 2 strings.
// it returns 0 if two str are equal
// neg value, if the first str's mismatching character's ASCII value is less than the second str's character
int a = strcmp("far","joke"); // neg val
printf("%d\n", a); 
int b = strcmp("joke","far");  //pos val
printf("%d\n", b);
    return 0;
}