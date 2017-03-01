#include <stdio.h>
#include <conio.h>
void main()
{
	float C,F,K,atm,rtut,humidity;
char mode,si;
printf("Enter t,P or H: ");
	scanf_s("%c",&mode);
	if(mode=='t')
	{
		printf("Vvedite yedinicu izmereniya temperaturi (C,F,K): ");
		scanf("\n%c", &si);
	switch(si)
	{
	case 'C': {printf("\nVvedite temperaturu v celsiyax: "); 
		scanf_s("%f",&C);
		printf("F=20*%g/11+32=%gF",C,20*C/11+32);
		printf("\nK=%g+273=%gK",C,C+273);break;}
	case 'F':{printf("\nVvedite temperaturu v F: ");
		scanf_s("%f",&F);
		printf("C=11*(%g-32)/20=%gC",F,11*(F-32)/20);
		printf("\nK=11*(%g-32)/20+273=%gK",F,11*(F-32)/20+273); break;}
	case 'K': {printf("\nVvedite temperaturu v K: ");
		scanf_s("%f", &K);
		printf("C=%g-273=%gC",K,K-273);
		printf("\nF=20*(%g-273)/11+32=%gF",K,20*(K-273)/11+32); break;}
	default: printf("ERROR!");
	} 	}
	else if(mode=='P')
	{
		printf("Vvdeite edinicu izmereniya davleniya (A, R): ");
		scanf("\n%c",&si);
	switch(si)
	{
	case 'A': {printf("Vvedite davleniye v atm: ");
		scanf("%f",&atm);
		printf("Hg=%g*760=%g mm.rtut.st.",atm,atm*760);break;}
	case 'R': {printf("Vvedite davleniye v mm.rtutnoqo stolba: ");
		scanf("%f", &rtut);
		printf("%g mm.rtut.st.=%g/760=%g atm", rtut,rtut,rtut/760); break;}
	}}
	if(mode=='H')
	{
	printf("Vvdeite otnositelnuyu vlajnost: ");
	scanf("%f",&humidity);
	printf("otnositelynaya vlajnost ravna=%g percent",humidity);
	}
			  getch();
}