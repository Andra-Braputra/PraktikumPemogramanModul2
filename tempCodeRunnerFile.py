import math
A, B = map(int, input("").split())
C = math.sqrt(B * B - A * A)
k = A + B + C
l = A * C / 2
print("Alas = ", C)
print("Tinggi = ", A)
print("Keliling = ", k)
print("Luas =", l, "^2")

A2 = int(input(""))
B2 = int(input(""))
C2 = math.sqrt(B2 * B2 - A2 * A2)
k2 = A2 + B2 + C2
l2 = A2 * C2 / 2
print("Alas = ", C2)
print("Tinggi = ", A2)
print("Keliling = ", k2)
print("Luas =", l2, "^2")
