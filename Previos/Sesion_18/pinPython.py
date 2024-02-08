import requests

# Realizar una solicitud GET a la URL proporcionada
response = requests.get('https://jsonplaceholder.typicode.com/todos/1')

# Imprimir el tipo de objeto de respuesta
print("Tipo de respuesta:", type(response))

# Imprimir toda la respuesta (objeto Response)
print("Respuesta completa:", response)

# Imprimir el contenido de la respuesta en formato .text
print("Contenido de la respuesta (texto):", response.text)

# Imprimir atributos de respuesta
print("Atributos de la respuesta:")
print(" - Estado de la respuesta:", response.status_code)
print(" - Cabeceras de la respuesta:", response.headers)
print(" - URL de la respuesta:", response.url)
