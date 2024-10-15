# PascasTriangleRecursive
A program to create Pascal's triangle using a recursive binomial coefficient function

## Explaination:

1. `binomialCoefficient`: This is a recursive function that calculates binomial coefficients using the relation:
```
C(n,k)=C(n−1,k−1)+C(n−1,k)
```
The base case is when `k == 0` or `k == n`, in which case the result is 1 (the edges of Pascal's Triangle).

2. `generatePascalsTriangle`: This function calls `binomialCoefficient` recursively to generate each element in Pascal's Triangle for a given number of rows.

