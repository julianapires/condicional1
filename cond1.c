#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[])
{   setlocale (LC_ALL, "");
    
    int num1, num2;
    
    printf ("Informe um n�mero inteiro: ");
    scanf ("%d", &num1);
    
    printf ("\nInforme outro n�mero inteiro: ");
    scanf ("%d", &num2);
    
    if (num1>num2)
    {
       printf ("O primeiro n�mero informado � o maior.");
    }  else
    {
           printf ("O segundo n�mero informado � o maior.\n");
    }

      
  system("PAUSE");	
  return 0;
}
