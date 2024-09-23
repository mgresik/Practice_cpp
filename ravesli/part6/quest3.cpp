#include <iostream>
 
int main()
{
    int scores[] = { 73, 85, 84, 44, 78 };
    const int numStudents = sizeof(scores) / sizeof(scores[0]);
 
    int maxIndex = 0;
    for (int student = 0; student < numStudents; ++student)
        if (scores[student] > scores[maxIndex])
            maxIndex = student;
 
    std::cout << "The best score: " << scores[maxIndex] << '\n';
    std::cout << "Index of the best score: " << maxIndex << '\n';
 
    return 0;
}