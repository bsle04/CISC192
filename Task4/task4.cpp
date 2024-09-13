#include <iostream>
using namespace std;

int highestProd(int nums[], int length){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    for(int i = 0; i < length; i++){
        if(nums[i] > max1){
            max1 = nums[i];
        }else if(nums[i] > max2){
            max2 = nums[i];
        }
        if((nums[i] < 0)&&(nums[i] < min1)){
            min1 = nums[i];
        }else if((nums[i] < 0)&&(nums[i] < min2)){
            min2 = nums[i];
        }
    }
    int positiveProd = max1 * max2;
    int negativeProd = min1 * min2;
    if(positiveProd > negativeProd){
        return positiveProd;
    }else {
        return negativeProd;
    }
}

int main() {
    int nums[] = {5, -10, -6, 9, 4};
    int length = sizeof(nums)/sizeof(nums[0]);
    cout << highestProd(nums, length);
    return 0;
}
