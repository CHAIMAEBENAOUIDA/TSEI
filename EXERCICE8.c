#include<stdio.h>
main()
{int N;float puh ;float ttc ;float tva; float remise; float net;
printf("entrer le prix unitaire hors taxe");
scanf("%f",&puh);
printf("entrer le nombre des exemplaire");
scanf("%d",&N);
tva=(puh*20)/100;
ttc=N*(puh+tva);
if(ttc>1000)
    remise=(ttc*5)/100;
else remise=0;
net=ttc-remise;
printf("ttc est %f",ttc);
printf("remise est %f",remise);
printf("net � payer est %f",net);

}
