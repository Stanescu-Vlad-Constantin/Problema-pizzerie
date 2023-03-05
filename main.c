#include <string.h>
#include <stdio.h>
#include <malloc.h>

int nr;
struct Pizza{
    char tip[21];
    char dim[6];
    int blat;
};

void readPizza(struct Pizza* pizza)
{
    scanf("%s %s %d",pizza->tip,pizza->dim,&pizza->blat);
}

struct Pizza* readAllPizza(int no_of_pizzas)
{
    struct Pizza *pizza;
    pizza=(struct Pizza*)malloc(no_of_pizzas*sizeof(struct Pizza));
    int i;
    for(i=0;i<no_of_pizzas;i++)
        readPizza(pizza+i);
    return pizza;
}

double calc_price(struct Pizza* pizza)
{
    int i;
    double suma=0;
    for(i=0;i<nr;i++)
    {
        if((pizza+i)->dim[1]=='i')
            suma=suma+15;
        else if(strcmp((pizza+i)->dim,"medie")==0)
            suma=suma+20;
        else if(strcmp((pizza+i)->dim,"mare")==0)
            suma=suma+35;
        else if(strcmp((pizza+i)->dim,"XXL")==0)
            suma=suma+40;

        if((pizza+i)->blat==1)
            suma=suma+15;
        else if((pizza+i)->blat==2)
            suma=suma+17;
        else if((pizza+i)->blat==3)
            suma=suma+18;

    }
    suma=1.1*suma;
    return suma;

}

int main()
{
    struct Pizza *pizza;
    double price;
    scanf("%d",&nr);
    pizza=readAllPizza(nr);
    price=calc_price(pizza);
    printf("%.2f",price);
    return 0;
}
