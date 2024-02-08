import requests

# Ejemplo de solicitud GET con parámetros de siempre
payload_get = {'clave1': 'valor1', 'clave2': 'valor2'}
response_get = requests.get('https://ejemplo.com/ruta', params=payload_get)
#Devuelve una respuesta
print("Respuesta GET:")
print(response_get.text)

# Ejemplo de solicitud POST con datos en formato de formulario
payload_post_form = {'usuario': 'juan', 'contrasena': 'secreta'}
response_post_form = requests.post('https://ejemplo.com/login', data=payload_post_form)
#Devuelve una respuesta
print("Respuesta POST (form):")
print(response_post_form.text)

# Ejemplo de solicitud POST con datos en formato JSON
payload_post_json = {'usuario': 'juan', 'contrasena': 'secreta'}
response_post_json = requests.post('https://ejemplo.com/login', json=payload_post_json)
#Devuelve una respuesta
print("Respuesta POST (JSON):")
print(response_post_json.text)
