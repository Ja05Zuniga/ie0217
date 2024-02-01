import pandas as pd

# Lee el conjunto de datos titanic desde un archivo CSV
titanic = pd.read_csv("data/titanic.csv")

# Guarda el conjunto de datos como un archivo Excel
titanic.to_excel("titanic.xlsx", sheet_name="pasajeros", index=False)

# Muestra las primeras 8 filas del DataFrame "titanic"
titanic.head(8)

# Muestra los tipos de datos de cada columna en el DataFrame "titanic"
titanic.dtypes

# Guarda el DataFrame "titanic" como un archivo Excel
titanic.to_excel("titanic.xlsx", sheet_name="pasajeros", index=False)

# Lee el DataFrame desde el archivo Excel
titanic = pd.read_excel("titanic.xlsx", sheet_name="pasajeros")

# Muestra información sobre "titanic"
titanic.info()

# Lee el conjunto de datos del Titanic desde un archivo CSV
titanic = pd.read_csv("data/titanic.csv")

# Muestra las primeras filas del DataFrame "titanic"
titanic.head()

# Imprime el tipo de objeto de la serie "Age"
age = type(titanic["Age"])
print(age)

type(titanic["Age"])
titanic["Age"].shape 
#la Serie "Age" tiene 891 elementos y es unidimensional. 
#La coma después del 891 indica que se trata de una tupla de un solo valor.
(891,)

age_sex = titanic[["Age", "Sex"]]
age_sex.head()
type(titanic[["Age", "Sex"]])
titanic["Age", "Sex"].shape 
(891,2)

above_35 = titanic[titanic["Age"]>35]
above_35.shape
(217,12)

# Método 1: Utilizando el método isin()
class_23 = titanic[titanic["Pclass"].isin([2, 3])]

# Método 2: Utilizando operadores lógicos (| para "o")
class_23_alt = titanic[(titanic["Pclass"] == 2) | (titanic["Pclass"] == 3)]

# Filtra las filas donde la columna "Age" no tiene valores nulos
age_no_na = titanic[titanic["Age"].notna()]
age_no_na.shape (714, 12)

#Filtrar nombres de pasajeros mayores de 35 años
adult_names = titanic.loc[titanic["Age"] > 35, "Name"]

#Seleccionar un rango específico de filas y columnas usando iloc
titanic.iloc[9:25, 2:5]

#Asignar un valor específico a un conjunto de celdas usando iloc
titanic.iloc[0:3, 3] = "anonymous"

air_quality = "es un DataFrame ya existente"
# Asigna la columna "station_london" multiplicada por 1.882 a una nueva columna "london_mg_per_cubic"
air_quality["london_mg_per_cubic"] = air_quality["station_london"] * 1.882

# Calcula el ratio entre las columnas "station_paris" y "station_antwerp" y asigna el resultado a la nueva columna "ratio_paris_antwerp"
air_quality["ratio_paris_antwerp"] = air_quality["station_paris"] / air_quality["station_antwerp"]

# Renombra las columnas del DataFrame "air_quality"
air_quality_renamed = air_quality.rename(
    columns={
        "station_antwerp": "BETR801",
        "station_paris": "FR04014",
        "station_london": "London Westminster"
    }
)

# Convierte los nombres de las columnas a minúsculas en el DataFrame renombrado
air_quality_renamed = air_quality_renamed.rename(columns=str.lower)

# Calcular la media de la columna "Age"
titanic["Age"].mean()

# Calcular la mediana de las columnas "Age" y "Fare"
titanic[["Age", "Fare"]].median()

# Obtener estadísticas descriptivas para las columnas "Age" y "Fare"
titanic[["Age", "Fare"]].describe()

# Calcular estadísticas agregadas para las columnas "Age" y "Fare"
titanic.agg(
    {
        "Age": ["min", "max", "median", "skew"],
        "Fare": ["min", "max", "median", "mean"]
    }
)

# Calcular la media de la columna "Age" agrupada por género
titanic[["Sex", "Age"]].groupby("Sex").mean()

# Calcular la tarifa media agrupada por género y clase
titanic.groupby(["Sex", "Pclass"])["Fare"].mean()

# Calcular la media de todas las columnas numéricas agrupada por género
titanic.groupby("Sex").mean(numeric_only=True)

# Calcular la media de la columna "Age" y "Sex" por género
titanic[["Sex", "Age"]].groupby("Sex").mean()

#contar la cantidad de pasajeros en cada clase ("Pclass") del DataFrame "titanic"
titanic["Pclass"].value_counts()
titanic.groupby("Pclass")["Pclass"].count()

# Sortear el DataFrame "titanic" por la columna "Age" de forma ascendente y mostrar las primeras filas
titanic.sort_values(by="Age").head()

# Sortear el DataFrame "titanic" por las columnas "Pclass" y "Age" de forma descendente y mostrar las primeras filas
titanic.sort_values(by=['Pclass', 'Age'], ascending=False).head()

# Filtrar las mediciones de dióxido de nitrógeno (NO2) en el DataFrame "air_quality"
no2 = air_quality[air_quality["parameter"] == "no2"]

# Ordenar y agrupar las mediciones de NO2 por ubicación y mostrar las primeras 2 filas de cada grupo
no2_subset = no2.sort_index().groupby(["location"]).head(2)

# Pivota el DataFrame "no2_subset" con "location" como columnas y "value" como valores
no2_subset.pivot(columns="location", values="value")

# Crea una tabla pivote con valores promedio (mean)
air_quality.pivot_table(
    values="value",
    index="location",
    columns="parameter",
    aggfunc="mean"
)

air_quality.pivot_table(
    values="value",
    index="location",
    columns="parameter",
    aggfunc="mean",
    margins=True,
)

no2_pivoted= 'es el DataFrame con la tabla pivote existente'

no_2 = no2_pivoted.melt (id_vars="date.utc")
no2 = no2_pivoted.melt(
    id_vars="date.utc",
    value_vars=["BETR801", "FR04014", "London Westminster"],
    value_name="NO_2",
    var_name="id_location"
)
#Cargar los conjuntos de datos para NO2 y PM2.5:
#Seleccionar columnas específicas de interés

air_quality_no2 = pd.read_csv("data/air_quality_no2_long.csv", parse_dates=True)
air_quality_no2 = air_quality_no2[["date.utc", "location", "parameter", "value"]]


air_quality_pm25 = pd.read_csv("data/air_quality_pm25_long.csv", parse_dates=True)
air_quality_pm25 = air_quality_pm25[["date.utc", "location", "parameter", "value"]]

#Concatenar los conjuntos de datos:
air_quality = pd.concat([air_quality_pm25, air_quality_no2], axis=0)

#Ordenar el DataFrame por la columna "date.utc"
air_quality = air_quality.sort_values("date.utc")
