#include <stdio.h>



void printErrorMsg(){
    printf("Please enter the correct choice. \n");
}

void FahreinheitToCelcius(){
    float input;
    float output;
    printf("Please enter the Fahrenheit degree: \n");
    scanf("%f",&input);
    output =  ((input-32) * (5.0/9.0));
    printf("Celcius: %f",output);
          
 }

 void CelciusToFahreinheit(){
    float input;
    float output;
    printf("Please enter the Celcius degree: \n");
    scanf("%f",&input);
    output = ((9.0/5.0)*input + 32);
    printf("Fahrenheit: %f",output);

}

void convertTemperature(){
    int choice;
    printf("Enter 1 for Fahrenheit to Celsius. \n");
    printf("Enter 2 for Celsius to Fahrenheit. \n");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
            FahreinheitToCelcius();                
            break;
        case 2:
            CelciusToFahreinheit();             
            break;
        default:
            printErrorMsg();
    }
}




void UsdToEuro(){
    float input;
    float output;
    printf("Please enter the USD amount: \n");
    scanf("%f",&input);
    output = input * 0.87;
    printf("Euro: %.2f",output); // %.2f = rounds the float to only 2 decimal places;
 
}

void UsdToJPY(){
    float input;
    float output;
    printf("Please enter the USD amount: \n");
    scanf("%f",&input);
    output= input * 111.09;
    printf("JPY: %.2f",output);
 
} 

void UsdToRMB(){
    float input;
    float output;
    printf("Please enter the USD amount: \n");
    scanf("%f",&input);
    output = input * 6.82;
    printf("RMB: %.2f",output);
  
}

void convertCurrency()
 {
    int choice;
    printf("Enter 1 for USD to Euro. \n");
    printf("Enter 2 for USD to JPY. \n");
    printf("Enter 3 for USD to RMB. \n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            UsdToEuro();            
            break;
        case 2:
            UsdToJPY();  
            break;
        case 3:
            UsdToRMB();  
            break;             
        default:
            printErrorMsg();
        } 
 
 }

 void ounceToPound(){
    float input;
    float output;    
    printf("Please enter the ounce amount: \n");
    scanf("%f",&input);
    output= input * 0.0625;
    printf("Pounds: %.2f",output);

 }
void poundToOunce(){
    float input;
    float output;    
    printf("Please enter the gram amount: \n");
    scanf("%f",&input);
    output = input* 0.00220462;
    printf("Pounds: %.2f",output);
 }

void convertMass(){
    int choice;
    printf("Enter 1 for ounces to pounds. \n");
    printf("Enter 2 for gram to pounds. \n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            ounceToPound();    
            break;      
        case 2:
            poundToOunce();   
            break;        
        default:
            printErrorMsg();
    }
 
}
        
     
int main() {
  char choice;
  
  printf("Welcome to Unit Converter! \n");
  printf("Please choose conversation you want: Temperature(T),Currency(C),Mass(M) \n"); 
  printf("Enter the letter you want to convert.\n");
  scanf("%c",&choice);
  
  switch(choice){
    case 'T':   
        convertTemperature();     
        break;   
    case 'C' :  
        convertCurrency();      
        break;
    case 'M':  
        convertMass(); 
        break;
    default:   
        printErrorMsg();
  } 
  return 0;
}             
               
               