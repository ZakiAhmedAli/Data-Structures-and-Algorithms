1-Bubble sort:
Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them until they are not in the intended order.

Just like the movement of air bubbles in the water that rise up to the surface, each element of the array move to the end in each iteration. Therefore, it is called a bubble sort.

Working of Bubble Sort
Suppose we are trying to sort the elements in ascending order.

1. First Iteration (Compare and Swap)

Starting from the first index, compare the first and the second elements.
If the first element is greater than the second element, they are swapped.
Now, compare the second and the third elements. Swap them if they are not in order.
The above process goes on until the last element.

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
