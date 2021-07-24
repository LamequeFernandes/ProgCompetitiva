
comprimentoSequencia = int(input())
sequencia = input()
y = len(sequencia)

i = 0
if len(sequencia) == comprimentoSequencia:
   while i < comprimentoSequencia - 1:
         if (sequencia[i:i+2] == "RU" or sequencia[i:i+2] == "UR"):
            y = y - 1
            i = i + 1
         i = i + 1
print(y)