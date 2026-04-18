/*
 : ARRAYS :
An array is a collection of similar elements.
Array allows a single variable to store multiple values.

SYNTAX :
   int marks[90];   // integer array
   char name[20];   // character array or string
   float percentile[90];     // float array

The values can now be assigned to make array like this:
     marks[0] = 33;
     marks[1] = 12;

It is very important to note that the array index starts with 0


ACCESSING ELEMENTS :
     scanf("%d", &marks[0]);  // input first value
     printf("%d", marks[0]);  // output first value of the array

INITIALIZATION OF AN ARRAY :
  int cgpa[3] = {9, 8, 8};  // arrays canbe initialized while declaration
  float marks[]= {33, 40};

ARRAYS IN MEMORY :
  int arr[3] = {1,2,3}  // 1 integer = 4 bytes
this will reserve 4X3 = 12 bytes in memory (4 bytes for each integer)

*/

/*
    : POINTER :
A pointer can be incremented to point to point to the next memory location of that type.

 int i = 32;
 int *a = &i;  // a = 87994
 a++;       // address of i or value of a = 87998

char a = 'A';  
char *b = &a;  // a = 87994
b++;          // now a = 87995

float i = 1.7;
float *a = &i; // now a = 87994
a++;           // now a = 87998 


........FOLLOWING OPERATIN CAN BE PERFORMED ON A POINTER.........
1. Addition of a number to a pointer.
2. Subtraction of a number from a pointer.
3. Subtraction of one pointer from another.
4. Comparison of two pointer variables.

If ptr points to index 0, ptr++ will point to index 1 & so on...

PASSING ARRAY TO FUNCTIONS :
 Array canbe passed to the functions like this:

      printArray(arr,n);    // func call
      void printArray(int *i, int n);  // func prototype
        //    or
      void printArray(int i[], int n);

MULTIDIMENSIONAL ARRAYS :
    int arr[3][2]={{1,4}            //2 dimensionals
                    {7,9}
                    {11,14}};        


A 2D array like a 1D array is sorted in contiguous memory blocks like this:

arr[0][0]  arr[0][1]   arr[1][0]   arr[1][1]   arr[2][0]   arr[2][1]
    1          4           7           9           11         22
*/