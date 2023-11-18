
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> countingSort(const vector<int> &arr)
{
    vector<int> temp(100);

    // std::vector<int> frequency(100, 0); initial without lop

    for (int value : temp)
    {
        value = 0;
    }

    for (int index = 0; index < arr.size(); index++)
    {

        temp[arr[index]]++;
    }

    return temp;
};

int main()
{
    std::ifstream inputFile("input/count_sort.txt");

    // Check if the file is open
    if (!inputFile.is_open())
    {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    // Read the input line from the file
    std::string input;
    std::getline(inputFile, input);

    // Close the file
    inputFile.close();

    // Create a stringstream from the input string
    std::stringstream ss(input);

    // Read integers from the stringstream and store them in a vector
    std::vector<int> values;
    int num;
    while (ss >> num)
    {
        values.push_back(num);
    }
    vector<int> result = countingSort(values);

    for (int v : result)
    {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}

// g++ - std = c++ 11 count_sort_1.cpp &&./ a.out
//  CPP version 11