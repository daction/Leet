/*
2015/Mar/9
Remove element in array
*/

#include <iostream>

using namespace std;

/*
    n how many number in the array
*/
int removeElemt(int A[], int n, int elemt)
{
    //Base case
    //If n is 0
    if (n == 0){

        return 0;
    }

    //If n greater than 0
  //  int index = 0;
    for (int i = 0; i < n; i++){

        if (A[elemt] == A[i]){

            A[elemt] = 0;
        }
    }


}

int main()
{
    //Test case
    //Input
    int x[10] = {1, 1, 2 ,3 ,4, 5, 6};
    int n = 7;

    int element = 4;

    int z = removeElemt(x,n,element);

    for(int i=0; i < z; i++){

        cout<<x[i]<<endl;
    }

}
