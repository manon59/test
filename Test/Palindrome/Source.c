#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<locale.h>

/*bool Palindrome(char tab[256], unsigned char start, unsigned char end)
{
    if (start == end) {
        return true;
    }
    if (end - start == 1) {
        if (tab[start] == tab[end])
            return true;
        else {
            return false;
        }
    }
 
    if (tab[start] == tab[end]) {
        Palindrome(tab, start + 1, end - 1);
    }
    else {
        return false;
    }
   
}*/

int main() {
	setlocale(LC_ALL, "fr-FR");
	/*char tab[256];
	printf("Entrer votre mot:");
	scanf_s("%s", tab, 256 - 1);
    if (Palindrome(tab, 0, strlen(tab)- 1) == true)
        printf("Votre mot est un palindrome");
    else
        printf("Votre mot n'est pas un palindrome");*/



}