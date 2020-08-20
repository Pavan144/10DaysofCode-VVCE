import os
import sys

def equalStacks(h1, h2, h3):
    stk1, stk2, stk3 = map(sum, (h1, h2, h3))
   
    while h1 and h2 and h3:
        a = min(stk1, stk2, stk3)

        if stk1 == stk2 == stk3: 
            return stk1
        
        while stk1 > a: 
            stk1 = stk1-h1.pop(0)
        while stk2 > a: 
            stk2 = stk2-h2.pop(0)
        while stk3 > a: 
            stk3 = stk3-h3.pop(0)
        
    return 0
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n1N2N3 = input().split()

    n1 = int(n1N2N3[0])

    n2 = int(n1N2N3[1])

    n3 = int(n1N2N3[2])

    h1 = list(map(int, input().rstrip().split()))

    h2 = list(map(int, input().rstrip().split()))

    h3 = list(map(int, input().rstrip().split()))

    result = equalStacks(h1, h2, h3)

    fptr.write(str(result) + '\n')

    fptr.close()
