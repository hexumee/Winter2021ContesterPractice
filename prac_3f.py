n = int(input())
a = []

for i in range(n):
    if i % 2 == 0:
        a.append("a"*n)
    else:
        a.append("b"*n)

for i in range(n//2):
    for j in range(n//2):
        v = list(a[i])
        
        if j % 2 == 0:
            if i % 2 == 0:
                v[j] = '*'
            else:
                v[j] = '.'
        else:
            if i % 2 == 0:
                v[j] = '.'
            else:
                v[j] = '*'
        
        a[i] = "".join(v)

for i in range(n):
    print(a[i])

