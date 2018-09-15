#include <iostream>

using namespace std;


/*
int getSmallest(int *p, int current_index, int length){

    int temp = *p;

    for (;current_index < length; current_index++){
        //cout<<current_index;
        cout<<"  "<<*p;
        if(*p < temp)
            temp = *p;
        p++;
    }
    return temp;
}


int main()
{
    int arr[] = {3,4,5,6,8,9,10,2};
    int k = 0;
    //k = getSmallest(arr, 1, 8);
    cout<<"\n"<<getSmallest(&arr[4], 4, 8);
    return 0;
}
*/

// selectionSort.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
//#include <iostream>



int printArray(int *p, int arr_length) {
	int i = 0;
	for (i = 0; i < arr_length; i++) {
		std::cout << *p << " ";
		p++;
	}
	return 0;
}

int getIndex(int *p, int value, int current_index, int arr_length) {

	for (; current_index < arr_length; current_index++) {
		if (*p == value) {
			return current_index;
		}
		p = p + current_index;

	}
}

int getSmallest(int *p, int current_index, int length) {

	int temp = *p;

	for (; current_index < length; current_index++) {
		//cout<<current_index;
		//std::cout << "  " << *p;
		if (*p < temp)
			temp = *p;
		p++;
	}
	return temp;
}



int main()
{

	int arr[] = { 5,4,8,6,10,9,11,2 };
	int i = 0;
	int arr_length = 8;
	int swap_counter = 0;
	//k = getSmallest(arr, 1, 8);
	//std::cout << "\n" << getSmallest(&arr[4], 4, 8);
	int temp = 0;
	int index = 0;
	for (i = 0; i < arr_length; i++) {
		temp = getSmallest(&arr[i], i, arr_length);
		index = getIndex(arr, temp, i, arr_length);
		if (arr[i] < temp) {
			arr[index] = arr[i];
			arr[i] = temp;

			swap_counter++;
		}
	}
	printArray(arr, arr_length);


	//system("pause");
	return 0;
}

