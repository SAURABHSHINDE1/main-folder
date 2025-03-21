import pytesseract
from PIL import Image

try:
    # Set Tesseract path (replace with your actual path)
    pytesseract.pytesseract.tesseract_cmd = r'C:\Users\USER\Desktop\dreamsguider.com\DreamsGider Python\tesseract.exe'

    # Read the image
    img = Image.open('Screenshot (82).png')

    # Perform OCR with optional language parameter
    text = pytesseract.image_to_string(img, lang='eng')
 
    # Print extracted text
    print(text)
except Exception as e:
    print(f"An error occurred during OCR: {e}")