import random
letters = "abcdefghijklmnopqrstuvwxyz"

message = input("Enter message to encrypt:\t")
cipher = ""


#generating random key
key_elements = [letters[random.randint(0,25)] for letter in message]

key = "".join(key_elements)

print("Generated key:\t", key)

#encryption process
for i in range(len(message)):
    cipherval = letters.index(message[i]) + letters.index(key[i])
    cipher += letters[cipherval % 26]

print("Encrypted Message:\t", cipher)

original = ""

#decryption
for i in range(len(cipher)):
    cipherval = letters.index(cipher[i]) - letters.index(key[i])

    original += letters[cipherval % 26]

if original==message:
    print("Decrypted message matches original.")
