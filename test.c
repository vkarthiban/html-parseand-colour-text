#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
     char ch;
    HANDLE hconsole;
    hconsole=GetStdHandle(STD_OUTPUT_HANDLE);
     int count=0;
     FILE *fptr;
     fptr=fopen("test.html","r");
     while((ch=fgetc(fptr))!=EOF)
     {

           if(ch=='<')
           {
               SetConsoleTextAttribute(hconsole,(FOREGROUND_RED));
               printf("%c",ch);
               while((ch=fgetc(fptr))!='>')
              {

                 SetConsoleTextAttribute(hconsole,(FOREGROUND_RED));
                  printf("%c",ch);
              }

               SetConsoleTextAttribute(hconsole,(FOREGROUND_RED));
               printf(">");

           }

        else
         {
             SetConsoleTextAttribute(hconsole,(FOREGROUND_GREEN));
            printf("%c",ch);
         }
          count++;

     }
     printf("\n the number of characts present inthe file:%d",count);

    fclose(fptr);
     getch();
    return 0;

}
