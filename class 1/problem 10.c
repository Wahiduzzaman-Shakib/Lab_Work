#include<stdio.h>
int main()
{
	double men_population,women_population,total_literacy,men_literacy,women_literacy,
	illiterate_men,illiterate_women;
	
	double population=80000;
	
	men_population=population*0.52;
	women_population=population-men_population;
	total_literacy=population*0.48;
	men_literacy=population*0.35;
	women_literacy=total_literacy-men_literacy;
	illiterate_men=	men_population-men_literacy;
	illiterate_women=women_population-women_literacy;
	printf("Illeterate Man=%.2lf\nIlleterate Women=%.2lf",illiterate_men,illiterate_women);
	
	return 0;
	
}
