data = []
while len(data)<8:
    data.extend(map(int, input().split()))

p1, q1, p2, q2, p3, q3, p4, q4 = data

if q1 < 0:
    p1, q1 = -p1, -q1
if q2 < 0:
    p2, q2 = -p2, -q2
if q3 < 0:
    p3, q3 = -p3, -q3
if q4 < 0:
    p4, q4 = -p4, -q4

left = (p1 * q2 + p2 * q1) * q3 * q4
right = (p3 * q4 + p4 * q3) * q1 * q2

if left > right:
    print(1)
elif left < right:
    print(-1)
else:
    print(0)