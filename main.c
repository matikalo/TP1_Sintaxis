#include <ctype.h>
#include <stdio.h>

int main(){
    
    int c;
    while((c=getchar()) != EOF){
        if (islower(c))
        {
            putchar(toupper(c));
        }
        if (isupper(c))
        {
            putchar(tolower(c));
        }
        if (isdigit(c))
        {
            putchar(c);
        }
    }
return 0;
}