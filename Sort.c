
#include <stdio.h>
#include "quicksort_algo.c"


int countlines()
{
    FILE *fp;
    int count = 0;  // Line counter (result)
    char c;  // To store a character read from file
    // Open the file
    fp = fopen("data.txt", "r");
    // Check if file exists
    if (fp == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;
        fclose(fp);
        return count;
}

int main(void)
{
    FILE *fp;
    int line = 0;
    line = countlines();
    int arr[line];
    fp = fopen("data.txt", "r");

    //read file into array
    int i;
    for (i = 0; i < line; i++)
    {
        fscanf(fp, "%d", &arr[i]);
    }
    for (i = 0; i < line; i++)
    {
        printf("Number is: %d\n\n", arr[i]);
    }

    quickSort(arr , 0, line-1);

    fp = fopen("data_sorted.txt","w");
    for(int j = 0 ; j < line ; j++)
    {
        //printf("%d ",arr[i]);
        fprintf(fp,"%d\n",arr[j]);
    }
    fclose(fp);
    return 0;

}