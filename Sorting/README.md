1-Bubble sort:
Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them until they are not in the intended order.

Just like the movement of air bubbles in the water that rise up to the surface, each element of the array move to the end in each iteration. Therefore, it is called a bubble sort.

Working of Bubble Sort
Suppose we are trying to sort the elements in ascending order.

1. First Iteration (Compare and Swap)

1-Starting from the first index, compare the first and the second elements.
2-If the first element is greater than the second element, they are swapped.
3-Now, compare the second and the third elements. Swap them if they are not in order.
4-The above process goes on until the last element.
![image](https://user-images.githubusercontent.com/55850221/132429347-eb337929-78c3-4d78-bfc0-8c5eb45bd04e.png)

2. Remaining Iteration
The same process goes on for the remaining iterations.
After each iteration, the largest element among the unsorted elements is placed at the end.
![image](https://user-images.githubusercontent.com/55850221/132429384-4c8b9c44-407d-4574-a470-201252135ad1.png)

In each iteration, the comparison takes place up to the last unsorted element.

![image](https://user-images.githubusercontent.com/55850221/132429511-03c2cf49-ca37-4c8e-833d-afd0a3f6d298.png)

The array is sorted when all the unsorted elements are placed at their correct positions.
![image](https://user-images.githubusercontent.com/55850221/132429556-a5dd8f52-88ed-4e3b-99bb-03a1031db45b.png)


Bubble Sort Complexity
Time Complexity	 
Best	O(n)
Worst	O(n2)
Average	O(n2)
Space Complexity	O(1)
Stability		Yes
Complexity in Detail
Bubble Sort compares the adjacent elements.

Cycle	Number of Comparisons
1st	(n-1)
2nd	(n-2)
3rd	(n-3)
.......	......
last	1
Hence, the number of comparisons is

(n-1) + (n-2) + (n-3) +.....+ 1 = n(n-1)/2
nearly equals to n2

Hence, Complexity: O(n2)

Also, if we observe the code, bubble sort requires two loops. Hence, the complexity is n*n = n2

1. Time Complexities
-Worst Case Complexity: O(n2)
If we want to sort in ascending order and the array is in descending order then the worst case occurs.

-Best Case Complexity: O(n)
If the array is already sorted, then there is no need for sorting.

-Average Case Complexity: O(n2)
It occurs when the elements of the array are in jumbled order (neither ascending nor descending).

2. Space Complexity
Space complexity is O(1) because an extra variable is used for swapping.
In the optimized bubble sort algorithm, two extra variables are used. Hence, the space complexity will be O(2).
Bubble Sort Applications
Bubble sort is used if

complexity does not matter
short and simple code is preferred

2-Insertion sort:

Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.

Insertion sort works similarly as we sort cards in our hand in a card game.

We assume that the first card is already sorted then, we select an unsorted card. If the unsorted card is greater than the card in hand, it is placed on the right otherwise, to the left. In the same way, other unsorted cards are taken and put in their right place.

![i1](https://user-images.githubusercontent.com/55850221/132428084-efb30169-02d8-4223-bd94-afe4e168270f.JPG)

![i2](https://user-images.githubusercontent.com/55850221/132428277-7f39eaf4-1255-483d-b8e2-5d9f7e6d7aee.JPG)

Now, the first two elements are sorted.

Take the third element and compare it with the elements on the left of it. Placed it just behind the element smaller than it. If there is no element smaller than it, then place it at the beginning of the array.

![image](https://user-images.githubusercontent.com/55850221/132428399-48cbf947-711b-4525-a26a-4b0b7a1d801d.png)

Similarly, place every unsorted element at its correct position.

![image](https://user-images.githubusercontent.com/55850221/132428514-a08a9ed0-006a-4b02-9087-4206ab3a49c5.png)

![image](https://user-images.githubusercontent.com/55850221/132428543-dd08c271-3d98-429b-8daa-a0ff95c51275.png)

Insertion Sort Complexity

Time      Complexity	 
Best	    O(n)
Worst	    O(n2)
Average	  O(n2)

Space Complexity	O(1)
Stability	Yes

Time Complexities

Worst Case Complexity: O(n2)
Suppose, an array is in ascending order, and you want to sort it in descending order. In this case, worst case complexity occurs.

Each element has to be compared with each of the other elements so, for every nth element, (n-1) number of comparisons are made.

Thus, the total number of comparisons = n*(n-1) ~ n2
Best Case Complexity: O(n)
When the array is already sorted, the outer loop runs for n number of times whereas the inner loop does not run at all. So, there are only n number of comparisons. Thus, complexity is linear.
Average Case Complexity: O(n2)
It occurs when the elements of an array are in jumbled order (neither ascending nor descending).
Space Complexity

Space complexity is O(1) because an extra variable key is used.

Insertion Sort Applications
The insertion sort is used when:

the array is has a small number of elements
there are only a few elements left to be sorted

3-Selection Sort Algorithm
Working of Selection Sort
![image](https://user-images.githubusercontent.com/55850221/132428842-1371505b-dbb4-4e51-87a6-c5b367f89a73.png)

2-Compare minimum with the second element. If the second element is smaller than minimum, assign the second element as minimum.
Compare minimum with the third element. Again, if the third element is smaller, then assign minimum to the third element otherwise do nothing. The process goes on until the last element.
![image](https://user-images.githubusercontent.com/55850221/132428891-56a8b373-4234-4a59-9979-befbd54e3a1c.png)

3-After each iteration, minimum is placed in the front of the unsorted list.
![image](https://user-images.githubusercontent.com/55850221/132428939-c610e722-382c-4864-854d-82b18a091c62.png)

4-For each iteration, indexing starts from the first unsorted element. Step 1 to 3 are repeated until all the elements are placed at their correct positions.
![image](https://user-images.githubusercontent.com/55850221/132428980-52c8a95b-be3d-463b-ba01-4c8c04fd66d7.png)
![image](https://user-images.githubusercontent.com/55850221/132429007-df076344-dde7-4137-9df9-cc5c0e2f241d.png)![image](https://user-images.githubusercontent.com/55850221/132429024-cf2d9b6e-5657-4e2c-9b29-99e3b5be7e84.png)
![image](https://user-images.githubusercontent.com/55850221/132429039-19520487-b7ca-4024-b503-a2e9cc97f42a.png)

Selection Sort Complexity
Time Complexity	 
Best	O(n2)
Worst	O(n2)
Average	O(n2)
Space Complexity	O(1)
Stability	No
Cycle	Number of Comparison
1st	(n-1)
2nd	(n-2)
3rd	(n-3)
...	...
last	1
Number of comparisons: (n - 1) + (n - 2) + (n - 3) + ..... + 1 = n(n - 1) / 2 nearly equals to n2.

Complexity = O(n2)

Also, we can analyze the complexity by simply observing the number of loops. There are 2 loops so the complexity is n*n = n2.

Time Complexities:

Worst Case Complexity: O(n2)
If we want to sort in ascending order and the array is in descending order then, the worst case occurs.
Best Case Complexity: O(n2)
It occurs when the array is already sorted
Average Case Complexity: O(n2)
It occurs when the elements of the array are in jumbled order (neither ascending nor descending).

The time complexity of the selection sort is the same in all cases. At every step, you have to find the minimum element and put it in the right place. The minimum element is not known until the end of the array is not reached.

Space Complexity:

Space complexity is O(1) because an extra variable temp is used.

Selection Sort Applications
The selection sort is used when

a small list is to be sorted
cost of swapping does not matter
checking of all the elements is compulsory
cost of writing to a memory matters like in flash memory (number of writes/swaps is O(n) as compared to O(n2) of bubble sort)
