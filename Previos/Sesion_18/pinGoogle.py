import requests

url = "https://www.google.com"

# Realizar una solicitud GET a la URL
response = requests.get(url)

print(response.text)
