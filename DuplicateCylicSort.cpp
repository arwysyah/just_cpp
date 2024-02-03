#include <iostream>
#include <vector>

class ArrayProcessor {
public:
    ArrayProcessor(std::vector<int>& arr) : nums(arr) {}

    void removeDuplicates() {
        int n = nums.size();
        for (int i = 0; i < n;) {
            if (nums[i] != i + 1) {
                if (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
                    std::swap(nums[i], nums[nums[i] - 1]);
                } else {
                    ++i;
                }
            } else {
                ++i;
            }
        }
    }

    void displayArray() const {
        std::cout << "Array: ";
        for (int num : nums) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<int>& nums;
};

int main() {
    std::vector<int> nums = {3, 1, 3, 4, 2, 6, 8, 7, 5, 5, 9};

    ArrayProcessor arrayProcessor(nums);
    arrayProcessor.removeDuplicates();

    arrayProcessor.displayArray();

    return 0;
}
