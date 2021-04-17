#  install: pip install textblob
from textblob import TextBlob
from pathlib import Path
locale = Path('./file.txt')

if locale.exists():
    file = open('file.txt', 'r')
    file_translation = open('file_translation', 'w')
    language = input("Enter the acronym of the translation language (ex: en, es): ")
    strs = [i for i in file.readlines()]
    for i in strs:
        file_translation.writelines(str(TextBlob(i).translate(to=language)) + '\n')

    print("File translation with success!")
else:
    print("File nonexistent.")

file.close()
file_translation.close()



