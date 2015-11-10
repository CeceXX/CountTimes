#include <stdio.h>

void printElementsOfArray(char elements, int arrayLength) {
}

int countTimesElementIsFound(int elementToCount, char elements[], int arrayLength) {
    int timesElementWasFound = 0;
    for (int i = 0; i < arrayLength; i++)
        if (elementToCount == elements[i])
            timesElementWasFound++;
    return timesElementWasFound;
}

int main() {
    char numbers[] = {2, 2, 2, 0};
    int arrayLength = 4, elementToCount = 0;
    while (elementToCount != arrayLength-1) {
        numbers[elementToCount] = countTimesElementIsFound(elementToCount, numbers, arrayLength);
        elementToCount++;
    }
    printf(numbers, arrayLength);
    return 0;
}
