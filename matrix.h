//just a test matrix made for practice
# ifndef MATRIX_FILE_OPENED
# define MATRIX_FILE_OPENED

typedef struct
{
    int row,column;
    int **point;
}matrix;

/********************************* 
 * to make pointer on above struct 
 * point to dynamically created 
 * 2 dimensional list
*/
void malloc_matrix   (matrix *a);
/******************************/

/******************************
 * to free memory pointed by 
 * pointer on matrix struct
*****************************/
void free_matrix     (matrix *a);
/******************************/

/*****************************
 * printing matrix
******************************/
void print_matrix    (matrix *a);
/******************************/

/******************************
 *  for scanning elements 
 *  of matrix
********************************/

void scan_matrix     (matrix *a);// will require freshly declared matrix as input

/*******************************/

/********************************
 * matrix operations *
 * no side effects
 * *****************************/

matrix add_matrix(matrix *a,matrix *b);
matrix subtract_matrix(matrix *a,matrix *b);
int check_like_matrix(matrix *a,matrix *b);

/*********************************/

#endif
