#include <stdio.h>
// Function prototype
void check_even(int arr[], int array_size);
void largest_element_find(int arr[], int array_size);
void samllest_element_find(int arr[], int array_size);
void sum_avg_find(int arr[], int array_size);
void linear_search(int arr[],int array_size);
void user_input()
{
    int array_size;

    printf("Enter Your Array Size: ");
    scanf("%d", &array_size);

    int arr[array_size];

    // Take array input
    for (int i = 0; i < array_size; i++)
    {
        printf("Enter the element at index [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Send array and size to check_even()
    check_even(arr, array_size);
    largest_element_find(arr, array_size);
    samllest_element_find(arr, array_size);
    sum_avg_find(arr, array_size);
    linear_search(arr,array_size);
}
// Function For Check Even And Odd
void check_even(int arr[], int array_size)
{
    for (int i = 0; i < array_size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d -> Even\n", arr[i]);
        }
        else
        {
            printf("%d -> Odd\n", arr[i]);
        }
    }
}
void largest_element_find(int arr[], int array_size)
{
    int max = arr[0];
    for (int i = 0; i < array_size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("The largest element in the array is: %d\n", max);
}
void samllest_element_find(int arr[], int array_size)
{
    int mini = arr[0];
    for (int i = 0; i < array_size; i++)
    {
        if (mini > arr[i])
        {
            mini = arr[i];
        }
    }
    printf("The Smallest element in the array is: %d\n", mini);
}
void sum_avg_find(int arr[], int array_size)
{
    //We Initialize As Sum = 0 To clear the buffer also same case for avg
    int sum = 0;
    float avg;
    for (int i = 0; i < array_size; i++)
    {
     
        sum+=arr[i];
       
    }
    avg=(float)sum/array_size;
    printf("The Sum Of The Elements Are :%d",sum,"\n");
    printf("The Average Of The Elements Are :%.2f",avg,"\n");
}
void linear_search(int arr[],int array_size)
{
    int target , flag=0;
    printf("\n Enter The Elements You Want to Found:--->");
    scanf("%d",&target);
    for (int i = 0; i < array_size; i++)
    {
     
        if (target == arr[i])
        {
            printf("We Found The Element At The Index %d",i," ",":)");
            flag++;
            break;
        }
       
    }
    
}
int main()
{
    user_input();

    return 0;
}
