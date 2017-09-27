#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{   setlocale (LC_ALL, "");
    
    int num1, num2;
    
    printf ("Informe um número inteiro: ");
    scanf ("%d", &num1);
    
    printf ("\nInforme outro número inteiro: ");
    scanf ("%d", &num2);
    
    if (num1>num2)
    {
       printf ("O primeiro número informado é o maior.");
    }  else
    {
           printf ("O segundo número informado é o maior.\n");
    }

      
  system("PAUSE");	
  return 0;
}
