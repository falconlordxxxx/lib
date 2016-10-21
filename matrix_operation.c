# include "matrix.h"
# include <stdio.h>

int check_like_matrix(matrix *a,matrix *b)
{
    if (((*a).row==(*b).row) && ((*a).column==(*b).column))
        return 1;
    else
        return 0;
}

matrix add_matrix(matrix *a,matrix *b)
{
    int like_matrix=check_like_matrix(a,b);

    if (!(like_matrix))
    {
        printf ("Error! matrix are not of same size!");
    }

    else
    {

        matrix sum;

        sum.row=(*a).row;
        sum.column=(*a).column;

        malloc_matrix(& sum);

        for (int i=0; i<(*a).row; i++)
        {
            for (int j=0; j<(*b).row; j++)
            {
                sum.point[i][j]=(*a).point[i][j]+(*b).point[i][j];
            }
        }
        return sum;
    }
   
}



