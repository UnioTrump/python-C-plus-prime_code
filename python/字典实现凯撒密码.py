s = 'heoll everyone'
CaesarCode = {}

for vac in range(ord('a') , ord('z') + 1):
    p = chr((vac + 3))
    CaesarCode[chr(vac)] = p
print(CaesarCode)
for c in s:
    print("".join([CaesarCode.get(c , c)]))