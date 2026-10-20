value = 1
for letter in "abcdefghijklmnopqrstuvwxyz":
    for index in range(100):
        globals()[f"{letter}{index}"] = value
        value += 1

print(a0, a99, b0, z99)
assert (a0, a99, b0, z99) == (1, 100, 101, 2600)
