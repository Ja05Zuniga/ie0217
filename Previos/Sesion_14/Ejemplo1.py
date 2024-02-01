import pandas as pd

data = {
    "Name": ["Braund, Mr. Owen Harris", "Allen, Mr. William Henry", "Bonnell, Miss. Elizabeth"],
    "Age": [22, 35, 58],
    "Sex": ["male", "male", "female"]
}

df = pd.DataFrame(data)
print (df)

ages = pd.Series([22, 35, 58], name = "Age")
print(df["Age"].max())
print(ages.max())
df.describe()