# include "matrix.h"
# include <stdio.h>

void scan_matrix(matrix *a)
{   
    printf ("Enter order of matrix: >> ");
    scanf  ("%d*%d",&(*a).row,&(*a).column);
    
    malloc_matrix(a);
    printf ("Enter a elements of row seperated by spaces.\n");
    for (int i=0; i<(*a).row; i++)
    {
        printf ("row %d>>",i);
        for (int j=0; j<(*a).column;j++)
            scanf ("%d",&(*a).point[i][j]);
        
    }
}

void print_matrix(matrix *a)
{
    
    for (int i=0; i<(*a).row; i++)
    {
        printf ("[");

        for (int j=0; j<(*a).column; j++)
        {
            printf ("%d",(*a).point[i][j]);
            
            if (j<((*a).column-1)) printf (",");
        }

        printf ("] \n");
    }
}

