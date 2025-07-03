// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct mobile{
    int ram;
    char model[15];
    int price;
};

int main() {
     struct mobile m1;
    int ram, price;
    char model;
    
    printf("Enter the ram value:");
    scanf("%d", &m1.ram);
    printf("Enter the model:");
    scanf("%s", m1.model);
    printf("Enter the price");
    scanf("%d", &m1.price);
  
    
    printf("%d\n", m1.ram);
    printf("%s\n", m1.model);
    printf("%d", m1.price);

    return 0;
}