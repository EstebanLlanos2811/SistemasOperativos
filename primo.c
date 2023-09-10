// Esteban Llanos


#include <stdio.h>

int primo(int num)
{
    int primo = 0; 
    for (int i = 2; i < num; i++)
    {   
        if (num % i == 0)
        {   
            primo = 1;
        }
    }
    if (primo == 0)
    {
        printf("El numero es primo");
    }
    else
    {
        printf("El numero no es primo");   
    }
}

void main()
{
    int num;
    printf("Ingrese su numero: ");
    scanf("%d", &num);
    primo(num);
}