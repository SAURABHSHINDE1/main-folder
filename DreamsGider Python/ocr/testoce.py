import pytesseract
from PIL import Image
import os
from pdf2image import convert_from_path

def perform_ocr_on_pdf(file_path):
    """Convert PDF to images and perform OCR on each page."""
    try:
        # Convert PDF to images
        images = convert_from_path(file_path)
        for i, img in enumerate(images):
            # Perform OCR on each image
            text = pytesseract.image_to_string(img, lang='eng')
            print(f"Text from page {i + 1}:\n{text}\n")
            img.close()  # Close the image to free resources

    except Exception as e:
        print(f"An error occurred during OCR on PDF: {e}")

def main(file_path):
    try:
        # Set Tesseract path (replace with your actual path)
        pytesseract.pytesseract.tesseract_cmd = r'C:\Users\USER\Desktop\dreamsguider.com\DreamsGider Python\tesseract.exe'

        # Check if the file exists
        if not os.path.isfile(file_path):
            print(f"The file {file_path} does not exist.")
            return

        # Check if the file is a PDF
        if file_path.lower().endswith('.pdf'):
            perform_ocr_on_pdf(file_path)
        else:
            print("The file is not a valid PDF type. Please provide a PDF file.")

    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    file_path = 'spotify final documentation4.pdf'  # Change this to your PDF file
    main(file_path)