# include "matrix.h"
# include <stdio.h>


matrix subtract_matrix(matrix *a,matrix *b)
{
    int like_matrix=check_like_matrix(a,b);

    if (!(like_matrix))
    {
        printf ("Error! matrix are not of same size!");
    }

    else
    {

        matrix difference;

        difference.row=(*a).row;
        difference.column=(*a).column;

        malloc_matrix(& difference);

        for (int i=0; i<(*a).row; i++)
        {
            for (int j=0; j<(*b).row; j++)
            {
                difference.point[i][j]=(*a).point[i][j]-(*b).point[i][j];
            }
        }
        return difference; 
    }
    
}


