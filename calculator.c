
#include "testing.h"


int calculator_operations(char oprn,int num1,int num2)
{
        int res;
        switch(oprn)
        {
            case '+':res = addition(num1,num2);
                      break;

            case '-': res = subtraction(num1,num2);
                      break;

            case '*': res = multiplication(num1,num2);
                      break;

            case '/': res = division(num1,num2);
                      break;

            default :printf("\n**********You have entered unavailable option");
            break;
        }
return res;
}

int addition(int num1,int num2)
{
    int sum;
    sum = num1 + num2;
    printf("%d + %d  = %d \n",num1,num2,sum);
    return sum;
}

int subtraction(int num1,int num2)
{
    int diffe;
    diffe = num1 - num2;
    printf("%d - %d = %d \n",num1,num2,diffe);
    return diffe;
}

int multiplication(int num1,int num2)
{
    int prod;
    prod = num1 * num2;
    printf("%d * %d  = %d \n",num1,num2,prod);
    return prod;
}

int division(int num1,int num2)
{
    int div;
    div = num1/num2;
    printf("%d / %d = %d \n",num1,num2,div);
    return div;
}

