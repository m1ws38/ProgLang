a = "Hello world"
b = a
c = a[:]

print("b == a:", b == a)
print("c == a:", c == a)
print("b is a:", b is a)
print("c is a:", c is a)  # деталь реализации, не гарантия языка
