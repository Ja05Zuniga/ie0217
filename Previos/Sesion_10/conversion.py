int_num = 12
float_num=12.3
#No nos preocupamos por int y float
num = int_num + float_num
print('No nos preocupamos por int y float')
print('Tipo de dato ',type(num))
print('Resultado ',num)


#Conversion implicita. No se puede sumar un int o float con string
print('Conversion implicita. No se puede sumar un int o float con string')
string_num = '22'
num1 = 12

num_resul = int(string_num) + num1
print ('Resultado ', num_resul)