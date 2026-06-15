 Task 2 - Algorithms Implementation

 Algorithms Implemented
- Quicksort
- Binary Search  
- Fractional Knapsack

 Quicksort
Sorting algorithm using divide and conquer + partitioning.
- Time Complexity: O(n log n) average, O(n²) worst case
- Space Complexity: O(log n) recursion stack
- Approach: Pick pivot, partition array, recursively sort left + right

 Sample Output
Original: 64 25 12 22 11
Sorted: 11 12 22 25 64

 Binary Search
Search algorithm for sorted arrays using divide and conquer.
- Time Complexity: O(log n)
- Space Complexity: O(1)
- Approach: Compare mid element, search left/right half

 Sample Output
Array: [2,5,8,12,16,23,38,56,72,91]
Element 23 found at index 5

 Fractional Knapsack
Greedy algorithm for knapsack problem where fractions of items can be taken.
- Time Complexity: O(n log n) due to sorting
- Space Complexity: O(1)
- Approach: Sort by value/weight ratio, take highest ratio items first

 Sample Output
Maximum value in Knapsack = 240

 How to Compile & Run
g++ quicksort.cpp -o quicksort.exe
.\quicksort.exe

g++ binarysearch.cpp -o binarysearch.exe
.\binarysearch.exe

g++ knapsack.cpp -o knapsack.exe
.\knapsack.exe
