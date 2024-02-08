import requests

response = requests.get('https://jsonplaceholder.typicode.com/todos/1')

print("Código de estado HTTP:", response.status_code)
print("Cabeceras de la respuesta:")
print(response.headers)

# Imprimir el contenido JSON si la respuesta es JSON
try:
    json_response = response.json()
    print("Contenido JSON de la respuesta:")
    print(json_response)
except ValueError:
    print("La respuesta no es JSON")

try:
    response_error = requests.get('https://ejemplo.com/pagina-inexistente')
    response_error.raise_for_status()  #si hay un error HTTP
    print("Contenido de la respuesta:")
    print(response_error.text)
except requests.exceptions.HTTPError as err:
    print(f"Error HTTP: {err}")
