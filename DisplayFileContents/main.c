#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    FILE *fp;
    char ch;

    fp = fopen("test.txt","r");

    while(1){
        ch = fgetc(fp);
        if(ch == EOF)
            break;
        printf("%c", ch);
    }

    fclose(fp);
    system("pause");
    return 0;
}
