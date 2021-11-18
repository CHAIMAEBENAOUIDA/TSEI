#include<stdio.h>
main()

{int q; float pht ; float tva;float ttc;
printf("entrer la quantité ");
scanf("%d",&q);
printf("entrer prix unitaire hors taxe");
scanf("%f",&pht);
tva=q*(pht*20)/100;
ttc=q*pht+tva;
printf("le prix final est %f",ttc);
}
