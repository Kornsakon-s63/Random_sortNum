
#include <stdio.h>
#include <stdlib.h>

int main () {
    int N ;
    
    FILE *fp;
    fp  = fopen ("data.txt", "w");
    
    printf("Enter N: ");
    scanf("%d",&N);
    
    srand (N);
    
    for(int i = 0; i<N; i++){
        fprintf(fp, " %d \n", rand() %1000 );
  }
    fclose(fp);
    return(0);
}