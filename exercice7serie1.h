int EXERCICE7()
{float a ;float b ;float N2;float c; float sup ;
printf("entrer 3 nombres");
scanf("%f%f%f",&a,&b,&c);
sup=a;
if(sup<b)
    sup=b;
 if (sup<c)
    sup=c;
printf("le plus grand nombre est %f:\n",sup);
}
