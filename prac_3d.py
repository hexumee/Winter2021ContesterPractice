from itertools import *

n = int(input())
p = permutations(range(n), 3)
pb = permutations(range(n), 3)
pc = 0

for it in p:
    if (it[0] > it[1] > it[2]) and sum(it) <= n:
        pc += 1

print(pc)
for i in pb:
    if (i[0] > i[1] > i[2]) and sum(i) <= n:
        print(*list(i))

