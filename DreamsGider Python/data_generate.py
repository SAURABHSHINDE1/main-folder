import random
from faker import Faker
import pandas as pd

# Initialize Faker
fake = Faker()

# Function to generate student data
def generate_students(num_students=200):
    students = []
    majors = ['Computer Science', 'Mathematics', 'Biology', 'Chemistry', 'Physics', 
              'Engineering', 'History', 'Psychology', 'Business', 'Art']
    subjects = ['Mathematics', 'Physics', 'Chemistry', 'Biology', 'Computer Science', 
                'History', 'Psychology', 'Economics', 'Literature', 'Art']
    blood_groups = ['A+', 'A-', 'B+', 'B-', 'AB+', 'AB-', 'O+', 'O-']
    
    for _ in range(num_students):
        student_id = fake.unique.random_int(min=1000, max=9999)
        roll_no = fake.unique.random_int(min=1, max=500)  # Unique roll number
        name = fake.name()
        age = random.randint(18, 25)  # Assuming students are between 18 and 25
        gender = random.choice(['Male', 'Female', 'Non-binary'])
        major = random.choice(majors)
        subject = random.choice(subjects)
        height = round(random.uniform(150, 200), 2)  # Height in cm
        blood_group = random.choice(blood_groups)
        gpa = round(random.uniform(2.0, 4.0), 2)  # GPA between 2.0 and 4.0
        email = fake.email()
        address = fake.address().replace("\n", ", ")  # Replace newline with comma for better formatting
        
        student_info = {
            'Student ID': student_id,
            'Roll No': roll_no,
            'Name': name,
            'Age': age,
            'Gender': gender,
            'Major': major,
            'Subject': subject,
            'Height (cm)': height,
            'Blood Group': blood_group,
            'GPA': gpa,
            'Email': email,
            'Address': address
        }
        
        students.append(student_info)

    return students

# Generate student data
student_data = generate_students()

# Create a DataFrame
df_students = pd.DataFrame(student_data)

# Display the DataFrame
print(df_students)

# Optionally, save to a CSV file
df_students.to_csv('students_data.csv', index=False)