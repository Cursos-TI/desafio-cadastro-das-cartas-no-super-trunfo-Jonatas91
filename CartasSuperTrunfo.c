#include <stdio.h>



int main() {
    
    char estado;
    char codigo[3];
    char cidade[10];
    int população;
    float area;
    float PIB;
    int turisticos;  


         printf("Digite o nome do Estado: \n");
             scanf("%d", &estado);
        printf("Digite o Código do Estado: \n");
            scanf("%s", &codigo);

printf("Nome do Estado: %d \n", &estado);
printf("Código do Estado: %s \n", &codigo);

    
   
    return 0;
}
