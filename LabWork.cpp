#include <iostream>
#include <vector>

void insertIntoSortedList(std::vector<int>& sortedList, int value) {
    size_t pos = 0;
    while (pos < sortedList.size() && sortedList[pos] < value) {
        pos++;
    }
    sortedList.insert(sortedList.begin() + pos, value);
}

int main() {
    int n, value;
    std::cout << "Enter the size of the sorted array: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Invalid size!" << std::endl;
        return 1;
    }

    std::vector<int> sortedList(n);
    std::cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> sortedList[i];
    }

    while (true) {
        std::cout << "Enter the value to insert (-1 to exit): ";
        std::cin >> value;

        if (value == -1) {
            break;
        }

        insertIntoSortedList(sortedList, value);

        std::cout << "Updated list: ";
        for (int num : sortedList) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}