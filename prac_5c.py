n = int(input())
l = list(map(int, input().split()))
s = 0

mxidx = [i for i in range(len(l)) if l[i] == max(l)]
miidx = [i for i in range(len(l)) if l[i] == min(l)]

for i in range(min(miidx[0], mxidx[-1]), max(miidx[0], mxidx[-1])+1):
    if l[i] > 0:
        s += l[i]

print(s)

