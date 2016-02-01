//This is the line causing issue in the master branch

#include <stdio.h>

float add (float x, float y)
{
    return x + y;
}

float sub (float x, float y)
{
    return x - y;
}

float div (float x, float y)
{
    return x / y;
}

float mult (float x, float y)
{
    return x * y;
}


float rmainder(float x, float y)
{
    return x % y;
}

int main()
{
    float a, b, r;
    char op;
    do {
       printf("number  op  number?  ");
       scanf(" %f %c %f", &a, &op, &b);
       switch (op)
       {
           case '+' : r = add(a,b);
           	      break;
           case '-' : r = sub(a,b);
           	      break;
           case '/' : r = div(a,b);
           	      break;
           case '*' : r = mult(a,b);	
                      break;
           case 'm' : r = minimum(a,b);
           	      break;
           case 'M' : r = maximum(a,b);	
                      break;
           case 'q' : break;
           default  : op='?';
       }
       if (op=='?')
          printf("Unknown operator\n");
       else if (op=='q')
          printf("Bye\n");
       else
          printf("%f %c %f = %f\n", a, op, b, r);
    }
    while (op != 'q');
    
    return 0;
}
