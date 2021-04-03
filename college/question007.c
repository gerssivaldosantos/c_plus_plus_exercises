#include <stdio.h>;
main(){
    int days, months, years;

    printf("Whats are age you in days ? :");scanf("%d",&days);

    years = days / 365; 
    
    months = (days % 365) / 30;
    
    days = days - (years * 365) - (months *30);

    printf("You have %d years, %d, months, and %d days",years,months,days);
    
}