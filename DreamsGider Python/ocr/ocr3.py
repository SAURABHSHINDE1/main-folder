import pytesseract
from PIL import Image
import os
from pdf2image import convert_from_path

try:
    # Set Tesseract path (replace with your actual path)
    pytesseract.pytesseract.tesseract_cmd = r'C:\Users\USER\Desktop\DreamsGider Python\tesseract.exe'

    # Specify the image or PDF file
    file_path = 'tanmay_page-0001.jpg'  # Change this to your image or PDF file

    # Check if the file is a JPEG, PNG, or PDF
    if file_path.lower().endswith(('.png', '.jpg', '.jpeg')):
        # Read the image
        img = Image.open(file_path)

        # Perform OCR with optional language parameter
        text = pytesseract.image_to_string(img, lang='eng')

        # Print extracted text
        print(text)

    elif file_path.lower().endswith('.pdf'):
        # Convert PDF to images
        images = convert_from_path(file_path)

        # Iterate through each image (each page of the PDF)
        for i, img in enumerate(images):
            # Perform OCR on each image
            text = pytesseract.image_to_string(img, lang='eng')

            # Print extracted text for each page
            print(f"Text from page {i + 1}:\n{text}\n")

    else:
        print("The file is not a valid image or PDF type. Please provide a PNG, JPEG, or PDF file.")

except Exception as e:
    print(f"An error occurred during OCR: {e}") 