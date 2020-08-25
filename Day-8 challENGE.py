#!/bin/python3

import os
import sys

p=[2]

def prime(x):
        for i in range(2, int(x ** .5) +1):
            if not x % i: return False
        return True

def sillyGame(n):
    bprime = p[-1]
    if n > bprime:
        for i in range(bprime+1, n+1):
            if prime(i): p.append(i)
    return 'Alice' if sum(i <= n for i in p) % 2 else 'Bob'    

   
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    g = int(input())

    for g_itr in range(g):
        n = int(input())

        result = sillyGame(n)

        fptr.write(result + '\n')

    fptr.close()
