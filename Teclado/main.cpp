#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <windows.h>

void gotoxy (int x, int y);

int main()
{
    char x;
    x = getch();
    if (x == 80) {
        gotoxy(5,5);
        printf("Mensagem !!!! \n");
                      }
    system("pause");
    return(0);
}

//Função para mover o cursor

void gotoxy (int x, int y)
{
    HANDLE wdw;
    COORD c = { x, y };
    wdw=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition( wdw, c );
}
