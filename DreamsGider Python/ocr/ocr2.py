import pytesseract
from PIL import Image
import os

try:
    # Set Tesseract path (replace with your actual path)
    pytesseract.pytesseract.tesseract_cmd = r'C:\Users\USER\Desktop\DreamsGider Python\tesseract.exe'

    # Specify the image file
    image_file = 'tanmay_page-0001.jpg'  # Change this to your image file

    # Check if the file is a JPEG or PNG
    if image_file.lower().endswith(('.png', '.jpg', '.jpeg')):
        # Read the image
        img = Image.open(image_file)

        # Perform OCR with optional language parameter
        text = pytesseract.image_to_string(img, lang='eng')

        # Print extracted text
        print(text)
    else:
        print("The file is not a valid image type. Please provide a PNG or JPEG file.")
except Exception as e:
    print(f"An error occurred during OCR: {e}")