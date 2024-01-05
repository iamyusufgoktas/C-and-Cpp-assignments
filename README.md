# 1-Complex Number Operations in C
 This C program showcases basic operations on complex numbers, including addition, subtraction, and multiplication. The code defines a Complex structure, implements functions for each operation, and prompts users to input real and imaginary parts of two complex numbers for computation.

## How to Use

1. Compile the code using a C compiler.
2. Run the executable.
3. Enter the real and imaginary parts as prompted.
4. View the results of complex number operations.

# 2-Record Deletion in C
This C code demonstrates a simple record deletion mechanism for managing book information stored in a file. The program allows users to delete a book record by entering the book ID. It utilizes file handling to read from and write to files, providing a basic example of file manipulation in C.


## Key Features:
* Structured Data: Defines a structure (struct Book) to represent book information.
* File Handling: Utilizes file operations (fopen, fwrite, fread, fclose, remove, rename) for reading, writing, and manipulating files.
* User Interaction: Prompts the user to input a book ID for deletion.
* Record Processing: Reads records from the input file, skips the record to be deleted, and writes the remaining records to a temporary file.
* File Replacement: Removes the original file and renames the temporary file to update the book information.

## How to Use:
1. Compile the code using a C compiler.
2. Run the executable.
3. Follow on-screen prompts to enter the book ID for deletion.
4. The program updates the file, removing the specified record.



# 3-Area Calculation in C++

This C++ program exemplifies area calculation by computing and displaying the areas of a rectangle and a cone. The program prompts users to input dimensions, utilizes class inheritance, and employs mathematical formulas to determine the areas of the geometric shapes.

## Key Features:
* Class Inheritance: Utilizes class inheritance to create Rectangle and Cone classes derived from a base class area_c1.
* User Input: Prompts users to input dimensions (height and width) for the geometric shapes.
* Mathematical Formulas: Applies mathematical formulas for area calculation of both a rectangle and a cone.
* Error Handling: Ensures that users provide valid numeric input, prompting for re-entry if characters are entered.
* Clear Output: Provides clear and formatted output for the calculated areas of the rectangle and cone.

## How to Use:
1. Compile the code using a C++ compiler.
2. Run the executable.
3. Follow on-screen prompts to input dimensions for the rectangle and cone.
4. The program calculates and displays the areas of the geometric shapes.



# 4-Input Validation in C++ with Exception Handling
Explore a C++ program showcasing input validation for user-provided information, including name, surname, and student number. The code employs custom functions, hasNumber and hasChar, to check for numeric or character elements in the input. Exception handling with runtime_error is utilized to guide the user through re-entering valid information.

## Key Features:
* Input Validation: Ensures user-provided information meets specific criteria.
* Custom Functions: Implements hasNumber and hasChar functions to check for numeric or character elements.
* Exception Handling: Uses runtime_error exceptions to handle input validation errors gracefully.
* Interactive User Experience: Prompts the user to re-enter specific information upon detection of invalid input.
* Clear Output: Prints the collected user information once valid inputs are provided.

## How to Use:
1. Compile the code using a C++ compiler.
2. Run the executable.
3. Follow on-screen prompts to enter name, surname, and student number.
4. If invalid input is detected, error messages guide the user to re-enter specific information.
