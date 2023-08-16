#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// suppport +,-,*,/,^ operation
int main(int argc, char *argv[])
{
  float value1;
  float value2;
  char operator;
  float result;

  // get input
  printf("Enter calculation (example: 2+1):\n\n");
  scanf("%f %c %f", &value1, &operator, & value2);

  
  switch(operator)
    {
        case '+': 
            result = value1+value2;
            printf("%.9g%c%.9g =  %.6g\n\n",value1,operator, value2, result);
            break;
        case '-': 
            result = value1-value2;
            printf("%.9g%c%.9g =  %.6g\n\n",value1,operator, value2, result);
            break;
        case '*': 
            result = value1*value2;
               printf("%.9g%c%.9g =  %.6g\n\n",value1,operator, value2, result);
            break;
        case '/':
            if (value2==0){
                printf("You enter wrong operation statment: cannot divided by zero.\n");                
            }
            else
            {
                result = value1/value2;
                printf("%.9g%c%.9g =  %.6g\n\n",value1,operator, value2, result);                
             }
             break;
        case '^': 
            result = pow(value1,value2);
               printf("%.9g%c%.9g =  %.6g\n\n",value1,operator, value2, result);
            break;

        default: 
            printf("You enter wrong operation statment.\n");
     }

     
      

  return 0;
}