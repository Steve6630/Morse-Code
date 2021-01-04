//After finishing your input press escape key to generate output.
//This program generates a text file named Output.txt.

#include <stdio.h>
#include <strings.h>
#include <windows.h>

#define esc 27//Defining macro for esc key with its ASCII value.
void main()
{
    char word = 0;
    char strings[100] = {0};//Using an array to store characters to write it out at the ned on the text file.
    int i = 0;
    printf("Enter your character:\n");
    do
    {
        strings[i] = getch();//fetching the character and storing it in array.
        printf("%c", strings[i]);//printing the character.
        word = strings[i];//storing the character to produce its equivalent morse code.

        switch (strings[i])//using switch case to produce character's morse code.
        {
        case 'A':
            Beep(500, 500);
            Beep(500, 999);
            break;

        case 'B':
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case 'C':
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 500);
            break;

        case 'D':
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case 'E':
            Beep(500, 500);
            break;

        case 'F':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 500);
            break;

        case 'G':
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 500);
            break;

        case 'H':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case 'I':
            Beep(500, 500);
            Beep(500, 500);
            break;

        case 'J':
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 999);
            break;

        case 'K':
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 999);
            break;

        case 'L':
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case 'M':
            Beep(500, 999);
            Beep(500, 999);
            break;

        case 'N':
            Beep(500, 999);
            Beep(500, 500);
            break;

        case 'O':
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 999);
            break;

        case 'P':
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 500);
            break;

        case 'Q':
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 999);
            break;

        case 'R':
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 500);
            break;

        case 'S':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case 'T':
            Beep(500, 999);
            break;

        case 'U':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 999);
            break;

        case 'V':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 999);
            break;

        case 'W':
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 999);
            break;

        case 'X':
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 999);
            break;

        case 'Y':
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 999);
            break;

        case 'Z':
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case 'a':
            Beep(500, 500);
            Beep(500, 999);
            break;

        case 'b':
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case 'c':
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 500);
            break;

        case 'd':
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case 'e':
            Beep(500, 500);
            break;

        case 'f':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 500);
            break;

        case 'g':
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 500);
            break;

        case 'h':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case 'i':
            Beep(500, 500);
            Beep(500, 500);
            break;

        case 'j':
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 999);
            break;

        case 'k':
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 999);
            break;

        case 'l':
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case 'm':
            Beep(500, 999);
            Beep(500, 999);
            break;

        case 'n':
            Beep(500, 999);
            Beep(500, 500);
            break;

        case 'o':
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 999);
            break;

        case 'p':
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 500);
            break;

        case 'q':
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 999);
            break;

        case 'r':
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 500);
            break;

        case 's':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case 't':
            Beep(500, 999);
            break;

        case 'u':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 999);
            break;

        case 'v':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 999);
            break;

        case 'w':
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 999);
            break;

        case 'x':
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 999);
            break;

        case 'y':
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 999);
            break;

        case 'z':
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case '0':
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 999);
            break;

        case '1':
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 999);
            break;

        case '2':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 999);
            break;

        case '3':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 999);
            break;

        case '4':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 999);
            break;

        case '5':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case '6':
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case '7':
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case '8':
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case '9':
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 500);
            break;

        case '.':
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 999);
            break;

        case ',':
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 999);
            break;

        case '?':
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            break;

        case '/':
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 500);
            break;

        case '@':
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 999);
            Beep(500, 500);
            Beep(500, 999);
            Beep(500, 500);
            break;

        case ':':
            Beep(500,999);
            Beep(500,999);
            Beep(500,999);
            Beep(500,500);
            Beep(500,500);
            Beep(500,500);
            break;

        case '-':
            Beep(500,999);
            Beep(500,500);
            Beep(500,500);
            Beep(500,500);
            Beep(500,500);
            Beep(500,999);
            break;

        case ';':
            Beep(500,999);
            Beep(500,500);
            Beep(500,999);
            Beep(500,500);
            Beep(500,999);
            Beep(500,500);
            break;

        case '"':
            Beep(500,500);
            Beep(500,999);
            Beep(500,500);
            Beep(500,500);
            Beep(500,999);
            Beep(500,500);
            break;

        case '+':
            Beep(500,500);
            Beep(500,999);
            Beep(500,500);
            Beep(500,999);
            Beep(500,500);
            break;

        case '&':
            Beep(500,500);
            Beep(500,999);
            Beep(500,500);
            Beep(500,500);
            Beep(500,500);
            break;

        case '$':
            Beep(500,500);
            Beep(500,500);
            Beep(500,500);
            Beep(500,999);
            Beep(500,500);
            Beep(500,500);
            Beep(500,999);
            break;

        case '=':
            Beep(500,999);
            Beep(500,500);
            Beep(500,500);
            Beep(500,500);
            Beep(500,999);
            break;

        default:
            break;
        }
        i++;
    } while (word != esc);
    printf("\n");
    strings[i - 1] = '\0';
    FILE *text;//Declaring FILE pointer named text.
    text = fopen("Output.txt", "w");//Opening Output.txt file in the write mode to write the characers.

    char str1[1000] = {0};//Taking a large array because a limit of 100 characters stored can produce equivalent morse of code of 1000.
    int j = 0;
    for (int i = 0; i <= strlen(strings); i++)
    {
        switch (strings[i])//Using switch case to store morse code.
        {
        case 'A':
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case 'B':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case 'C':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case 'D':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case 'E':
            str1[j] = '.';
            break;

        case 'F':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case 'G':
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case 'H':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case 'I':
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case 'J':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case 'K':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case 'L':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case 'M':
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case 'N':
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case 'O':
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case 'P':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case 'Q':
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case 'R':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case 'S':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case 'T':
            str1[j] = '-';
            break;

        case 'U':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case 'V':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case 'W':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case 'X':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case 'Y':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case 'Z':
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case 'a':
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case 'b':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case 'c':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case 'd':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case 'e':
            str1[j] = '.';
            break;

        case 'f':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case 'g':
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case 'h':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case 'i':
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case 'j':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case 'k':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case 'l':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case 'm':
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case 'n':
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case 'o':
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case 'p':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case 'q':
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case 'r':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case 's':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case 't':
            str1[j] = '-';
            break;

        case 'u':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case 'v':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case 'w':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case 'x':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case 'y':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case 'z':
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case '0':
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case '1':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case '2':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case '3':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case '4':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case '5':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case '6':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case '7':
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case '8':
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case '9':
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case '.':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case ',':
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '-';
            break;

        case ':':
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case '?':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case '-':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case ';':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '.';
            break;


        case '+':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case '/':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case '&':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '.';
            break;

        case '$':
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '-';
            break;

        case '@':
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '-';
            str1[j] = '.';
            break;

        case '=':
            str1[j++] = '-';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j++] = '.';
            str1[j] = '-';
            break;
        
        case ' ':
            j--;
            break;

        default:
            break;

        }
        j++;
        str1[j] = ' ';
        j++;
    }
    str1[j - 3] = '0';//Taking 0 at the end so that the morse code decoder program can understand to stop executing when it reaches this number 0.
    str1[j - 2] = '\0';//Above code increments j two times therefore storing null character at j-2 in the array.

    fprintf(text, "%s", str1);//Writing the array of generated morse code on the text file.
    fclose(text);//Closing the FILE pointer text.
}