
# Collatz Sequence

The Collatz Sequence, also known as the 3n+1 problem, is an intriguing mathematical sequence. The sequence is defined as follows:

- Start with any positive integer `n`.
- If `n` is even, divide it by 2 to get `n/2`.
- If `n` is odd, multiply it by 3 and add 1 to get `3n+1`.
- Repeat the process, generating a new `n`, until `n` becomes 1.

This repository provides a C code implementation to calculate the Collatz Sequence for a given positive integer and find the length of the sequence.
Included an automated tester when you can set how many times you want to test the software!
## Usage

1. Clone the repository to your local machine:

   ```shell
   git clone https://github.com/your-username/collatz-sequence.git
   ```

2. Compile the C code using a C compiler:

   ```shell
   gcc collatz.c -o collatz
   ```

3. Run the program:

   ```shell
   ./collatz
   ```

4. Enter a positive integer when prompted.

5. The program will calculate the Collatz Sequence for the entered number, display each step of the sequence, and output the length of the sequence.

## Example

Let's consider an example to illustrate the functionality of this program.

Suppose we want to find the Collatz Sequence for the number 6.

- The sequence for 6 would be: 6 -> 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1.

- The length of this sequence is 9.

In this case, the program would output the following:

```
Enter a positive integer: 6

Collatz sequence:
6 3 10 5 16 8 4 2 1

Longest sequence length: 9
Starting number for longest sequence: 6
```

## Contributing

Contributions to improve this project are welcome! If you find any bugs, have suggestions, or would like to add new features, please open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).
