#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
int main(void)  // pr-jb- need some comments to describe what you are doing.
{
    string name = get_string();  // pr-jb - consider adding some text inside the parenthesis to tell user to what and when to type
    char initials[10];  // pr-jb-don't really need to allocate
    int i = 0, j = 0;
    for (i=0; name[i]!='\0'; i++)
    {
        if (i == 0)
            initials[j++]=toupper(name[i]);  // pr-jb - consider adding some spacing before and after the =
        if (name[i-1] == ' ')
            initials[j++]=toupper(name[i]); // pr-jb - could have just printf'd rather then storing in an array
    }
    for(i=0; i<j; i++)
        printf("%c",initials[i]);
    printf("\n");
    return 0;
}