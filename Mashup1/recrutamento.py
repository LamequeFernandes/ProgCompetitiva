nEventos = int(input())
i = 0
umOuMenosUm = []

valores = list(map(int, input('Digite os valores: ').split()))

while i < nEventos:
   num = int(input(), end=" ")
   if num <= 10:
      umOuMenosUm.append(num)
   i = i + 1

i = 0
x = 0
if umOuMenosUm[0] == -1:
   x = 1
if umOuMenosUm[len(umOuMenosUm)-1] == -1:
   x = x + 1
while i <= len(umOuMenosUm):
   if umOuMenosUm[i] == -1 and umOuMenosUm[i+1] == -1:
      x = x + 1
print(x)


   
