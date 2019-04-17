#include <iostream>
using namespace std;

double* giveMemoryToArr(double* startPtr, int size);
void fill(double* ptrArr, int size);
void display(double* ptrArr, int size);
double* freeMemory(double* ptrArr);

int main()
{
 double* pArrForFill = 0;
 char userAnswer = 0;

 do
 {
     int size = 0;
     cout << "Size of array: ";
     cin >> size;

     pArrForFill = giveMemoryToArr(pArrForFill, size);
     fill(pArrForFill, size);
     display(pArrForFill, size);
     pArrForFill = freeMemory(pArrForFill);

     cout << "\nContinue (1). Exit (0): ";
     cin >> userAnswer;
 } while (userAnswer != '0');

 return 0;
}

double* giveMemoryToArr(double* ptrArr, int size)
{
     ptrArr = new double[size];
     return ptrArr;
}
void fill(double* ptrArr, int size)
{
     for (int i = 0; i < size; i++)
     {
        ptrArr[i] = (i + 1) * 2;
     }
}
void display(double* ptrArr, int size)
{
     for (int i = 0; i < size; i++)
     {
        cout << ptrArr[i] << "  ";
     }
     cout << endl;
}
double*  freeMemory(double* ptrArr)
{
     delete[] ptrArr;
     ptrArr = 0;

     return ptrArr;
}
