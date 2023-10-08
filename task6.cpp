#include <iostream>
#include <windows.h>
using namespace std;
void printMaze();
void printPlayer();
void erasePlayer();
void movePlayer();
void movePlayerLeft();
void movePlayerRight();
void printEnemy1();
void eraseEnemy1();
void moveEnemy1();
void printEnemy2();
void eraseEnemy2();
void moveEnemy2();
void printEnemy3();
void eraseEnemy3();
void moveEnemy3();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);
int pX = 25, pY = 17;
int eX1 = 1, eY1 = 1;
int eX2 = 40, eY2 = 1;
int eX3 = 1, eY3 = 5;
main()
{
    system("cls");
    printMaze();
    printPlayer();
    printEnemy1();
    printEnemy2();
    printEnemy3();
    while (true)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight();
        }
        moveEnemy1();
        Sleep(200);
        moveEnemy2();
        Sleep(200);
        moveEnemy3();
        Sleep(200);
    }
}

void printPlayer()
{
    gotoxy(pX, pY);
    cout << "     ^     ";
    gotoxy(pX, pY + 1);
    cout << "|#########|";
    gotoxy(pX, pY + 2);
    cout << "|#########|";
    gotoxy(pX, pY + 3);
    cout << "|#########|";
}

void erasePlayer()
{
    gotoxy(pX, pY);
    cout << "           ";
    gotoxy(pX, pY + 1);
    cout << "           ";
    gotoxy(pX, pY + 2);
    cout << "           ";
    gotoxy(pX, pY + 3);
    cout << "           ";
}

void movePlayerLeft()
{
    if (getCharAtxy(pX - 1, pY) == ' ')
    {
        erasePlayer();
        pX = pX - 1;
        printPlayer();
    }
}
void movePlayerRight()
{
    if (getCharAtxy(pX + 11, pY) == ' ')
    {
        erasePlayer();
        pX = pX + 1;
        printPlayer();
    }
}

void printEnemy1()
{
    gotoxy(eX1, eY1);
    cout << "|********|";
    gotoxy(eX1, eY1 + 1);
    cout << "|********|";
    gotoxy(eX1, eY1 + 2);
    cout << "|********|";
    gotoxy(eX1, eY1 + 3);
    cout << "|********|";
}

void eraseEnemy1()
{
    gotoxy(eX1, eY1);
    cout << "          ";
    gotoxy(eX1, eY1 + 1);
    cout << "          ";
    gotoxy(eX1, eY1 + 2);
    cout << "          ";
    gotoxy(eX1, eY1 + 3);
    cout << "          ";
}

void moveEnemy1()
{
    eraseEnemy1();
    eX1 = eX1 + 1;
    if (eX1 == 30)
    {
        eX1 = 1;
    }
    printEnemy1();
}

void printEnemy2()
{
    gotoxy(eX2, eY2);
    cout << "|********|";
    gotoxy(eX2, eY2 + 1);
    cout << "|********|";
    gotoxy(eX2, eY2 + 2);
    cout << "|********|";
    gotoxy(eX2, eY2 + 3);
    cout << "|********|";
}

void eraseEnemy2()
{
    gotoxy(eX2, eY2);
    cout << "          ";
    gotoxy(eX2, eY2 + 1);
    cout << "          ";
    gotoxy(eX2, eY2 + 2);
    cout << "          ";
    gotoxy(eX2, eY2 + 3);
    cout << "          ";
}

void moveEnemy2()
{
    eraseEnemy2();
    eY2 = eY2 + 1;
    if (eY2 == 12)
    {
        eY2 = 1;
    }
    printEnemy2();
}

void printEnemy3()
{
    gotoxy(eX3, eY3);
    cout << "|********|";
    gotoxy(eX3, eY3 + 1);
    cout << "|********|";
    gotoxy(eX3, eY3 + 2);
    cout << "|********|";
    gotoxy(eX3, eY3 + 3);
    cout << "|********|";
}

void eraseEnemy3()
{
    gotoxy(eX3, eY3);
    cout << "          ";
    gotoxy(eX3, eY3 + 1);
    cout << "          ";
    gotoxy(eX3, eY3 + 2);
    cout << "          ";
    gotoxy(eX3, eY3 + 3);
    cout << "          ";
}

void moveEnemy3()
{
    eraseEnemy3();
    eX3 = eX3 + 2;
    eY3 = eY3 + 1;
    if (eX3 == 15 && eY3 == 12)
    {
        eX3 = 1;
        eY3 = 5;
    }
    printEnemy3();
}

void printMaze()
{
    cout << "###################################################" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "#                                                 #" << endl;
    cout << "###################################################" << endl;
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
 CHAR_INFO ci;
 COORD xy = {0, 0};
 SMALL_RECT rect = {x, y, x, y};
 COORD coordBufSize;
 coordBufSize.X = 1;
 coordBufSize.Y = 1;
 return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}