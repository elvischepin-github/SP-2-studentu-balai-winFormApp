#include "Helper.h"
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>

namespace SP2 {
    // Vidurkio skaičiavimas
    double calculateAverage(std::string textBox3Input, std::string textBox4Input) {
        std::istringstream streamMarks(textBox3Input);
        int exam = stoi(textBox4Input);

        int sum = 0, count = 0, num;

        while (streamMarks >> num) {
            sum += num;
            count++;
        }

        double result = round((static_cast<double>(sum) / count + exam) / 2);

        return count > 0 ? result : 0;
    }

    // Medianos skaičiavimas
    double calculateMedian(std::string textBox3Input, std::string textBox4Input) {
        std::istringstream streamMarks(textBox3Input);
        std::vector<int> marks;
        int exam = stoi(textBox4Input);
        int num;

        while (streamMarks >> num) {
            marks.push_back(num);
        }

        marks.push_back(exam);
        std::sort(marks.begin(), marks.end());

        int size = marks.size();
        if (size % 2 == 0) {
            return round((marks[size / 2 - 1] + marks[size / 2]) / 2.0);
        }
        else {
            return marks[size / 2];
        }
    }
}
