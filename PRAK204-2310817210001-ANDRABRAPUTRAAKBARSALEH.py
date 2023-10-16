pi = 22 / 7
r = float(input(""))
h = float(input(""))
v = pi * r * r * h
l = (2 * pi * r * h) + (2 * pi * r * r)
k = 2 * pi * r
print("Volume = {:.2f}".format(v))
print("Luas = {:.2f}".format(l))
print("Keliling = {:.2f}".format(k))

r, h = map(int, input("").split())
v = pi * r * r * h
l = (2 * pi * r * h) + (2 * pi * r * r)
k = 2 * pi * r
print("Volume = {:.2f}".format(v))
print("Luas = {:.2f}".format(l))
print("Keliling = {:.2f}".format(k))