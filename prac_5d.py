n, m = tuple(map(int, input().split()))
a = []

for i in range(m):
    v = list(map(int, input().split()))
    p = [i for i in range(v[0], v[1]+1)]
    
    for j in v:
        a += p
        
z = list(set(sorted(a)))
print(len(z))

