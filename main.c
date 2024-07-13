#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){

    char ch;
    do {
        system("cls");
        printf("1. Dashboard \n");
        printf("2. Lend a book \n");
        printf("3. Return a book \n");
        printf("4. List & Search Member\n");
        printf("5. List & Search Books\n");
        printf("6. List of Lended books\n");
        printf("7. Register a Member\n");
        printf("8. Register Books\n");
        printf("0. Exit");
        
        ch = getch();

        if(ch=='0') break;

    } while (1);
    
    
}