#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int greater(int operand1, int operand2)
{
    if(operand1>operand2)
        return operand1;
    else
        return operand2;
}

int lesser(int operand1, int operand2)
{
    if(operand1<operand2)
        return operand1;
    else
        return operand2;
}
int andgate(int operand1, int operand2)
{
if(operand1 < 0 || operand2 < 0)
{
return -1;
}
else if (operand1 > 1 || operand2 > 1)
{
return -1;
}
else
{
if(operand1==0 && operand2==0)
{
return 0;
}
else if(operand1== 0 && operand2==1)
{
return 0;
}
else if(operand1==1 && operand2==0)
{
return 0;
}
else if(operand1==1 && operand2==1)
{
return 1;
}
}
}

int orgate(int operand1, int operand2)
{
if(operand1 < 0 || operand2 < 0)
{
return -1;
}
else if (operand1 > 1 || operand2 > 1)
{
return -1;
}
else
{
if(operand1==0 && operand2==0)
{
return 0;
}
else if(operand1== 0 && operand2==1)
{
return 1;
}
else if(operand1==1 && operand2==0)
{
return 1;
}
else if(operand1==1 && operand2==1)
{
return 1;
}
}
}

int nandgate(int operand1, int operand2)
{
if(operand1 < 0 || operand2 < 0)
{
return -1;
}
else if (operand1 > 1 || operand2 > 1)
{
return -1;
}
else
{
if(operand1==0 && operand2==0)
{
return 1;
}
else if(operand1== 0 && operand2==1)
{
return 1;
}
else if(operand1==1 && operand2==0)
{
return 1;
}
else if(operand1==1 && operand2==1)
{
return 0;
}
}
}
