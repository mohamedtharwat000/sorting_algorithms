# My Project

This is a C project that includes various sorting algorithms implemented in different files. Each file focuses on a specific sorting algorithm and provides functions to sort arrays using that algorithm.


## Description

The project consists of multiple C files, each implementing a different sorting algorithm. The available sorting algorithms are:

- Bubble Sort
- Insertion Sort
- Selection Sort
- Quick Sort

Each sorting algorithm is implemented in a separate file, making it easy to understand and test individual algorithms.

## Installation

To compile and run the project, follow these steps:

1. Clone the repository:

   ```shell
   git clone https://github.com/your-username/my-project.git
   ```

2. Change to the project directory:

   ```shell
   cd my-project
   ```

3. Compile the source files:

   ```shell
   gcc -Wall -Werror -Wextra -pedantic *.c -o my-project
   ```

4. Run the executable:

   ```shell
   ./my-project
   ```
   
## Usage

The project provides a main file (`main.c`) that demonstrates the usage of each sorting algorithm. It creates an array of integers, sorts the array using one of the implemented algorithms, and prints the sorted array.

## Algorithms

The project includes the following sorting algorithms:

### Bubble Sort

The Bubble Sort algorithm is implemented in the `bubble_sort.c` file. It repeatedly compares adjacent elements and swaps them if they are in the wrong order.

### Insertion Sort

The Insertion Sort algorithm is implemented in the `insertion_sort.c` file. It builds the final sorted array one item at a time by inserting each element into its proper position.

### Selection Sort

The Selection Sort algorithm is implemented in the `selection_sort.c` file. It repeatedly finds the minimum element from the unsorted part of the array and swaps it with the first unsorted element.

### Quick Sort

The Quick Sort algorithm is implemented in the `quick_sort.c` file. It picks an element as a pivot and partitions the array around the pivot, recursively sorting the sub-arrays.

## Implementation Details

- All algorithms sort integers in ascending order.
- Linked list sorting uses a doubly linked list structure.
- Quicksort uses the last element as a pivot.

## Time Complexity

| Algorithm      | Best Case  | Average Case | Worst Case |
| -------------- | ---------- | ------------ | ---------- |
| Bubble sort    | O(n)       | O(n^2)       | O(n^2)     |
| Insertion sort | O(n)       | O(n^2)       | O(n^2)     |
| Selection sort | O(n^2)     | O(n^2)       | O(n^2)     |
| Quicksort      | O(n log n) | O(n log n)   | O(n^2)     |

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

created by [Mohamed Tharwat](https://github.com/mohamedtharwat000/)
