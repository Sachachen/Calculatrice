#include <stdio.h>
#include <stdlib.h>
int
int main()
{
    int a,b;
    char lettre;
    printf("Ce programme est une calculatrice\n");
    printf("Saisir deux nombres\n");
    scanf("%d%d",&a,&b);
    printf("Saisir le mode operatoire + ou - ou * ou /.\n ");
    fflush(stdin);
    scanf("%c",&lettre);
    switch(lettre)
    {
    case'+':
        printf("%d+%d=%d",a,b,a+b);
        break;

    case'-':
        printf("%d-%d = %d",a,b,a-b);
        break;

    case'*':
        printf("%d*%d=%d",a,b,a*b);
        break;

    case'/':
        if(b==0)
            printf("Impossible");
        printf("%d/%d=%d",a,b,a/b);
        break;

    default:
        printf("Il y a une erreur, veuillez saisir le mode operatoire + ou - ou * ou /");
    }

    return 0;
}
