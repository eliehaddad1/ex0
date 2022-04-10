//
//  main.c
//  mtm_tot
//
//  Created by Elie Haddad on 29/03/2022.
//

#include <stdio.h>
#include <stdlib.h>
int main() {
    
    printf("Enter size of input:\n");
    int num;
    scanf("%d",&num);
    if(num<=0)
    {
        printf("Invalid size\n");
        return 0;
    }
    printf("Enter numbers:\n");
    
    int *numbers=malloc(sizeof(int)*num);
    if(!numbers)
    {
        printf("malloc failed\n");
        return 0;
    }
    for (int i=0;i<num;i++)
    {
        if(scanf("%d",numbers+i)==EOF)
        {
            printf("Invalid number\n");
            return 0 ;
        }
    }
        int counter=0;
        for (int i=0;i<num;i++)
        {
            if(numbers[i]<0)
                continue;
            int temp=numbers[i], temp_counter=0;
            
            while (temp!= 1 && !(temp%2))
                {
                    if (temp%2 != 0)
                        break;
                    temp_counter++;
                    temp= temp/2;
                }
            if(temp<=1)
            {
                counter+=temp_counter;
            printf("The number %d is a power of 2: %d = 2^%d\n",numbers[i] ,numbers[i] ,temp_counter);
            }
            
        }
        printf("Total exponent sum is %d\n",counter);
    
    free(numbers);
    
    return 0;
}
