import math
r = float(input(""))
h = float(input(""))
v = round(math.pi * r * r * h)
l = round((2 * math.pi * r * h) + (2 * math.pi * r * r))
k = round(2 * math.pi * r)
print("Volume = {:.2f}".format(v))
print("Luas = {:.2f}".format(l))
print("Keliling = {:.2f}".format(k))

r, h = map(int, input("").split())
v = math.pi * r * r * h
l = (2 * math.pi * r * h) + (2 * math.pi * r * r)
k = 2 * math.pi * r
print("Volume = {:.2f}".format(v))
print("Luas = {:.2f}".format(l))
print("Keliling = {:.2f}".format(k))