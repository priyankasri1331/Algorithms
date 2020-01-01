#include <stdio.h>

int main()
{
    int arr_size;
    int rot_num;
    printf("Type array size:");
    scanf("%d",&arr_size);//Input array size

    printf("\nType number of rotations:");
    scanf("%d",&rot_num);//Input number of rotations

    if (rot_num > arr_size)
        rot_num = rot_num % arr_size;//Change number of rotations if greater than array size

    int arr[arr_size];
    printf("\nType the array:");
    for (int i=0;i<arr_size;i++)//Input the array
        scanf("%d",&arr[i]);

    int temp_arr[arr_size];//declare temporary array

    for (int i=0;i<(arr_size-rot_num);i++)
        temp_arr[i] = arr[i+rot_num];//Copy starting elements upto d to temp_array

    for (int i=arr_size-rot_num,j=0;j<rot_num;i++,j++)
        temp_arr[i] = arr[j];//Copy the last part to front of temp_array
    printf("\n");

    for (int i=0;i<arr_size;i++)
        printf(" %d",temp_arr[i]);//Print output

	return 0;
}
