import mysql.connector

covid19 = mysql.connector.connect(
  host="localhost",
  user="root",
  passwd=""
)

print(covid19)