/*
2015/Mar/9
Remove sored duplicated array
*/

#include <iostream>

using namespace std;

/*
    n how many number in the array
*/
int removeDuplicates(int A[], int n)
{
    //Base case
    //If n is 0
    if (n == 0){

        return 0;
    }

    //If n greater than 0
    int index = 0;
    for (int i = 0; i < n; i++){

        if (A[index] == A[i]){

            continue;

        }
        index++;
        A[index] = A[i];
    }

    return index+1;
}

int main()
{
    //Test case
    //Input

    int x[10] = {1, 1, 2 ,3 ,4};
    int n = 5;

    int z = removeDuplicates(x,n);

    for(int i=0; i < z; i++){

        cout<<x[i]<<endl;
    }

}
