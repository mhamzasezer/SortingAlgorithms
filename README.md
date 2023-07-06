# Learning Pointers and Sorting in C
This project is to study pointers and sorting algorithms in the C programming language. The project consists of three code files that work together to  read data from a CSV file, perform sorting operations on the data, and print the results.

## Pointers
The code in this project utilizes pointers in various functions and operations. By examining the implementation of functions such as read_data, selection_sort, search_min, bubble_sort, and print_data, you can gain insights into how pointers work and how they can be used to manipulate data efficiently.

## Sorting Algorithms
The program includes implementations of two common sorting algorithms: selection sort and bubble sort. 

## Code Files

### `sourcefile.c`
This file contains the main function that serves as the entry point of the program. It includes the necessary header file `headerfile.h` and defines the `main` function. The main function performs the following steps:

1. Declares an array of `struct data` named `d` with a size of 1000.
2. Declares integer variables `n` and `c`.
3. Calls the `read_data` function to read data from the CSV file `data.csv` into the `d` array, and assigns the number of elements read to `n`.
4. Prints the message "Before".
5. Calls the `print_data` function to print the contents of the `d` array before sorting.
6. Prompts the user to enter a choice between 1 and 2, storing the input in the variable `c`.
7. Uses a switch statement to perform the selected sort operation:
   - If `c` is 1, calls the `selection_sort` function to sort the `d` array using the selection sort algorithm.
   - If `c` is 2, calls the `bubble_sort` function to sort the `d` array using the bubble sort algorithm.
   - If `c` is neither 1 nor 2, prints the message "Error".
8. Prints the message "After".
9. Calls the `print_data` function to print the contents of the `d` array after sorting.
10. Returns 0 to indicate successful program execution.

### `functionfile.c`
This file contains the implementations of various functions used in the program. It includes the header file `headerfile.h` to access the function prototypes and the `struct data` definition. The functions implemented in this file are:

- `read_data`: This function takes a pointer to a character array (`char*`) representing the file name and a pointer to an array of `struct data` as parameters. It opens the specified file for reading, reads the data from the file into the `struct data` array, and returns the number of elements read. If the file is not found or if there are too many data points, appropriate error messages are displayed.

- `selection_sort`: This function takes a pointer to an array of `struct data` and an integer representing the number of elements in the array as parameters. It performs the selection sort algorithm on the array, sorting the elements based on the `key` field in ascending order.

- `search_min`: This function takes a pointer to an array of `struct data`, an integer representing the starting index for searching, and an integer representing the ending index for searching as parameters. It searches for the minimum `key` value within the specified range and returns the index of the minimum element.

- `bubble_sort`: This function takes a pointer to an array of `struct data` and an integer representing the number of elements in the array as parameters. It performs the bubble sort algorithm on the array, sorting the elements based on the `key` field in ascending order.

- `swap`: This function takes a pointer to an array of `struct data`, and two integers representing the indices of the elements to be swapped as parameters. It swaps the elements at the specified indices in the array.

- `print_data`: This function(continued)

takes a pointer to an array of `struct data` and an integer representing the number of elements in the array as parameters. It prints the `key` value, `data1`, `data2`, and `data3` values for each element in the array.

### `headerfile.h`
This file contains the function prototypes and the definition of the `struct data` used in the program. It includes the necessary header files and defines the following:

- Function prototypes for `selection_sort`, `bubble_sort`, `search_min`, `swap`, `read_data`, and `print_data`.

- The definition of the `struct data`, which consists of an integer `key` and three double precision floating-point variables `data1`, `data2`, and `data3`.

## Usage
1. Ensure that the `data.csv` file is present in the same directory as the executable.
2. Compile and run the program.
3. The program will prompt you to enter either 1 or 2 to select the sorting algorithm.
   - Enter 1 to perform selection sort.
   - Enter 2 to perform bubble sort.
4. The program will display the contents of the `d` array before and after sorting, based on your selection.

Note: Ensure that the necessary dependencies and libraries are properly linked while compiling the code.

## Dependencies
- The `stdio.h` header file is required for input/output operations.
- The `headerfile.h` header file contains the function prototypes and the `struct data` definition.

## Limitations
- The program assumes that the CSV file (`data.csv`) is formatted correctly and contains the expected number of data points.
- The program limits the number of elements to 1000 in the `struct data` array (`d`).
- The program does not handle cases where the file is empty or contains incorrect data.
- The program does not handle memory allocation errors.

Please ensure that the CSV file is correctly formatted and contains valid data for proper program execution.
