a = "Hello world"
print(a, id(a))

b = a
print(b, id(b))

a += " and goodbye"
print(a, id(a))
print(b, id(b))
