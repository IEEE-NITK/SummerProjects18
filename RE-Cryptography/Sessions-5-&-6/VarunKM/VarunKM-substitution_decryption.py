
cipher_text = open("/home/varunz/SummerProjects18/RE-Cryptography/Sessions-5-&-6/RohitMP/rohit-substitution_ciphertext.txt","r")
key = open("/home/varunz/rohit-keyfile-substitution.txt","r")       # open files 
decrypt = open("VarunKM-substitution_decrypted.txt","w")

while True:
    char = cipher_text.read(1)
    if not char:                                                # stop when EOF
        break
    else :
        for a in range(52):
            if key.read(1) == char:                             # check position of char in keyfile 
                break
        decrypt_char = chr(int( ( key.tell() + 1) / 2 ) + 96)   # decrypting...  
        decrypt.write(decrypt_char)                             # write decrypt_char into file 
        key.seek(0,0)
cipher_text.close()                                             # close all files
key.close()
decrypt.close()

