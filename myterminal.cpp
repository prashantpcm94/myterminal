#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    FILE *fp;
    fp=fopen("Terminal.xz","r");
    char c[1000];
    system("pwd > Terminal.xz");
    char d[1000];
    char e[1000];
    fscanf(fp,"%s ",d);
    cout<<d<<" ";
   A: cin.getline(c,100000);
    if(c=="")
        {
            system("pwd > Terminal.xz");
            fscanf(fp,"%s ",d);
            cout<<d<<" ";
        }
    if(c[0]=='c'&&c[1]=='d'&&c[2]==' ')
        {
            strcpy(e,c);
            strcat(e," > Terminal1.xz");
            system(e);
            for(int i=3;i<strlen(c);i++)
            cout<<c[i];
            cout<<" ";
        }
    else
        {
            system(c);
            system("pwd > Terminal.xz");
            fscanf(fp,"%s",d);
            cout<<d<<" ";
        }
    goto A;
}
