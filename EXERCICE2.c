#include<stdio.h>
main()
{float N1 ;float N2 ; float s ;
printf("entrer la premi�re valeur");
scanf("%f",&N1);
printf("entrer la dexi�me valeur");
scanf("%f",&N2);
s=N1;
N1=N2;
N2=s;
printf("la premi�re valeur est %f:\n",N1);
printf("la dexi�me valeur est %f:\n",N2);
}
