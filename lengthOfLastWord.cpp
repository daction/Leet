/*
2015/Mar/09
Length of Last word

Credit to: Alex Dai

*/

/*
if vs switch

    if: for judging the situation
    while: is a loop

*/

#include <iostream>

using namespace std;

int lengthOflast(const char *s){

    //Base case
    if(NULL == s){
        return 0;
    }

    //
    const char *ptr = s;
    while(*ptr != '\0'){//\0 the end of String

        ptr ++;//If not at the end of String, pointer keep moving forward
    }

    if(ptr == s){

        return 0;
    }
    ptr--;


    while (ptr >= s && *ptr == ' '){
            ptr--;

    }

    const char *pEnd = ptr;

    while (ptr >= s && *ptr != ' '){
        ptr--;
    }

    return (int) (pEnd-ptr);





}

int main(){

    char str[] = "Hello World ";
    cout << lengthOflast(str);

    return 0;


}
