#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

void DisplayInsertionSort(int orderedTwenty[], int orderedHundred[], int unorderedTwentyReverse[], int unorderedHundredReverse[], int random[], int &comparisonCount);

void DisplayBubbleSort(int orderedTwenty[], int orderedHundred[], int unorderedTwentyReverse[], int unorderedHundredReverse[], int random[], int &comparisonCount);

void DisplaySelectionSort(int orderedTwenty[], int orderedHundred[], int unorderedTwentyReverse[], int unorderedHundredReverse[], int random[], int &comparisonCount);

void DisplayMergeSort(int orderedTwenty[], int orderedHundred[], int unorderedTwentyReverse[], int unorderedHundredReverse[], int random[], int &comparisonCount);

void DisplayQuickSortPart1(int orderedTwenty[], int orderedHundred[], int unorderedTwentyReverse[], int unorderedHundredReverse[], int random[], int &comparisonCount);

void DisplayQuickSortPart2(int orderedTwenty[], int orderedHundred[], int unorderedTwentyReverse[], int unorderedHundredReverse[], int random[], int &comparisonCount);

void InsertionSort(int arr[], int &comparisonCount, int n);

void BubbleSort(int arr[], int &comparisonCount, int n);

void SelectionSort(int arrs[], int &comparisonCount, int n);

void MergeSort(int arr[], int &comparisonCount, int p, int r);

void Merge(int arr[], int &comparisonCount, int p, int q,  int r);

void QuickSortPart1(int arr[], int &comparisonCount, int p, int r);

int PartitionOne(int arr[], int &comparisonCount, int p, int r);

void QuickSortPart2(int arr[], int &comparisonCount, int p, int r);

int PartitionTwo(int arr[], int &comparisonCount, int p, int r);

void printUnsortedInfo(int arr[], int n);

void printSortedInfo(int arr[], int comparisonCount, int n);

void setArrays(int arr1[], int arr2[], int arr3[], int arr4[], int arr5[]);

int main(){

	int orderedTwenty[20];

	int orderedHundred[100];

	int unorderedTwentyReverse[20];

	int unorderedHundredReverse[100];

	int random[20];

	int comparisonCount;

	DisplayInsertionSort(orderedTwenty, orderedHundred, unorderedTwentyReverse, unorderedHundredReverse, random, comparisonCount);

	DisplaySelectionSort(orderedTwenty, orderedHundred, unorderedTwentyReverse, unorderedHundredReverse, random, comparisonCount);

	DisplayBubbleSort(orderedTwenty, orderedHundred, unorderedTwentyReverse, unorderedHundredReverse, random, comparisonCount);

	DisplayMergeSort(orderedTwenty, orderedHundred, unorderedTwentyReverse, unorderedHundredReverse, random, comparisonCount);

	DisplayQuickSortPart1(orderedTwenty, orderedHundred, unorderedTwentyReverse, unorderedHundredReverse, random, comparisonCount);

	DisplayQuickSortPart2(orderedTwenty, orderedHundred, unorderedTwentyReverse, unorderedHundredReverse, random, comparisonCount);

	return 0;
}

void  DisplayInsertionSort(int orderedTwenty[], int orderedHundred[], int unorderedTwentyReverse[], int unorderedHundredReverse[], int random[], int &comparisonCount){
	setArrays(orderedTwenty, orderedHundred, unorderedTwentyReverse, unorderedHundredReverse, random);
	//Start Insertion Sort

	cout << "Insertion Sort: " << endl;
	cout << "----------------" << endl << endl;

	//Start Ordered Twenty Info
	printUnsortedInfo(orderedTwenty, 20);

	cout << endl;
	
	comparisonCount = 0;
	InsertionSort(orderedTwenty, comparisonCount, 20);

	printSortedInfo(orderedTwenty, comparisonCount, 20);

	cout << endl << endl;

	//Start Reverse Twenty Info
	printUnsortedInfo(unorderedTwentyReverse, 20);

	cout << endl;

	comparisonCount = 0;
	InsertionSort(unorderedTwentyReverse, comparisonCount, 20);

	printSortedInfo(unorderedTwentyReverse, comparisonCount, 20);

	cout << endl << endl;


	//Start Ordered Hundred Info
	printUnsortedInfo(orderedHundred, 100);

	cout << endl;

	comparisonCount = 0;
	InsertionSort(orderedHundred, comparisonCount, 100);

	printSortedInfo(orderedHundred, comparisonCount, 100);

	cout << endl << endl;

	//Start Reverse Hundred Info
	printUnsortedInfo(unorderedHundredReverse, 100);

	cout << endl;

	comparisonCount = 0;
	InsertionSort(unorderedHundredReverse, comparisonCount, 100);

	printSortedInfo(unorderedHundredReverse, comparisonCount, 100);

	cout << endl << endl;

	//Start Random Info
	printUnsortedInfo(random, 20);

	cout << endl;

	comparisonCount = 0;
	InsertionSort(random, comparisonCount, 20);

	printSortedInfo(random, comparisonCount, 20);

	cout << endl << endl;
	
	//Resseting Arrays
	


	cout << endl;
}

void  DisplayBubbleSort(int orderedTwenty[], int orderedHundred[], int unorderedTwentyReverse[], int unorderedHundredReverse[], int random[], int &comparisonCount){

	setArrays(orderedTwenty, orderedHundred, unorderedTwentyReverse, unorderedHundredReverse, random);
	//Start Bubbble Sort
	cout << "Bubble Sort:" << endl;
	cout << "-----------" << endl << endl;


	//Start Ordered Twenty Info
	printUnsortedInfo(unorderedTwentyReverse, 20);

	cout << endl;

	comparisonCount = 0;
	BubbleSort(unorderedTwentyReverse, comparisonCount, 20);

	printSortedInfo(unorderedTwentyReverse, comparisonCount, 20);

	cout << endl << endl;


	//Start Reverse Twenty Info
	printUnsortedInfo(orderedTwenty, 20);

	cout << endl;

	comparisonCount = 0;
	BubbleSort(orderedTwenty, comparisonCount, 20);

	printSortedInfo(orderedTwenty, comparisonCount, 20);

	cout << endl << endl;


	//Start Ordered Hundred Info
	printUnsortedInfo(orderedHundred, 100);

	cout << endl;

	comparisonCount = 0;
	BubbleSort(orderedHundred, comparisonCount, 100);

	printSortedInfo(orderedHundred, comparisonCount, 100);

	cout << endl << endl;

	//Start Reverse Hundred Info
	printUnsortedInfo(unorderedHundredReverse, 100);

	cout << endl;

	comparisonCount = 0;
	BubbleSort(unorderedHundredReverse, comparisonCount, 100);

	printSortedInfo(unorderedHundredReverse,comparisonCount, 100);

	cout << endl << endl;

	//Start Random Info
	printUnsortedInfo(random, 20);

	cout << endl;

	comparisonCount = 0;
	BubbleSort(random, comparisonCount, 20);

	printSortedInfo(random, comparisonCount, 20);

	cout << endl << endl;
}

void DisplaySelectionSort(int orderedTwenty[], int orderedHundred[], int unorderedTwentyReverse[], int unorderedHundredReverse[], int random[], int &comparisonCount){
	setArrays(orderedTwenty, orderedHundred, unorderedTwentyReverse, unorderedHundredReverse, random);

	//Start Insertion Sort
	cout << "Selection Sort:" << endl;
	cout << "---------------" << endl;

	//Start Ordered Twenty Info
	printUnsortedInfo(unorderedTwentyReverse, 20);

	cout << endl;

	comparisonCount = 0;
	SelectionSort(unorderedTwentyReverse, comparisonCount, 20);

	printSortedInfo(unorderedTwentyReverse, comparisonCount, 20);

	cout << endl << endl;


	//Start Reverse Twenty Info
	printUnsortedInfo(orderedTwenty, 20);

	cout << endl;

	comparisonCount = 0;
	SelectionSort(orderedTwenty, comparisonCount, 20);

	printSortedInfo(orderedTwenty, comparisonCount, 20);

	cout << endl << endl;

	//Start Ordered Hundred Info
	printUnsortedInfo(orderedHundred, 100);

	cout << endl;

	comparisonCount = 0;
	SelectionSort(orderedHundred, comparisonCount, 100);

	printSortedInfo(orderedHundred, comparisonCount, 100);

	cout << endl << endl;

	//Start Reverse Hundred Info
	printUnsortedInfo(unorderedHundredReverse, 100);

	cout << endl;

	comparisonCount = 0;
	SelectionSort(unorderedHundredReverse, comparisonCount, 100);

	printSortedInfo(unorderedHundredReverse, comparisonCount, 100);

	cout << endl << endl;

	//Start Random Info
	printUnsortedInfo(random, 20);

	cout << endl;

	comparisonCount = 0;
	SelectionSort(random, comparisonCount, 20);

	printSortedInfo(random, comparisonCount, 20);

	cout << endl << endl;

	
	setArrays(orderedTwenty, orderedHundred, unorderedTwentyReverse, unorderedHundredReverse, random);

}
void DisplayMergeSort(int orderedTwenty[], int orderedHundred[], int unorderedTwentyReverse[], int unorderedHundredReverse[], int random[], int &comparisonCount){

	setArrays(orderedTwenty, orderedHundred, unorderedTwentyReverse, unorderedHundredReverse, random);

	cout << "Merge Sort:" << endl;
	cout << "-----------" << endl;
	printUnsortedInfo(orderedTwenty, 20);
	cout << endl;

	comparisonCount = 0;

	MergeSort(orderedTwenty, comparisonCount, 0, 19);

	printSortedInfo(orderedTwenty, comparisonCount, 20);

	cout << endl << endl;

	printUnsortedInfo(unorderedTwentyReverse, 20);

	cout << endl;

	comparisonCount = 0;

	MergeSort(unorderedTwentyReverse, comparisonCount, 0, 19);

	printSortedInfo(unorderedTwentyReverse, comparisonCount, 20);

	cout << endl << endl;

	printUnsortedInfo(orderedHundred, 100);

	cout << endl;

	comparisonCount = 0;

	MergeSort(orderedHundred, comparisonCount, 0, 99);

	printSortedInfo(orderedHundred, comparisonCount, 100);

	cout << endl << endl;

	printUnsortedInfo(unorderedHundredReverse, 100);

	cout << endl;

	comparisonCount = 0;

	MergeSort(unorderedHundredReverse, comparisonCount, 0, 99);

	printSortedInfo(unorderedHundredReverse, comparisonCount ,100);

	cout << endl << endl;


	//Start Random Info
	printUnsortedInfo(random, 20);

	cout << endl;

	comparisonCount = 0;

	MergeSort(random, comparisonCount, 0, 19);

	printSortedInfo(random, comparisonCount, 20);

	cout << endl << endl;

}

void DisplayQuickSortPart1(int orderedTwenty[], int orderedHundred[], int unorderedTwentyReverse[], int unorderedHundredReverse[], int random[], int &comparisonCount){

	setArrays(orderedTwenty, orderedHundred, unorderedTwentyReverse, unorderedHundredReverse, random);


	cout << "Quick Sort (Partition One):" << endl;
	cout << "---------------------------" << endl;

	printUnsortedInfo(orderedTwenty, 20);
	cout << endl;

	comparisonCount = 0;
	QuickSortPart1(orderedTwenty, comparisonCount, 0, 19);

	printSortedInfo(orderedTwenty, comparisonCount, 20);

	cout << endl << endl;

	printUnsortedInfo(unorderedTwentyReverse, 20);

	cout << endl;

	comparisonCount = 0;
	QuickSortPart1(unorderedTwentyReverse, comparisonCount, 0 , 19);

	printSortedInfo(unorderedTwentyReverse, comparisonCount, 20);

	cout << endl << endl;

	printUnsortedInfo(orderedHundred, 100);

	cout << endl;

	comparisonCount = 0;
	QuickSortPart1(orderedHundred, comparisonCount, 0, 99);

	printSortedInfo(orderedHundred, comparisonCount, 100);

	cout << endl << endl;

	printUnsortedInfo(unorderedHundredReverse, 100);

	cout << endl;

	comparisonCount = 0;
	QuickSortPart1(unorderedHundredReverse, comparisonCount, 0, 99);

	printSortedInfo(unorderedHundredReverse, comparisonCount, 100);

	cout << endl << endl;

	printUnsortedInfo(random, 20);

	cout << endl;

	comparisonCount = 0;
	QuickSortPart1(random, comparisonCount, 0, 19);

	printSortedInfo(random, comparisonCount, 20);

	cout << endl << endl;

}
void DisplayQuickSortPart2(int orderedTwenty[], int orderedHundred[], int unorderedTwentyReverse[], int unorderedHundredReverse[], int random[], int &comparisonCount){

	setArrays(orderedTwenty, orderedHundred, unorderedTwentyReverse, unorderedHundredReverse, random);

	cout << "Quick Sort (Partition Two):" << endl;
	cout << "---------------------------" << endl;

	printUnsortedInfo(orderedTwenty, 20);
	cout << endl;

	comparisonCount = 0;
	QuickSortPart2(orderedTwenty, comparisonCount, 0, 19);

	printSortedInfo(orderedTwenty, comparisonCount, 20);

	cout << endl << endl;

	printUnsortedInfo(unorderedTwentyReverse, 20);

	cout << endl;

	comparisonCount = 0;
	QuickSortPart2(unorderedTwentyReverse, comparisonCount, 0 , 19);

	printSortedInfo(unorderedTwentyReverse, comparisonCount, 20);

	cout << endl << endl;

	printUnsortedInfo(orderedHundred, 100);

	cout << endl;

	comparisonCount = 0;
	QuickSortPart2(orderedHundred, comparisonCount, 0, 99);

	printSortedInfo(orderedHundred, comparisonCount, 100);

	cout << endl << endl;

	printUnsortedInfo(unorderedHundredReverse, 100);

	cout << endl;

	comparisonCount = 0;
	QuickSortPart2(unorderedHundredReverse, comparisonCount, 0, 99);

	printSortedInfo(unorderedHundredReverse, comparisonCount, 100);

	cout << endl << endl;

	printUnsortedInfo(random, 20);

	cout << endl;

	comparisonCount = 0;
	QuickSortPart2(random, comparisonCount, 0, 19);

	printSortedInfo(random, comparisonCount, 20);

	cout << endl << endl;

}

void setArrays(int arr1[], int arr2[], int arr3[], int arr4[], int random[]){
	for(int i = 0; i < 20; i++){
		arr1[i] = i + 1;
	}

	for(int i = 0; i < 100; i++){
		arr2[i] = i + 1;
	}

	for(int i = 0; i < 20; i++){
		arr3[i] = 20 - i;
	}
	
	for(int i = 0; i < 100; i++){
		arr4[i] = 100 - i;
	}

	
	//Setting array to be randomly shuffled
	for(int j = 0; j < 20; j++){
		random[j] = j + 1;
	}
	
	random_shuffle(&random[0], &random[19]);

}

void InsertionSort(int arr[], int &comparisonCount, int n){

    int i, key, j;
    comparisonCount = 1;
    for (i = 1; i < n; i++){
    	comparisonCount++;
        key = arr[i];
        j = i-1;
    
        while (j >= 0 && arr[j] > key){
           	comparisonCount = comparisonCount + 2;
        	arr[j+1] = arr[j];
            j = j-1;
       
        }

        arr[j+1] = key;
    }
}


void BubbleSort(int arr[], int &comparisonCount, int n){
	comparisonCount = 1;
	for(int i = 0; i < n - 1; i++){
		comparisonCount++;
		for (int j = 0; j < n-i-1; j++){
			comparisonCount++;
           if (arr[j] > arr[j+1]){
           		comparisonCount++;
           		int temp = arr[j];
           		arr[j] = arr[j+1];
           		arr[j+1] = temp;
			}
        }

    }
}


void SelectionSort(int arr[], int &comparisonCount, int n){
	
	int i, j, min_idx;
 
    comparisonCount = 1;
    for (i = 0; i < n-1; i++)
    {
        comparisonCount++;
        min_idx = i;
        for (j = i+1; j < n; j++){
        	comparisonCount++;
        	if (arr[j] < arr[min_idx]){
           		min_idx = j;
           		comparisonCount++;
        	}
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

}

void MergeSort(int arr[], int &comparisonCount, int l,  int r){
 if (l < r)
    {
    	comparisonCount++;
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;
 
        // Sort first and second halves
        MergeSort(arr, comparisonCount, l, m);
        MergeSort(arr, comparisonCount, m+1, r);
 
        Merge(arr, comparisonCount, l, m, r);
    }
}

void Merge(int arr[], int &comparisonCount, int l, int m,  int r){
	int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    /* create temp arrays */
    int L[n1], R[n2];
 
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++){
    	comparisonCount++;
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++){
    	comparisonCount++;
        R[j] = arr[m + 1+ j];
    }
 
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
    	comparisonCount = comparisonCount + 2;
        if (L[i] <= R[j])
        {
        	comparisonCount++;
            arr[k] = L[i];
            i++;
        }
        else
        {
        	comparisonCount++;
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
    	comparisonCount++;
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
    	comparisonCount++;
        arr[k] = R[j];
        j++;
        k++;
    }
}

void QuickSortPart1(int arr[], int &comparisonCount, int p, int r){
	if(p < r){
		comparisonCount++;

		int q = PartitionOne(arr, comparisonCount, p, r);
		QuickSortPart1(arr, comparisonCount, p , q - 1);
		QuickSortPart1(arr, comparisonCount, q + 1, r);
	}
}

void QuickSortPart2(int arr[], int &comparisonCount, int p, int r){
	if(p < r){
		comparisonCount++;

		int q = PartitionTwo(arr, comparisonCount, p, r);
		QuickSortPart2(arr, comparisonCount, p, q);
		QuickSortPart2(arr, comparisonCount, q + 1, r);

	}
}

int PartitionOne(int arr[], int &comparisonCount, int p, int r){
	
	int rnum;
	srand(time(0));
	srand( (unsigned)time(NULL));
	rnum = p+rand()%(r-p+1);
	int temp = arr[rnum];
	arr[rnum] = arr[r];
	arr[r] = temp;

	int pivot = arr[r];
	int i = p - 1;

	for(int j = p; j <= r - 1; j++){
		comparisonCount++;
		if(arr[j] <= pivot){
			comparisonCount++;
			i = i + 1;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		
	}
	
	temp = arr[i + 1];
	arr[i + 1] = arr[r];
	arr[r] = temp;
	return i + 1;
}

int PartitionTwo(int arr[], int &comparisonCount, int p, int r){
	int pivot = arr[p];
	int i = p - 1;
	int j = r + 1;
	while(true){
		comparisonCount++;
		j = j - 1;
		while(arr[j] > pivot){
			comparisonCount++;
			j = j - 1;
		}
		i = i + 1;

		while(arr[i] < pivot){
			comparisonCount++;
			i = i + 1;
		}
		if(i < j){
			comparisonCount++;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}else{
			comparisonCount++;
			return j;
		}
	}
}

void printUnsortedInfo(int arr[], int n){
	for(int i = 0;i < n; i++){
		cout << arr[i] << " ";
	}
}

void printSortedInfo(int arr[], int comparisonCount, int n){

	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";

	}

	cout << endl << "Comparison Count : " << comparisonCount;
}