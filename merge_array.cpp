
#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h> //for srand() & rand function
#include <ctime>
#include <iomanip>

using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
/*branch name
*
*
*
*/
//prototype

void swap(int& a,int& b);

void selection_sort(int *x,int size);

//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Define array length
int len1 = 10;

//Define pointer array
int *a;

//Define dynamic array
a = new int[len1];

//This command for generate number with random
srand((unsigned)time(NULL));

//Get array value with randome value
for (int i=0; i<len1; ++i)
{

a[i] = rand()%30+1; //30 for get number in poriod of 0 ~ 30

}

//show array Before sort 

cout<<"Show array1 Before sort : "<<endl;

for(int i = 0; i<len1; ++i)
{
    cout<<"a["<<i<<"] = "<<a[i];
    cout<<endl;
}

//sepwrator

cout<<endl<<endl<<"--------------------------------------"<<endl<<endl;

//selection sort

selection_sort(a , len1);

//show array after sort 

cout<<"Show array1 after sort : "<<endl;

for(int i = 0; i<len1; ++i)
{
    cout<<"a["<<i<<"] = "<<a[i];
    cout<<endl;
}


//Create array2 and sort

getch();
}
//function variable
//--------------------------
//functions

//Create function for swap two values

void swap(int& a,int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

//Create function for selection sort

//*x is pointer to array
//size is length of array
void selection_sort(int *x,int size)
{

int *p , *m , *end;

//*m is minimum pointer in selection sort assumn m is the first of array is minimum

//*end address of last index of array

//end pointer to last index of array

end = x + size -1;

//loop for selection sort array

//this loop for level's number
for( ; x<end; ++x)
{
 
 m = x;

//this loop for find minimum number
 for(p = x+1; p <= end; ++p)
 {
    if (*p < *m)
    m = p;

 }
 //swap index
    swap(*x , *m);

}



}