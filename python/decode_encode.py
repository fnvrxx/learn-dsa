# penggabungan string
a = ["neet", "code", "is"]


def decode(self, strs):
    # length = len(strs)
    res = ""
    for i in range(len(strs)):
        res += str(len(strs[i])) + "#" + strs[i]
        # res = res + str(len(strs)) + "#" + a[i]
        print(res)
    return res


a = decode(0, a)
print(a)


def encode(self, s):
    res, i = [], 0
    while i < len(a):
        j = i
        while a[j] != "#":
            j += 1
        length = int(str(a[i:j]))
        res.append(str(a[j + 1 : j + 1 + length]))
        i = j + 1 + length
        print(res)
    return res


print(encode(0, a))
