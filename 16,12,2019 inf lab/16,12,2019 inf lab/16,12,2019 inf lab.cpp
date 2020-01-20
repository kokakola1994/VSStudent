// 16,12,2019 inf lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

char* strwordb(char* s)
{
    for (; *s; s++)
        if (isalnum(*s))
            return s;
    return s;
}
char* strworde(char* s)
{
    for (; *s; s++)
        if (!isalnum(*s))
            return s;
    return s;
}
void print(char* b, char* e)
{
    char* t = NULL;
    for (t = b; t != e; t++)
        printf("%c", *t);
    printf("\n");
}
void Del(char* b, char* e)
{
    for (; *e; ++b, ++e)
        *b = *e;
    *b = *e;
}
void del_del(char* s, int(*cmp)(char* b, char* e))
{
    char* b = strwordb(s);
    char* e = NULL;
    char* t1, * t;
    int flag = 0;
    for (; *b; b = strwordb(e))
    {
        e = strworde(b);
        if ((*cmp)(b, e))
        {
            Del(b, e); e = b;
        }
    } 
}
int isdig(char* b, char* e)
{
    char* t;
    for (t = b; t != e; t++)
    {
        if(!(*t>= '0' && *t <= '9'))return 0;
    }
    return 1;
}
int MaxWord(char* s)
{
    int max = 0;
    char* b = strwordb(s);
    char* e = NULL;
    for (; *b; b = strwordb(e))
    {
        e = strworde(b);
        if ((e - b) > max) max = (e - b);
    }
    return max;
}
void swap(char* b, char* e)
{
    char* b1 = b;
    char* e1 = e;
    for (e1--; e1 > b1; e1--, b1++)
    {
        char s; s = *e1; *e1 = *b1; *b1 = s;
    }
    swap(b1, e1);
}
int issamefirstlast(char* b, char* e)
{
    if (*b == *(e - 1)) return 1;
    return 0;
}
int isidentserial(char* b, char* e)
{
    char* t1, * t;
    for (t1 = b; t = b;)
    {

    }
}
int main()
{
    char line[] = "The cow is beautiful. 33 cows grazer in the field!!!";
    del_del(line, &isdig);
    printf("\n%s\n", line);
    printf("\nMax word: %d\n", MaxWord(line));
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
