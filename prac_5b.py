n = int(input())
a = list(map(int, input().split()))
x = int(input())
d = [abs(i-x) for i in a]

print(x-min(d) if x-min(d) in a else min(d)+x)

