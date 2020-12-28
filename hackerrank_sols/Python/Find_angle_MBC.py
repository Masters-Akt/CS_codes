#Kumar Ankit
import math
ab=int(input())
bc=int(input())
mb=math.sqrt(ab*ab + bc*bc)/2
ang=(math.acos((bc)/(2*mb)))
print(round((ang*180)/math.pi),end="")
print("°")
