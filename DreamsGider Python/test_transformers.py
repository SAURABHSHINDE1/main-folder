from transformers import pipeline

# Text Generation
text_generator = pipeline("text-generation")
prompt = "Once upon a time, there was a brave knight..."
generated_text = text_generator(prompt)
print(generated_text[0]["generated_text"])
