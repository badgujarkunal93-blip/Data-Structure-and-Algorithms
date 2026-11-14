# Data Structures and Algorithms (DSA)

C++ practical programs based on the two PDFs supplied for this repository.

**Student:** Kunal Sharad Badgujar  
**PRN:** 202501110131

## Practical index — direct code links

| Assignment / topic | Program(s) |
|---|---|
| 01 – Arrays Operation | [Student Mark Analysis](Practical-01-Arrays/student_mark_analysis.cpp) |
| 02 – Hashing Operation | [Parking Lot using Linear Probing](Practical-02-Hashing/parking_lot_linear_probing.cpp) |
| 03 – Search and Sorting | [Friends Phone Book using Sentinel Search](Practical-03-Search-and-Sorting/friends_phonebook_sentinel_search.cpp) |
| 04 – Linked List | [Call Log – Singly Linked List](Practical-04-Linked-List/call_log_singly_linked_list.cpp) · [Train Reservation – Doubly Linked List](Practical-04-Linked-List/train_reservation_doubly_linked_list.cpp) · [Music Playlist – Circular Linked List](Practical-04-Linked-List/music_playlist_circular_linked_list.cpp) |
| 05 – Stack | [Stack using Two Queues](Practical-05-Stack/stack_using_two_queues.cpp) |
| 06 – Queue | [Queue using Linked List](Practical-06-Queue/queue_using_linked_list.cpp) · [Queue using Two Stacks](Practical-06-Queue/queue_using_two_stacks.cpp) |
| PDF Practical 07 | [Task Scheduler using Deque](Practical-07-Task-Scheduler/task_scheduler_deque.cpp) |
| PDF Practical 08 | [Palindrome using Deque](Practical-08-Deque/palindrome_using_deque.cpp) |

## Complete PDF coverage

There are **11 distinct programs** across the two uploaded PDFs:

1. Student Mark Analysis
2. Parking Lot Management using Hashing and Linear Probing
3. Friends Phone Book using Sentinel Search
4. Call Log Management using a Singly Linked List
5. Train Reservation System using a Doubly Linked List
6. Music Playlist Management using a Circular Linked List
7. Stack using Two Queues
8. Queue using a Linked List
9. Queue using Two Stacks
10. Task Scheduler (deque-based priority processing)
11. Palindrome check using a Deque

The assignment outline image lists Trees and Graph as topics, but the PDFs supplied here do not contain source code for Trees or Graphs. The PDF's Practical 07 is the Task Scheduler, and Practical 08 is the Deque Palindrome program. They are linked by their actual PDF contents and are not mislabeled as tree or graph implementations.

**Source fidelity:** The PDFs show code as screenshots rather than selectable text. The linked C++ files are clean, compilable reconstructions of the visible problem statements and operations, not guaranteed character-for-character transcriptions of the screenshots.

## Compile and run

Use a C++11-compatible compiler such as g++.

```bash
g++ -std=c++11 -Wall -Wextra source_file.cpp -o program
./program
```

On Windows with MinGW:

```powershell
g++ -std=c++11 -Wall -Wextra source_file.cpp -o program.exe
.\program.exe
```

Compile each file separately because every practical has its own main() function.

## Repository structure

```text
.
├── Practical-01-Arrays/
├── Practical-02-Hashing/
├── Practical-03-Search-and-Sorting/
├── Practical-04-Linked-List/
├── Practical-05-Stack/
├── Practical-06-Queue/
├── Practical-07-Task-Scheduler/
├── Practical-08-Deque/
└── README.md
```
