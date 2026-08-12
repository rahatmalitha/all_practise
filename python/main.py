from collections import Counter

text = "Hello world hi guys Hello"
freq = Counter(text.split())
print(freq)