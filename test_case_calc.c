#include<stdio.h>
#include<math.h>
#include<assert.h>
#include "testing.h"
void test_calc()
{
    assert (calculator_operations('+',2 ,3 )== 5);
    assert (calculator_operations('-',2 ,3 )== -1);
    assert (calculator_operations('/',2 ,3 )== 0);
    assert (calculator_operations('*',2 ,3 )== 6);
    assert (calculator_operations('+',2 ,3 )== 5);
    assert (calculator_operations('/',2 ,3 )== 0);
    printf("ok tested :calculator\n");
}

void test_fact()
{
    assert (fact(3)== 6);
    assert (fact(0)== 1);
    printf("ok tested :factorial function\n");
}

int main()
{
    test_calc();
    test_fact();
}
