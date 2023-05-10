#include <stdio.h>
#include <string.h>

int main()
{
    char str[] ="helloworld";
    printf("%s\n", strupr(str));        //uppercase

    char str1[]="KOLL";
    printf("%s\n",strlwr(str1));        //lowercase

    printf("%s\n",strrev(str));         //reverse a string

    char str2[]="Hello how are you";
    printf("%s\n",strchr(str2,'o'));    //print after character

    printf("%s\n",strrchr(str2,'o'));     //same as above but counts from the back side

    char str3[]="strings are fun";
    printf("%s\n",strstr(str3,"are"));      //string instead of character in above
    printf("%s\n",str3);
    printf("%s\n",strset(str3,'*'));        //every character changed to star

    char str4[]="strings are fun";
    printf("%s\n",strnset(str4,'*',4));     //till nth position star is set
    return 0;
}
