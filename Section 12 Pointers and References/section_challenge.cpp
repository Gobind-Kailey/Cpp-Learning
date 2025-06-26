#include <iostream>
#include <cstring> 

using namespace std;


int *apply_all(int array1[], int size1, int array2[], int size2)
{
    int *result = new int[size1 * size2];
    int count = 0; 
    
    for(int i = 0; i<size2; i++)
        for(int j =0; j<size1; j++)
            {
                result[count] = array1[j] * array2[i]; 
                count++; 
            }
    return result; 
}


int main()
{
    int array1[] = {1,2,3,4,5}; 
    int array2[] = {10,20,30};

    int size1 = sizeof(array1) / sizeof(array1[0]); 
    int size2 = sizeof(array2) / sizeof(array2[0]); 
    // cout << sizeof(array1); // this will calcaulte the total size of the array, so 5x4 = 20 in this case. 

    int *results = apply_all(array1, size1, array2, size2); 
    int size_result = size1 * size2;
    for(int i=0; i< size_result; i++)
    {
        cout << results[i] << endl;
    }

    return 0; 
}
