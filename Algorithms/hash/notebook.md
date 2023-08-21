# Hash

## Rolling Hash (Polinomial Hash)

In substrings problems, one solution may be rolling hashes, which is a algorithm who can minimize the comparisons of substrings from O(n+m) to O(n).

### Problems

Some problems involving rolling hashes.

#### Quasi-Palindrome

This problem gives you a string, and you need to verify if the difference of values after inverting the string is equal to 1 (almost palindrome), and you need to verify all the substrings in order to verify how much quasi-palindromes exist.

The ideia is to adapt the Manecher algorithm, which calculates the longest palindrome in O(n)

However, starting from the center of each letter, we will have to find the longest palindrome within that letter, and after that, we jump one letter and start finding the next palindrome. With this, and using hash to compare the substrings, we will find the answer.

#### Beautiful Words

ICPC problem. Need to solve them later.


## Double Hash

This algorithm uses a pair of two different hashes to expand the size of a hash. If you make a hash using different mods, you can make your hash mod1*mod2 size.

This decreases the possiblity of finding a collision in the testcases.


