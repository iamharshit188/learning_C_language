
//Program to add n numbers by user to and print its sum and average

#include <stdio.h>

int main()
{
    int n, sum = 0;
    float average = 0;
    
    //input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    //input elements and calculate sum
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    
    //calculate average
    average = (float)sum / n;
    
    //output sum and average
    printf("The sum is: %d \n", sum);
    printf("The average is: %f \n", average);
    
    return 0;
}
