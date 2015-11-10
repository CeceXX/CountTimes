#include <stdio.h>

int countTimesElementIsFound(int elementToCount, char elements[], int arrayLength) {
    int timesElementWasFound = 0;
    
    for (int i = 0; i < elementToCount; i++) {
        if (elementToCount == elements[i]) {
            printf("%d was found %d time(s).", elementToCount);
        }
    }
    return 1;
}

int main() {
    char elements[] = {2, 2, 0, 0};
    int arrayLength = 4, elementToCount = 0;
    
    while (elementToCount != arrayLength-1) {
        countTimesElementIsFound(elementToCount, elements, arrayLength);
    }
    
    return 0;
}
