
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

int *merge(int v1[], int len1, int v2[], int len2);

//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Define array length
int len1 = 5;

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
cout<<setw(12)<<a[i];
}

//sepwrator

cout<<endl<<endl<<"--------------------------------------"<<endl<<endl;

//selection sort

selection_sort(a , len1);

//show array after sort 

cout<<"Show array1 after sort : "<<endl;

for(int i = 0; i<len1; ++i)
{

cout<<setw(12)<<a[i];

}


//Create array2 and sort

//sepwrator

cout<<endl<<endl<<"--------------------------------------"<<endl<<endl;
//sepwrator

cout<<endl<<endl<<"--------------------------------------"<<endl<<endl;

//Define array2 length
int len2 = 3;

//Define pointer array
int *b;

//Define dynamic array
b = new int[len2];

//This command for generate number with random
srand((unsigned)time(NULL));

//Get array2 value with randome value
for (int i=0; i<len2; ++i)
{

b[i] = rand()%50+1; //30 for get number in poriod of 0 ~ 30

}

//show array2 Before sort 

cout<<"Show array2 Before sort : "<<endl;

for(int i = 0; i<len2; ++i)
{

cout<<setw(12)<<b[i];

}

//sepwrator

cout<<endl<<endl<<"--------------------------------------"<<endl<<endl;

//selection sort

selection_sort(b , len2);

//show array after sort 

cout<<"Show array2 after sort : "<<endl;

for(int i = 0; i<len2; ++i)
{

cout<<setw(12)<<b[i];

}

//---------------------------------

//create array3 that merge to array1 and array2

//sepwrator

cout<<endl<<endl<<"--------------------------------------"<<endl<<endl;
//sepwrator

cout<<endl<<endl<<"--------------------------------------"<<endl<<endl;

//Declare pointer merge array and new length of merge array

int *c , len3;

//Create new merge array
c = merge(a , len1 , b , len2);

//Define len3

len3 = len1 + len2;

cout<<"Merged array :"<<endl;

for(int i = 0; i<len3; ++i)
{

cout<<setw(12)<<c[i];

}

cout<<endl<<endl;

delete []a;
delete []b;
delete []c;






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

//Create function for merge arrays

int *merge(int v1[], int len1, int v2[], int len2)
{

//Create space legth of len1 & len2

int *a;
a = new int[len1 + len2];

//variable i container len1
int i = 0;

//variable j container len2
int j = 0;

//variable k container len1+len2

int k = 0;

for( ;i<len1 && j<len2 ; ++k) 
{
if (v1[i] <= v2[j])
{
    a[k] = v1[i++];
    
}

else

{

    a[k] = v2[j++];
    
}

}


//copy the rest of v1 or v2 to merge array

if(i < len1)
{

while( i < len1 )
{
    a[k++] = v1[i++];   
}
}
else
{
while(j < len2)
a[k++] = v2[j++];
}

return a;

}



