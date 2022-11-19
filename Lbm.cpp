#include<stdio.h>
#include<conio.h>
main(){
	float h,w,lbm,bmr;
	char  s ;
	printf("If your sex is men press M");
	printf("\nIf your sex is femel press F");
	printf("\nPlease enter your sex : ");
	scanf("%s",&s);
	printf("Please enter High(cm) : ");
	scanf("%f",&h);
	printf("Plesae enter Weight(kg) : ");
	scanf("%f",&w);
	
	if (s == 'M')
	{
		lbm = ((0.32810 * w) + (0.33929 * h)) - 29.5336;
		printf("LBM = %0.2f",lbm);
		bmr = 370 + (21.6 * lbm);
		printf("\nBMR = %0.2f Kcal/Day" ,bmr);
	}
	else if (s == 'F')
	{	
		lbm = ((0.29569 * w) + (0.42813 * h)) - 43.2933;
		printf("LBM = %0.2f",lbm);
		bmr = 370 + (21.6 * lbm);
		printf("\nBMR = %0.2f Kcal/Day" ,bmr);
	}
	
	return 0 ;
	}	
