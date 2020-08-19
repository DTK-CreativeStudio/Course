import pymysql.cursors

word = input()[:16]

conn = pymysql.connect(host='localhost',
                       user='root',
                       password='',
                       db='ku_db',
                       charset='utf8',
                       cursorclass=pymysql.cursors.DictCursor)
cursor = conn.cursor()
sql = "select * from student_tb where NAME='"
sql += word + "'"
cursor.execute(sql)
data = cursor.fetchall()
conn.close()

print('名前|年齢'.rjust(17))
for d in data:
    print(str(d['NAME']).rjust(16) + '|' + str(d['AGE']).rjust(3))
