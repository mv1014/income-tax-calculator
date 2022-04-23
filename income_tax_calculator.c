#include <stdio.h>

int main()
{
    float originalincome, income1, income2, income3, income4, tax1, tax2, tax3, tax4, tax5, totaltax, incomeinhand, savings, savingsincome;
    printf("Enter your annual income \n");
    scanf("%f", &originalincome);
    printf("Enter your savings amount\n");
    scanf("%f", &savings);

    if (originalincome > 0 && originalincome <= 250000)
    {
        savingsincome = originalincome - savings;
        tax1 = 250000 * 0;
        totaltax = tax1;
        incomeinhand = savingsincome - totaltax;
        printf("Your income tax is Rupees %f and your income in hand is Rupees %f", totaltax, incomeinhand);
    }
    else if (originalincome > 250000 && originalincome <= 500000)
    {
        savingsincome = originalincome - savings;
        tax1 = 250000 * 0;
        income1 = savingsincome - 250000;
        tax2 = income1 * 0.05;
        totaltax = tax1 + tax2;
        incomeinhand = savingsincome - totaltax;
        printf("Your income tax is Rupees %f and your income in hand is Rupees %f", totaltax, incomeinhand);
    }
    else if (originalincome > 500000 && originalincome <= 1000000)
    {
        savingsincome = originalincome - savings;
        tax1 = 250000 * 0;
        income1 = savingsincome - 250000;
        tax2 = 250000 * 0.05;
        income2 = income1 - 250000;
        tax3 = income2 * 0.2;
        totaltax = tax1 + tax2 + tax3;
        incomeinhand = savingsincome - totaltax;
        printf("Your income tax is Rupees %f and your income in hand is Rupees %f", totaltax, incomeinhand);
    }
    // else if (savings <= 150000)
    // {
    //     savingsincome = originalincome - savingsincome;
    // }
    else
    {
        savingsincome = originalincome - savings;
        tax1 = 250000 * 0;
        income1 = savingsincome - 250000;
        tax2 = 250000 * 0.05;
        income2 = income1 - 250000;
        tax3 = 500000 * 0.2;
        income3 = income2 - 500000;
        tax4 = income3 * 0.3;
        totaltax = tax1 + tax2 + tax3 + tax4;
        incomeinhand = savingsincome - totaltax;
        printf("Your income tax is Rupees %f and your income in hand is Rupees %f", totaltax, incomeinhand);
    }
    return 0;
}