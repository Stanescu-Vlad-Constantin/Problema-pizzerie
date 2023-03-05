# Problema-pizzerie
La o pizzerie vin zilnic un număr n de persoane ce comandă o pizza astfel:

<tip_pizza> <dimensiune> <blat>

unde tip_pizza este un șir de caractere de maximum 20 de litere, dimensiune este un șir de caractere ce poate fi "mica", "medie", "mare", "XXL" iar blat este un număr între 1 și 3, reprezentând anumite blaturi de pizza.

Dându-se structura următoare:

struct Pizza{
    char tip[21];
    char dim[6];
    uint8_t blat;
};
Să se scrie următoarele funcții:

void readPizza(struct Pizza* pizza), care citește de la tastatură datele unei singure pizza;
struct Pizza* readAllPizza(uint32_t no_of_pizzas), care alocă memorie și citește de la tastatură cele n comenzi de pizza, utilizând funcția readPizza();
double calc_price(struct Pizza* pizza) care calculează prețul astfel:
pizza mica- 15 lei
pizza medie - 20 lei
pizza mare - 35 lei
pizza XXL- 40 lei
blat 1 - 15 lei
blat 2 - 17 lei
blat 3 - 18 lei

Cele două prețuri se adună și oferă prețul total al unei pizza. De asemenea, la fiecare pizza, ospătarul primeste 10% din prețul pizzei respective.

Să se calculeze suma de bani totală pe care o primește pizzeria împreună cu ospătarul.
