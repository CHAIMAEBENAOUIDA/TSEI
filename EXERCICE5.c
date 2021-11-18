#include<stdio.h>
int main()
{int argent;
int b_100,b_50,b_10,b_5,b_1;
int reste;
printf("donner la sommee d argent\n");
scanf("%d",&argent);
b_100=argent/100;
reste=argent%100;
b_50=reste/50;
reste=reste%50;
b_10=reste/10;
reste=reste%10;
b_5=reste/5;
reste=reste%5;
b_1=reste;

printf("le repartition des billets est les suivantes %d de 100dh ,%d de 50dh,%d de 10dh ,%d de 5dh et %d de 1dh ",b_100,b_50,b_10,b_5,b_1);
}



