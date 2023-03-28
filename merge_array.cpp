
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
//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Define array length
int len = 10;

//Define pointer array
int *a;

//Define dynamic array
a = new int[len];

//This command for generate number with random
srand((unsigned)time(NULL));

//Get array value with randome value
for (int i=0; i<len; ++i)
{

a[i] = rand()%30; //30 for get number in poriod of 0 ~ 30

}


getch();
}
//function variable
//--------------------------
//functions