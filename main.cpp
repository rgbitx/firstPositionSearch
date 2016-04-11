#include <iostream>
#include <vector>


using namespace std;

int binarySearch(vector<int> &array, int target) {
    // write your code here

    if (array.size() == 0){
        return -1;
    }

    int first = 0, last = array.size() - 1, mid = 0;

    while (first + 1 < last) {
        mid = first + (last - first)/2;
        if (array[mid] >= target){
            last = mid;
        } else if (array[mid] < target){
            first = mid;
        }
    }
    if (array[first] == target) {
        return first;
    }
    if (array[last] == target) {
        return last;
    }
    return -1;
}


int main() {
    cout << "Hello, World!" << endl;

    vector<int> array = {2,6,8,17,17,17,17,18,19,20};
    int target = 17;
    int ret = binarySearch(array, target);

    cout<<ret;

    return 0;
}