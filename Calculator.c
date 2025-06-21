#include<stdio.h>


    int main(){

        int choice;
        float num1,num2,result;


        while(1){
            printf("\n===SIMPLE CALCULATOR===\n");
            printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);

            if(choice==5)
            {
                printf("Exiting Calculator. Thanks");
                break;
            }

             printf("Enter two numbers: ");
             scanf("%f %f", &num1, &num2);

            switch (choice)
            {
            case 1:
             result = num1 + num2;
             printf("Result = %.2f\n", result);
            break;
            
            case 2:
             result = num1 - num2;
             printf("Result = %.2f\n", result);
            break;

            case 3:
             result = num1 * num2;
             printf("Result = %.2f\n", result);
            break;

            case 4:
             if (num2 != 0)
               result = num1 / num2;
             else {
                printf("Error! Division by zero.\n");
                continue;
            }
                printf("Result = %.2f\n", result);
             break;
            
            default:
                printf("Invalid choice. Please try again.\n");
            }

        }

    }
