import random
import math

# p = 11
# q = 3

# # //multiplication of two large prime numbers;
# # //first part of public key;
# n = int(p * q)

# # second part of public key
# phi = int((p - 1) * (q - 1))
# print("phi = ", phi)
# exp = 2

# while (exp < phi):
#     if (math.gcd(exp, phi) == 1):
#         break
#     else:
#         exp += 1

# print("exp = ", exp)
# # finally
# public_key = (n, exp)

# # private key

# k = 2
# d = 7
# print("d = ", d)

# private_key = (d, n)

# message = 7
# print("message:\t", message)
# # encryption
# a = message ** exp
# c = int(a % n)
# print("cipher text:\t", c)

# b = c ** d
# print("b = ", b)
# dec = int(b % n)
# print("decrypted text:\t", dec)

