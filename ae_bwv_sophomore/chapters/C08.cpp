//
//  C08.cpp
//  ae_bwv_sophomore
//
//  Created by Marco Dung on 08.09.17.
//
//


#include "lib.hpp"
#include "C08.hpp"
#include <iostream>

void bubblesort(int arr[], int len) {
	int tmp = 0;
	int swapped = 0;
	int count = 1;

	do {
		swapped = 0;

		for(int i = 0; i < len-count; i++) {
			if (arr[i] > arr[i+1]) {
				tmp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tmp;
				swapped = 1;
			}
		}

		if(swapped == 1) {
			count++;
		}

	} while(swapped == 1);

}


/**
 Selection Sort

 @param arr Das zu sortierende Array
 @param len Länge des Arrays
 */

void selectionsort(int arr[], int len)
{
	int tmp;

	for(int i = 0; i < len; i++) {
		for(int min = i; min < len; min++) {
			if (arr[i] > arr[min]) {
				tmp = arr[i];
				arr[i] = arr[min];
				arr[min] = tmp;
			}
		}
	}
}


/**
 Insertion Sort

 @param arr Das zu sortierende Array
 @param len Länge des Arrays
 */

void insertionsort(int arr[], int len)
{
	int tmp, j;

	for (int i = 1; i < len; i++) {
		if (arr[i-1] > arr[i]) {
			tmp = arr[i];
			for (j = i; (j > 0 && arr[j-1] > tmp) ; j--) {
				arr[j] = arr[j-1];
			}
			arr[j] = tmp;
		}
	}
}


/**
 reverseWord Aufgabe
 noch nicht fertig
 */

void reverseWord(char c) {
//	std::cout << "Geben Sie was ein" << std::endl;
//	char c = std::cin.get();
//	std::cin.get();
//	std::cin.clear();
//	std::cin.ignore(10000, '\n');
//
//	if (c != '\n') {
//		reverseWord();
//	}
//	else {
//		std::cout << "\n";
//		return;
//	}
}


/**
 Schreiben Sie ein Programm, welches eine beliebig
 große Ganzzahl als ein int einliest und sie anschließend als
 Text ausgibt – ohne ein Array oder einen string zu verwenden 
 und ohne sie ziffernweise einzulesen.
 Beispiel: 123 eins zwei drei.
 
 unpräzise Variante
 */

void zahlenUmwandlung (int num) {
	int tmp = num % 10;

	if (num != 0) {
		zahlenUmwandlung(num / 10);
	}
	else {
		std::cout << "\n";
		return;
	}

	switch (tmp) {
		case 1 :
			std::cout << "eins ";
			break;
		case 2 :
			std::cout << "zwei ";
			break;
		case 3 :
			std::cout << "drei ";
			break;
		case 4 :
			std::cout << "vier ";
			break;
		case 5 :
			std::cout << "fünf ";
			break;
		case 6 :
			std::cout << "sechs ";
			break;
		case 7 :
			std::cout << "sieben ";
			break;
		case 8 :
			std::cout << "acht ";
			break;
		case 9 :
			std::cout << "neun ";
			break;
		case 0 :
			std::cout << "null ";
			break;
	}
}


/**
 Fakultät

 @param n Das n zu n!
 @return Das Ergebnis
 */

int fakultaet(int n)
{
	int result = 1;
	if (n > 1) {
		result = n * fakultaet(n - 1);
	}
	return result;
}

/**
 <#Description#>

 @param arr <#arr description#>
 @param i <#i description#>
 @param j <#j description#>
 */

void swap(int arr[], int i, int j) {
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;

}

/**
 Quick Sort

 @param arr Das zu sortierende Array
 @param left linker Index
 @param right rechter Index
 */

void quicksort(int arr[], int left, int right)
{
	if (left < right) {
		int pivot = right;
		while (left < right) {
			while ((left < right) && (arr[left] < arr[pivot])) {
				left++;
			}
			while ((left < right) && (arr[right] >= arr[pivot])) {
				right--;
			}
			swap(arr, left, right);
		}
		swap(arr, left, pivot);
		quicksort(arr, 0, left - 1);
		quicksort(arr, left + 1, pivot);
	} else {
		return;
	}
}

