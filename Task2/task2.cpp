#include <iostream>
using namespace std;

int findMissingValue(int array[] , int length){
    int smallest = 0;
    int largest = 0;
    int sum = 0;
    for(int i=0;i<length;i++){
        if(array[i] < smallest){
            smallest = array[i];
        }
        else if(array[i] > largest){
            largest = array[i];
        }
        sum += array[i];
    }
    int lowerSum = ((smallest * (smallest + 1)) /2);
    int higherSum = ((largest * (largest + 1)) / 2);
    return higherSum - lowerSum - sum;
}

int main() {
    int nums[] = {2, 3, 0, 6, 1, 5};
    int size1 = sizeof(nums)/sizeof(nums[0]);
    int nums2[] = {8, 2, 3, 9, 4, 7, 5, 0, 6};
    int size2 = sizeof(nums2)/sizeof(nums2[0]);
    cout << findMissingValue(nums, size1) << endl;
    cout << findMissingValue(nums2, size2) << endl;
    return 0;
}
