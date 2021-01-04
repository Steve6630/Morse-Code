#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
    //Using two pointer arrays to compare the result and generate the output.
    char *characters[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M","N", "O", "P", "Q", "R", "S", "T", "U",
                      "V", "W", "X", "Y", "Z", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "=", "@", "$" , "&", "/", "+", ";", "-", "?", ":", ",", "."};

    char *morsecode[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---", "-.-",".-..","--","-.","---",".--.","--.-",
                     ".-.","...","-","..-", "...-",".--","-..-","-.--","--..",".----","..---","...--","....-", ".....", "-....",
                     "--...","---..","----.","-----", "-...-", ".--.-.", "...-..-", ".-...", "-..-.", ".-.-.", "-.-.-.",  "-....-", "..--..", "---...", "--..--", ".-.-.-"};
    
    char str[6] = {0};
    char *str1[] = {"hello world"};
    char c;
    int esc=0,i=0,j=0;
    FILE *text;//Declaring FILE pointer.
    text = fopen("Output.txt","r");//Opening Output.txt file to read from it.  
    while(esc==0)
    {
        for(i=0;;i++)
        {
            c = fgetc(text);//Taking a single character at a time.
            str[i] = c;
            if(str[i]==' ')//Looping till it hits a space.
            {
                str[i] = '\0';//Placin NULL character at last place of i.
                break;
            }
            if(str[i]=='0')//If the value hits 0 then break the loop.
            {
                esc = 1;//Invert the esc value to stop looping.
                str[i] = '\0';
                break;
            }
        }
        str1[0] = str;//Using a pointer array so that comparison can be made easily between both pointer arrays.
        
        for(i=0;i<74;i++)
        {
            if(strcmp(str1[0], morsecode[i]) == 0)//Comparing the calue in string to array of morescode.
            {
                printf("%s",characters[i]);//Printing the character same to morsecode.
                break;
            }
            
        }

        for(i=0;i<6;i++)
        {
            str[i] = NULL;//It is important to NULL every poisition of the arry so that no previous value occurs. 
        }
    }
    fclose(text);
}