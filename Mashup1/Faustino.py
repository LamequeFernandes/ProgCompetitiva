var = 0

nLinhas = int(input())
x = 0
i = 0

while i < nLinhas:
   entrada = input()
   if entrada == "++X" or entrada == "X++":
      x = x + 1
   if entrada == "--X" or entrada == "X--":
      x = x - 1
   i = i + 1

print(int(x))
