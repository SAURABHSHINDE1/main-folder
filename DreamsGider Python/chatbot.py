
import pandas as pd
from langchain.vectorstores import FAISS
from langchain.embeddings.openai import OpenAIEmbeddings
from langchain.docstore.document import Document
from langchain.chains import RetrievalQA
from langchain.llms import OpenAI

# Load the dataset
data = pd.read_csv('personal_data.csv')
data_dict = data.to_dict(orient='records')

# Create embeddings
embeddings = OpenAIEmbeddings(model="text-embedding-ada-002", openai_api_key="your_openai_api_key")

# Prepare the data for FAISS
documents = [Document(page_content=str(row), metadata=row) for row in data_dict]
vector_store = FAISS.from_documents(documents, embeddings)

# Create a retriever and LLM
retriever = vector_store.as_retriever()
llm = OpenAI(model="text-davinci-003", openai_api_key="your_openai_api_key")

# Create the RAG pipeline
qa_chain = RetrievalQA.from_chain_type(
    llm=llm,
    retriever=retriever,
    chain_type="stuff"
)

# Interact with the chatbot
while True:
    query = input("Ask a question about the data (or type 'exit' to quit): ")
    if query.lower() == 'exit':
        print("Goodbye!")
        break

    response = qa_chain.run(query)
    print(f"Response: {response}")
