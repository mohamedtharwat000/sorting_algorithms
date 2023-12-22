# Sorting Algorithms in C

## Overview

This repository implements common sorting algorithms in C language, demonstrating different techniques and comparing their performance.

## Implemented Algorithms

* Bubble sort
* Insertion sort
* Selection sort
* Quick sort

## Files

* **Sorting functions:**
    * `bubble_sort.c` - Bubble sort algorithm
    * `insertion_sort.c` - Insertion sort algorithm for linked lists
    * `selection_sort.c` - Selection sort algorithm
    * `quick_sort.c` - Quicksort algorithm
* **Helper functions:**
    * `print_array.c` - Print an array
    * `print_list.c` - Print a linked list
* **Header:**
    * `sort.h` - Data structures and function declarations
* **Test files:**
    * `main.c` - Basic test file for sorting an array

## Usage

1. Compile the files: `gcc [function name].c -o sort`
2. Run the executable: `./sort`

This executes the `main()` function in `main.c`, sorting an array using one of the algorithms. The printing functions visualize array changes at each pass.

## Implementation Details

* All algorithms sort integers in ascending order.
* Linked list sorting uses a doubly linked list structure.
* Quicksort uses the last element as a pivot.

## Time Complexity

| Algorithm | Best Case | Average Case | Worst Case |
|---|---|---|---|
| Bubble sort | O(n) | O(n^2) | O(n^2) |
| Insertion sort | O(n) | O(n^2) | O(n^2) |
| Selection sort | O(n^2) | O(n^2) | O(n^2) |
| Quicksort | O(n log n) | O(n log n) | O(n^2) |

## Contributing

Contributions are welcome! Here are some ways you can contribute to this project:

- Report bugs and issues
- Fix bugs and issues
- Add new validation functionality
- Improve styling and overall UX
- Refactor code to improve quality
- Write documentation and improve existing docs

To contribute:
1. Fork the repository
2. Create a new branch
3. Make your changes and commit them
4. Push your branch and submit a pull request

I will review pull requests and provide feedback.

## License

This project is open source and available under the [MIT License](LICENSE).

## Credits

created by Mohamed Tharwat

