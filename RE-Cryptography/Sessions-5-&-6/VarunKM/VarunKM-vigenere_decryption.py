
cipher_text = open("/home/varunz/SummerProjects18/RE-Cryptography/Sessions-5-&-6/RohitMP/rohit-vigenere_ciphertext.txt","r")    #open files
key = "goodjob"
decrypt = open("VarunKM-vigenere_decryted.txt","w")
i = 0
while True:
    char = cipher_text.read(1)                                          # read char by char from cipher_text file
    if not char :                                                       # stop at EOF
        break
    else :
        if not char.isspace():                                          # decrypt only non space characters    
             
              decrypt_char = ord(char) - ord(key[i]) + 96               

              if char.islower():                                        # decryption for lowercase letters
                      if decrypt_char < 97 :
                             decrypt_char = chr(decrypt_char + 26)
                      else :
                             decrypt_char = chr(decrypt_char)    
              else:                                                     # decrypting all other chars
                     if decrypt_char < 65:
                              decrypt_char =chr(decrypt_char + 26)
                     else :
                              decrypt_char = chr(decrypt_char)
                
              if i == len(key) - 1:
                       i = 0                                            # after reaching end of key go back to start of key
              else :
                       i += 1                                           # go to next letter of key
        else:
            decrypt_char = char
        decrypt.write(decrypt_char)                                     # write decrypt_char into file 
cipher_text.close()                                                     # close all files
decrypt.close()
