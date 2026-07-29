class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
     vector<int> arr1;

for (int i = 0; i < arr.size(); i++) {
    if (arr1.size() == arr.size()) break;

    arr1.push_back(arr[i]);

    if (arr[i] == 0 && arr1.size() < arr.size()) {
        arr1.push_back(0);
    }
}

arr = arr1;
    }
};