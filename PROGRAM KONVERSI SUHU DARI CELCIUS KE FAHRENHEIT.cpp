#include <stdio.h>
#include <conio.h>

int main()
{
float c, r, f,k;
printf("				PROGRAM KONVERSI SUHU DARI CELCIUS KE :	   \n");
printf("					FAHRENHEIT | REAMUR				  \n");
printf("				BY ACHMAD DIDHANI NIM 311810294\n");
printf("			INSITUT PELITA BANGSA. TEKHNIK INFORMATIKA\n\n");
printf("masukan besar suhu dalam celcius : ");
scanf("%f", &c);
f=(c*1.8)+32;
printf("suhu dalam fahrenheit : %.2f fahrenheit\n", f);
r=(c*0.8);
printf("suhu dalam reamur : %.2f rheamur\n", r);
getch();

}
