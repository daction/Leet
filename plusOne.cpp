

/*

 2015/Mar/10

 Given a non-negative number represented as an array of digits, plus one to the number.

 The digits are stored such that the most significant digit is at the head of the list.

Credit to Zhang Lei
*/


#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &digits) {
  //Start typing your C/C++ solution below
  //Do NOT write int main() function

    int carry = 1;
    int sum = 0;

    vector<int> result(digits.size(),0);

    for(int i = digits.siz()-1; i>=0; i--){
        sum = cary + digits[i];
        cary = sum / 10;
        result[i] = sum % 10;
    }

    if(cary > 0){
        result.insert(result.begin(), cary);

    }
    return result;



}

int main(){

    

    return 0;


}
