a = ["ferarri", "lamborghini", "porsche", "bmw"]
# a = [0,            1,          2,         3]

# akses dengan cara irisan
# irisan = a[0:3] # sama seperti mengakses semua index
# irisan = a[:1] # sama seperti mengakses index 0
# irisan = a[1:] # mengakses index 1 (lamborghini) sampai index terakhir
# irisan = a[:] # mengakses semua index

# a[2:3] = ["bmw", "audi"]  # mengubah porsche menjadi bmw dan audi dan menghapus porsche
# a[3:] = []  # menghapus index 3 sampai index terakhir (menghapus audi)

# a.append("bugatti") # menambah item di akhir list
# a.pop()  # menghapus item terakhir
# a.remove("ferarri")  # menghapus item tertentu

# a.insert(1, "tesla")  # menambah item di index tertentu
# del a[1] # menghapus item di index tertentu
# del a[1:2]  # menghapus item yang di index 1 sama index 2 (lamborghini)

print(a.sort())
