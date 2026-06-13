Task 1 - Data Structures Implementation

Data Structures Implemented
- Linked List
- Stack

Linked List
Operations: insert, delete, search
- Insert: O(1) at head
- Delete: O(n)
- Search: O(n)

 Sample Output
Inserted: 30 -> 20 -> 10 -> NULL
Deleted 20: 30 -> 10 -> NULL
Search 30: Found
Search 50: Not Found

Stack
Operations: push, pop, peek, isEmpty
- Push: O(1)
- Pop: O(1)
- Peek: O(1)
- isEmpty: O(1)

 Sample Output
Pushed: 10 20 30
Top: 30
Popped: 30 20 10
Top: 20
IsEmpty: No

 How to Compile & Run
g++ linkedlist.cpp -o linkedlist
.\linkedlist.exe

g++ stack.cpp -o stack
.\stack.exe
