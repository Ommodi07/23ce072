#include<stdio.h>
void main()
{
    float hard,carb,tens,gr;
    printf("Enter the Hardness of steel : ");
    scanf("%f",&hard);
    printf("Enter the Carbon content in steel : ");
    scanf("%f",&carb);
    printf("Enter the  of steel : ");
    scanf("%f",&tens);

    if(hard>50)
    {
        switch(carb<0.7)
        {
        case 1:
            gr=(tens>5600)?10:9;
            break;
        case 0:
            gr=(tens>5600)?7:6;
            break;
        }
    }
    else
    {
        switch(carb<0.7)
        {
        case 1:
            gr=(tens>5600)?8:6;
            break;
        case 0:
            gr=5;
            break;
        }
    }
    printf("The grade is %0.2f  ",gr);
}
