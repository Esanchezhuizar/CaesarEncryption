# CaesarEncryption
Program encrypts messages using Caesar’s cipher

Caesar’s algorithm encrypts messages by “rotating” each letter by k positions. More formally, if p is some plaintext (i.e., an unencrypted message), pi is the ith character in p, and k is a secret key (i.e., a non-negative integer), then each letter, ci, in the ciphertext, c, is computed as

ci = (pi + k) % 26

wherein % 26 here means “remainder when dividing by 26.” 
