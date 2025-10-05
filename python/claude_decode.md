```python
# Encode: Mengubah list string menjadi satu string dengan format length#word
def encode(strs):
    res = ""
    for i in range(len(strs)):
        res += str(len(strs[i])) + "#" + strs[i]
    return res

# Decode: Mengubah encoded string kembali menjadi list string
def decode(s):
    res, i = [], 0
    
    while i < len(s):
        j = i
        # Cari posisi '#'
        while j < len(s) and s[j] != "#":
            j += 1
        
        if j >= len(s):  # Jika '#' tidak ditemukan, break
            break
            
        try:
            length = int(s[i:j])  # Ambil angka panjang
            word = s[j + 1 : j + 1 + length]  # Ambil kata sesuai panjang
            res.append(word)
            i = j + 1 + length  # Pindah ke posisi berikutnya
        except (ValueError, IndexError):
            break
    
    return res

# Test
a = ["neet", "code"]
print("Original:", a)

# Encode
encoded = encode(a)
print("Encoded:", encoded)

# Decode
decoded = decode(encoded)
print("Decoded:", decoded)

# Verification
print("Same as original?", a == decoded)
```
