# Binary Code

**Binary code** serves as the fundamental language of computers, enabling the representation of text, processor instructions, and data through a system reliant on just two symbols: 0 and 1. 

Each individual digit within binary code is termed a "bit," with a sequence of eight bits forming a "byte." This byte holds the equivalent of 2^8 possible values, highlighting the incredible versatility of binary notation.

To break it down:

```c - 1 bit = 2 possible values
    - 2 bits = 4 possible values
    - 3 bits = 8 possible values
    - 4 bits = 16 possible values
    - 8 bits = 256 possible values 

```
Multiples of Binary Code: Understanding Digital Storage
---
- **1 Kilobyte (1 kB)**: Equals 1024 bytes or 2^10 bytes.
  
- **1 Megabyte (1 MB)**: Corresponds to 1024 kilobytes (kB) or 2^10 kB, which is equivalent to 2^20 bytes.

- **1 Gigabyte (1 GB)**: Comprises 1024 megabytes (MB) or 2^10 MB, amounting to 2^30 bytes or 2^33 bits.

- **1 Terabyte (1 TB)**: Consists of 1024 gigabytes (GB) or 2^40 bytes, translating to 2^43 bits.

![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/dc605dd1-17c1-4398-a623-3b292ac0bed6)

Advantages and Disadvantages of Binary Code:
---
**Advantages:**

Simplicity in Circuit Design: Binary circuits are relatively straightforward to design and implement.

Efficiency in Arithmetic Operations: While arithmetic operations in binary may require more steps, they are conceptually simpler compared to other numeral systems. 

![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/33ea4509-fb20-43f6-aa2d-3416f6259891)

**Disadvantages:**

Lengthy Representation: Binary numbers tend to be longer than their decimal counterparts due to the base-2 nature of the system. This elongated representation can increase the complexity of data storage and transmission.

Human Interpretation Difficulty:  Unlike decimal or other numeral systems, binary representation does not align intuitively with human cognition, making it less user-friendly for non-computational tasks.

![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/ad94f8ce-caff-45a8-981b-5c9f122c2f23)

Hexadecimal
---
**Hexadecimal**, is a base-16 numeral system that uses sixteen distinct symbols to represent values. In addition to the digits 0 through 9, hexadecimal uses the letters A through F to represent values greater than 9. 

![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/305d4c42-1afb-420b-bf3e-6ddada46500b)

Bynary to decimal
---
Converting binary numbers to decimal involves a straightforward process. Each digit in a binary number represents a power of 2, starting from the rightmost digit, which represents \(2^0\), then the next digit represents \(2^1\), 


1. Write down the binary number.
2. Starting from the rightmost digit, assign each digit a power of 2 based on its position from right to left.
3. Multiply each binary digit by its corresponding power of 2.
4. Sum up all the products to get the decimal equivalent.

![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/6656d451-d958-4231-886e-4bcb85d0b902)

Decimal to binary
---

Converting a decimal number to binary involves dividing the decimal number by 2 repeatedly and noting the remainders. 

1. Start with the decimal number you want to convert.
2. Divide the decimal number by 2.
3. Note the remainder (either 0 or 1), this is the least significant bit (LSB).
4. Continue dividing the quotient by 2 and noting the remainders until the quotient becomes 0.
5. The sequence of remainders, read from bottom to top, gives you the binary representation of the decimal number.

![image](https://github.com/ahong2006/J25-PROGRAMMING/assets/124577520/2ced9f2c-6c2d-4cd0-91a8-83f26e5bdabd)

Bynary to hexa decimal
---
Converting binary to hexadecimal involves grouping the binary digits into sets of four and then converting each group to its corresponding hexadecimal digit. Here's a step-by-step guide:

1. Start with the binary number you want to convert.
2. Group the binary digits into sets of four, starting from the right.
3. If the leftmost group has fewer than four digits, add leading zeros to make it a complete group.
4. Convert each group of four binary digits to its corresponding hexadecimal digit using the following conversion table:

| Binary | Hexadecimal |
|--------|-------------|
| 0000   | 0           |
| 0001   | 1           |
| 0010   | 2           |
| 0011   | 3           |
| 0100   | 4           |
| 0101   | 5           |
| 0110   | 6           |
| 0111   | 7           |
| 1000   | 8           |
| 1001   | 9           |
| 1010   | A           |
| 1011   | B           |
| 1100   | C           |
| 1101   | D           |
| 1110   | E           |
| 1111   | F           |

5. Write down the hexadecimal digits obtained from each group of four binary digits, from left to right.

