x1, y1 = tuple(map(int, input().split()))
x2, y2 = tuple(map(int, input().split()))
x3, y3 = tuple(map(int, input().split()))

print(abs(0.5*((x1*y2*1)+(x2*y3*1)+(y1*x3*1)-(x3*y2*1)-(x1*y3*1)-(x2*y1*1))))

