from flask import Flask, render_template, request
import mysql.connector

app = Flask(__name__)

# Database connection
db = mysql.connector.connect(
    host="localhost",
    user="root",
    password="mateenbhaipayara",  # Add your MySQL root password
    database="student_db"
)

@app.route('/')
def home():
    return render_template('register.html')

@app.route('/register', methods=['POST'])
def register():
    data = request.get_json()  # ✅ read JSON data instead of form

    first = data.get('firstName')
    last = data.get('lastName')
    gender = data.get('gender')
    email = data.get('email')
    password = data.get('password')
    number = data.get('number')

    cursor = db.cursor()
    sql = "INSERT INTO registration (firstName, lastName, gender, email, password, number) VALUES (%s, %s, %s, %s, %s, %s)"
    val = (first, last, gender, email, password, number)

    try:
        cursor.execute(sql, val)
        db.commit()
        return "<h2 style='color:green;text-align:center;'>Registration Successful!</h2>"
    except Exception as e:
        return f"<h3 style='color:red;text-align:center;'>Error: {e}</h3>"

if __name__ == "__main__":
    app.run(debug=True)
