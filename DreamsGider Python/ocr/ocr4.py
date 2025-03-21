import pytesseract
from PIL import Image
import os
from pdf2image import convert_from_path
import csv

try:
    # Set Tesseract path (replace with your actual path)
    pytesseract.pytesseract.tesseract_cmd = r'C:\Users\USER\Desktop\DreamsGider Python\tesseract.exe'

    # Specify the image or PDF file
    file_path = 'tanmay_page-0001.jpg'  # Change this to your image or PDF file

    # Prepare a list to hold the extracted text
    extracted_text = []

    # Check if the file is a JPEG, PNG, or PDF
    if file_path.lower().endswith(('.png', '.jpg', '.jpeg')):
        # Read the image
        img = Image.open(file_path)

        # Perform OCR with optional language parameter
        text = pytesseract.image_to_string(img, lang='eng')

        # Append extracted text to the list
        extracted_text.append([text])  # Store as a list for CSV

    elif file_path.lower().endswith('.pdf'):
        # Convert PDF to images
        images = convert_from_path(file_path)

        # Iterate through each image (each page of the PDF)
        for i, img in enumerate(images):
            # Perform OCR on each image
            text = pytesseract.image_to_string(img, lang='eng')

            # Append extracted text for each page to the list
            extracted_text.append([f"Text from page {i + 1}:\n{text}"])  # Store as a list for CSV

    else:
        print("The file is not a valid image or PDF type. Please provide a PNG, JPEG, or PDF file.")

    # Write the extracted text to a CSV file
    with open('extracted_text.csv', mode='w', newline='', encoding='utf-8') as csv_file:
        writer = csv.writer(csv_file)
        writer.writerow(['Extracted Text'])  # Write header
        writer.writerows(extracted_text)  # Write the extracted text

    print("Text extraction complete. The extracted text has been saved to 'extracted_text.csv'.")

except Exception as e:
    print(f"An error occurred during OCR: {e}")