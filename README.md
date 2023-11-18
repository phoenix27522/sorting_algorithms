# sorting_algorithms
implementing the best way to  solve some problem using algorithm



1 - Bubble Sort : is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. 
                  This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

    In this algorithm, 
	* traverse from left and compare adjacent elements and the higher one is placed at right side. 
	* In this way, the largest element is moved to the rightmost end at first. 
	* This process is then continued to find the second largest and place it and so on until the data is sorted.

 												[reference]: https://www.geeksforgeeks.org/bubble-sort/


2 - Insertion sort : is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
                     The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and
		     placed at the correct position in the sorted part.

    In this algorithm,
	* terate over the array and compare the current element (key) to its predecessor
	* if the key element is smaller than its predecessor, compare it to the elements before.
	* Move the greater elements one position up to make space for the swapped element.

                                                                                                [reference]: https://www.geeksforgeeks.org/insertion-sort/

3 - Selection sort : is a simple, yet effective sorting algorithm. A selection-based sorting algorithm is described as
		     an in-place comparison-based algorithm that divides the list into two parts, the sorted part on the
		     left and the unsorted part on the right. Initially, the sorted section is empty, and the unsorted section
                     contains the entire list. When sorting a small list, selection sort can be used.

    In this algorithm,
	* iterate over the array find the smallest element and bring it the front
	* The first item in the array is now sorted, while the rest of the array is unsorted.
	* we start to iterate over again from the second index to find the lowest then swap it to second index
	* this repeated untill all is sorted

                                                                                                [reference]: https://en.wikipedia.org/wiki/Selection_sort

5 - Shell sort : The shell sort algorithm starts by dividing the data set into smaller segments,then sorting
		 each of them using insertion sort. The algorithm then reduces the gap between the elements of the subset,
		 and the sorting process is repeated until the entire data set is sorted.

    In this algorithm,
	* Choose a gap sequence: The first step in Shell Sort is to choose a sequence of gap values.
          The gaps determine the distance between the elements that will be compared and swapped during the sorting process.
	* Start with a large gap: Begin by comparing elements that are far apart. The gap value determines the initial distance
	  between elements to be compared and swapped. The last gap value is 1, which means the final step will be an insertion sort.
	* Compare and swap elements: Compare elements that are separated by the chosen gap. If the elements are out of order, swap them
	* Reduce the gap: After sorting elements with the initial gap, reduce the gap size.
	* Repeat until the gap is 1
	* In gap of 1,it is the same as insertion sort. It compares adjacent elements and swaps them if necessary until the entire array is sorted

                                                                                                [reference]: https://www.geeksforgeeks.org/cocktail-sort/

6 - Cocktail Sort : it is like bubble sort but Cocktail Sort traverses through a given array in both directions alternatively.
		    Cocktail sort does not go through the unnecessary iteration making it efficient for large arrays.

    In this algorithm,
	* The first stage loops through the array from left to right, just like the Bubble Sort. During the loop,
	  adjacent items are compared and if the value on the left is greater than the value on the right, then values are swapped.
	  At the end of the first iteration, the largest number will reside at the end of the array.
	* The second stage loops through the array in opposite direction- starting from the item just before the most recently sorted item,
	  and moving back to the start of the array. Here also, adjacent items are compared and are swapped if required.

                                                                                                [reference]: https://www.geeksforgeeks.org/cocktail-sort/

