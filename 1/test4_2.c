#include <stdio.h>
#include <string.h>
int main(){
    char str1[80];
    strcpy (str1,"these ");
    strcat (str1,"strings ");
    strcat (str1,"are ");
    strcat (str1, "\0");
    puts(str1);
    return 0;
}
