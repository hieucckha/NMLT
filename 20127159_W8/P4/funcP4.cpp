#include "funcP4.h"

#include <cstring>
int countChar(char arrayChar[], char input) {
    int count = 0;

    for (int i = 0; a[i] != '\0'; ++i) {
        if (a[i] == input) {
            count++;
        }
    }

    return count;
}

int findMaxArray(int a[], int length, int &pos) {
    int max = (-2147483647 - 1);

    for (int i = 0; i < length; ++i) {
        if (a[i] > max) {
            max = a[i];
            pos = i;
        }
    }

    return max;
}

void findCharMax(char a[]) {
    int temp[strlen(a)];
	
	for (int i =0 ; a[i] != '\0'; ++i) {
		
	}

}