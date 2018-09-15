#include <stdio.h>
#include <stdlib.h>


/*
    This program is a proof that when you pass an array as an argument to
    another function then whatever dimension the actual array has, it is
    always treated as a 1D-array inside the function
*/

// displayDetails displays the value stored in the variables
int displayDetails(int *p){
    printf("\n\nDETAILS of passed array -->");
    printf("\nValue of p               : %d", p);
    printf("\nValue of *p              : %d", *p);
    printf("\nValue of &p              : %d", &p);
    printf("\nValue of p[0]            : %d", p[0]);
    printf("\nValue of p[1]            : %d", p[1]);
    // INVALID OPERATION
    //printf("\nValue of *p[1]           : %d", *p[1]);
    printf("\nValue of *p[1]           : INVALID OPERATION :Error: lvalue required as unary '&' operand");
    printf("\nValue of p + 1           : %d", p + 1);
    printf("\nValue of &(p + 1)        : INVALID OPERATION :Error: lvalue required as unary '&' operand");
    printf("\nValue of *(p + 1)        : %d", *(p + 1));
    printf("\nValue of sizeof(p)       : %d", sizeof(p));
    printf("\nValue of sizeof(p + 1)   : %d", sizeof(p + 1));
    printf("\nValue of sizeof(*p)      : %d", sizeof(*p));
    printf("\nValue of sizeof *(p + 1) : %d", sizeof *(p + 1));
    printf("\nValue of sizeof p[0]     : %d", sizeof (p[0]));
    return 0;
}

// Display prints the array in 2d form
int display1(int *p,int rows,int columns){
    printf("\n Printing 2d array type 1\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf(" %d",*(p + i * columns + j));
        }
        printf("\n");
    }
    return 0;
}

//display2 printts the array in 1D forn
// NOTICE THE ARRAY INDEX NUMBER

int display2(int *p,int sum){
    printf("\n Printing 2d array as 1d array -->\n");
    for(int i = 0; i < sum; i++){
        printf(" %d",p[i]);
    }
    return 0;
}

int display3(int p[][2],int rows, int columns){
    printf("\n Printing 2d array type 2 -->\n");
    printf("sizeof p : %d\n", sizeof(p));
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf(" %d",p[i][j]);
        }
        printf("\n");
    }
}

int display4(int (*p)[2], int rows, int columns){
    int *q;
    printf("\n Printing 2d array type 3 -->\n");
    for(int i = 0; i < 4; i++){
        q = p + i;
        for(int j = 0; j < 4; j++){
            printf(" %d", *(q + j));
        }
        printf("\n");
    }


}

int main()
{
    int arr[][2] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int brr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int rows = 0;
    int columns = 0;
    int nelements = 0;

    nelements = sizeof(arr) / sizeof (arr[0][0]);
    rows = sizeof(arr) / sizeof(arr[0]);
    columns = nelements / rows;

    printf("Concerned Array :\n\n");

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n\nDETAILS of the ACTUAL 2d array -->");
    printf("\nNumber of rows             : %d",rows);
    printf("\nNumber of columns          : %d",columns);
    printf("\nNumber of elements         : %d\n",nelements);

    printf("\nValue of arr               : %d", arr);
    printf("\nValue of *arr              : %d", *arr);
    printf("\nValue of &arr              : %d", &arr);
    printf("\nValue of arr[0]            : %d", arr[0]);
    printf("\nValue of arr[1]            : %d", arr[1]);
    printf("\nValue of *arr[1]           : %d", *arr[1]);
    printf("\nValue of arr + 1           : %d", arr + 1);
    printf("\nValue of &(arr + 1)        : INVALID OPERATION :Error: lvalue required as unary '&' operand");
    printf("\nValue of *(arr + 1)        : %d", *(arr + 1));
    printf("\nValue of sizeof(arr)       : %d", sizeof(arr));
    printf("\nValue of sizeof(arr + 1)   : %d", sizeof(arr + 1));
    printf("\nValue of sizeof(*arr)      : %d", sizeof(*arr));
    printf("\nValue of sizeof *(arr + 1) : %d", sizeof *(arr + 1));
    printf("\nValue of sizeof arr[0]     : %d", sizeof (arr[0]));
    printf("\nValue of sizeof arr[0][0]  : %d", sizeof (arr[0]));

    displayDetails(arr);
    display1(arr, rows, columns);
    //printf("\n\n");
    display2(arr, nelements);
    display3(arr, rows, columns);
    display4(arr, rows, columns);
    /*
    disply4() call is concrete proof that 1D array can be passed
    to a function that demands 2D array as argument
    */
    display4(brr,4,4);
    return 0;
}
