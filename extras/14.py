from collections import defaultdict
test = int(input())
for i in range(test):
    n = defaultdict(lambda:0)
    a, b = int(input()),0
    c = list(map(int, input().split()))
    for j in c:
        n[j] += 1
    for j in n.keys():
        if n[j] % 2 != 0:
            b += 1
    k = len(c) + b
    while k % 4 != 0:
        k += 1
        b += 1
    print(b)