from bs4 import BeautifulSoup
import requests

try:
  source =requests.get('https://www.shiksha.com/college/poona-college-of-arts-science-and-commerce-pune-70673/reviews')
  source.raise_for_status()

except Exception as e:
  print(e)