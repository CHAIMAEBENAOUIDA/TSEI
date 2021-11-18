#include<stdio.h>
main()
{float N1 ;float N2 ; float s ;
printf("entrer la première valeur");
scanf("%f",&N1);
printf("entrer la dexième valeur");
scanf("%f",&N2);
s=N1;
N1=N2;
N2=s;
printf("la première valeur est %f:\n",N1);
printf("la dexième valeur est %f:\n",N2);
}
