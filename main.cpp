#include <stdio.h>
#include <conio.h>
#include <cstdlib>

int main()
{
    float dollar, euro, pounds, naira;
    int ch;
    do
    {
        printf("\n\n***** Welcome to RemyBoy's currency converter ***** ");
        printf("\n\nWhat currency conversion would u like to do?\nSelect from the option below: ");
        printf("\n\n 1. dollar -> euro ");
        printf("\n\n 2. euro -> dollar ");
        printf("\n\n 3. pounds -> euro ");
        printf("\n\n 4. euro -> pounds ");
        printf("\n\n 5. dollar -> pounds ");
        printf("\n\n 6. dollar -> naira ");
        printf("\n\n 7. euro -> naira ");
        printf("\n\n 8. naira -> dollar ");
        printf("\n\n 9. naira -> pounds ");
        printf("\n\n 10. naira -> euro ");
        printf("\n\n 11. pounds -> dollar ");
        printf("\n\n 12. pounds -> naira ");
        printf("\n\n 13. Exit ");
        printf("\n\nEnter your choice>: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1: printf("\nEnter the amount in dollar: ");
            scanf("%f", &dollar);
            euro = float(dollar * 0.945);
            printf("\nThe amount in euro is = %.2f", euro);
            break;

            case 2: printf("\nEnter the amount in euro: ");
            scanf("%f", &euro);
            dollar = float(euro * 1.06);
            printf("\nThe amount in dollar is = %.2f", dollar);
            break;

            case 3: printf("\nEnter the amount in pounds: ");
            scanf("%f", &pounds);
            euro = float(pounds * 1.13);
            printf("\nThe amount in euro is = %.2f", euro);
            break;

            case 4: printf("\nEnter the amount in euro: ");
            scanf("%f", &euro);
            pounds = float(euro * 0.89);
            printf("\nThe amount in pounds is = %.2f", pounds);
            break;

            case 5: printf("\nEnter the currency in dollar: ");
            scanf("%f", &dollar);
            pounds = float(dollar * 0.83);
            printf("\nThe amount in euro is = %.2f", pounds);
            break;

            case 6: printf("\nEnter the currency in dollar: ");
                scanf("%f", &dollar);
                naira = dollar * 730;
                printf("\nThe amount in naira is = %.2f", naira);
                break;

            case 7: printf("\nEnter the currency in euro: ");
                scanf("%f", &euro);
                naira = euro * 830;
                printf("\nThe amount in euro is = %.2f", naira);
                break;

            case 8: printf("\nEnter the currency in naira: ");
                scanf("%f", &naira);
                dollar = float(naira * 0.0022);
                printf("\nThe amount in dollar is = %.2f", dollar);
                break;

            case 9: printf("\nEnter the currency in naira: ");
                scanf("%f", &naira);
                pounds = float(naira * 0.0018);
                printf("\nThe amount in pounds is = %.2f", pounds);
                break;

            case 10: printf("\nEnter the currency in naira: ");
                scanf("%f", &naira);
                euro = float(naira * 0.002);
                printf("\nThe amount in euro is = %.2f", euro);
                break;

            case 11: printf("\nEnter the currency in pounds: ");
                scanf("%f", &pounds);
                dollar = float(pounds * 1.20);
                printf("\nThe amount in dollar12 is = %.2f", dollar);
                break;

            case 12: printf("\nEnter the currency in pounds: ");
                scanf("%f", &pounds);
                naira = pounds * 930;
                printf("\nThe amount in naira is = %.2f", naira);
                break;

            case 13:exit(0);

            default:
                printf("Please enter a valid number! ");
        }
    }
    while(ch<4);
    getch();
    return 0;
}
