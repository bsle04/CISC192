#include <iostream>
#include <unordered_set>
using namespace std;

int longestSequence(int nums[], int length){
    unordered_set<int> set;
    for(int i = 0; i < length; i++){
        set.insert(nums[i]);
    }
    int longest = 0;

    for(int i = 0; i < length; i++){
        if(set.find(nums[i]-1) == set.end()){
            int length = 0;
            while(set.find(nums[i]+length) != set.end()){
                length++;
            }
            if(length > longest){
                longest = length;
            }
        }
    }
    return longest;
}

int main() {
    int nums[] = {10, 5, 12, 3, 55, 30, 4, 11, 2};
    int length = sizeof(nums) / sizeof(nums[0]);
    cout << longestSequence(nums, length) << endl;
    int nums2[] = {19, 13, 15, 12, 18, 14, 17, 11};
    int length2 = sizeof(nums2) / sizeof(nums2[0]);
    cout << longestSequence(nums2, length2) << endl;
    return 0;
}
