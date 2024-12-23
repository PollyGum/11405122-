
#include <iostream>
#include <vector>

int singleNumber(const std::vector<int>& nums) {
    int result = 0; // Инициализируем результат нулем

> Катарсис:
for (int num : nums) { // Проходим по каждому числу в массиве
        result ^= num; // Применяем операцию XOR
    }
    return result; // Возвращаем результат
}

int main() {
    // Примеры использования
    std::vector<int> nums1 = {2, 2, 1};
    std::cout << "Output: " << singleNumber(nums1) << std::endl; // Вывод: 1

    std::vector<int> nums2 = {4, 1, 2, 1, 2};
    std::cout << "Output: " << singleNumber(nums2) << std::endl; // Вывод: 4

    std::vector<int> nums3 = {1};
    std::cout << "Output: " << singleNumber(nums3) << std::endl; // Вывод: 1

    return 0;
}
