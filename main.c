#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eins, zwei, drei, vier, funf;

    printf(": ");
    scanf("%d %d %d %d %d", &eins, &zwei, &drei, &vier, &funf);

        if(eins > zwei && eins > drei && eins > vier && eins > funf){
            printf("minimum sum: %d\n", zwei+drei+vier+funf);
        }
        else if(zwei > eins && zwei > drei && zwei > vier && zwei > funf){
            printf("minimum sum: %d\n", eins+drei+vier+funf);
        }
        else if(drei > eins && drei > zwei && drei > vier && drei > funf){
            printf("minimum sum: %d\n", eins+zwei+vier+funf);
        }
        else if(vier > eins && vier > zwei && vier > drei && vier > funf){
            printf("minimum sum: %d\n", eins+drei+zwei+funf);
        }
        else if(funf > eins && funf > zwei && funf > drei && funf > vier){
            printf("minimum sum: %d\n", eins+drei+vier+zwei);
        }

        if(eins < zwei && eins < drei && eins < vier && eins < funf){
            printf("maximum sum: %d", zwei+drei+vier+funf);
        }
        else if(zwei < eins && zwei < drei && zwei < vier && zwei < funf){
            printf("maximum sum: %d", eins+drei+vier+funf);
        }
        else if(drei < eins && drei < zwei && drei < vier && drei < funf){
            printf("maximum sum: %d", eins+zwei+vier+funf);
        }
        else if(vier < eins && vier < zwei && vier < drei && vier < funf){
            printf("maximum sum: %d", eins+drei+zwei+funf);
        }
        else if(funf < eins && funf < zwei && funf < drei && funf < vier){
            printf("maximum sum: %d", eins+drei+vier+zwei);
        }

        if(eins == zwei && zwei == drei && drei == vier && vier == funf){
            printf("minimum sum: %d\n", eins+zwei+drei+vier);
            printf("maximum sum: %d", eins+zwei+drei+vier);
        }


    return 0;
}
