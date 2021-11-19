/******************************************************************************

*******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
void menu(void);
void Mision(void);
void Vision(void);
void Valores(void);
void Verdad(void);
void Bondad(void);
void Belleza(void);



int main(void)
{
    
    int opc;
    
    do{
        menu();
        scanf("%i",&opc);
        switch(opc)
        {
            case 1:
                Mision();
                break; 
                
            case 2:
                Vision();
                break;
                
            case 3:
                Valores();
                break;
                
            case 4:
                Verdad();
                break;
            case 5:
                Bondad();
                break;
            case 6:
                Belleza();
                break;
            
            default:
                printf("\nADIOS\n");
        }
        
    }while (opc>=1 && opc <7);
    
    return 0;

}


void menu (void)
{
    printf("\n1.Mision \n--------------------- \n2.Vision\n--------------------- \n3.Valores\n--------------------- \n4.Verdad\n--------------------- \n5.Bondad\n--------------------- \n6.Belleza\n---------------------");
    printf("\n7.SALIR\n---------------------");
    printf("\n");
    return;
    
}

void Mision(void)
{
    printf("\nEstas en la opcion 1. \n--------------\nMision\n");
    printf("\nSomos una Universidad que, dentro del espíritu de autonomía universitaria y libertad de cátedra, forma integralmente personas que trascienden con valores y  promueven  el  bienestar y progreso de la sociedad.");
    printf("\n");
}

void Vision(void)
{
    printf("\nEstas en la opcion 2. \n--------------\nVision\n");
    printf("\nSer referente por la formación integral de personas que trascienden con valores y promueven el bienestar y progreso de la sociedad. Nuestra calidad académica y continua innovación nos ubica como una de las mejores universidades de América Latina, además de ser reconocidos como un excelente lugar para trabajar.");
    printf("\n");
}

void Valores(void)
{
    printf("\nEstas en la opcion 3. \n--------------\nValores\n");
    printf("\nVirtudes o cualidades que caracterizan a una persona, una acción o un objeto que se consideran típicamente positivos o de gran importancia para un grupo social.");
    printf("\n");
}

void Verdad(void)
{
    printf("\nEstas en la opcion 4. \n-------------- \nVerdad\n");
    printf("\nAdecuación entre una proposición y el estado de cosas que expresa.");
    printf("\n");
}

void Bondad(void)
{
    printf("\nEstas en la opcion 5. \n--------------\nBondad\n");
    printf("\nInclinación a hacer el bien, comportamiento virtuoso.");
    printf("\n");
}

void Belleza(void)
{
    printf("\nEstas en la opcion 6. \n-------------- \nBelleza\n");
    printf("\nCualidad de una persona, animal o cosa capaz de provocar en quien los contempla o los escucha un placer sensorial, intelectual o espiritual.");
    printf("\n");
}