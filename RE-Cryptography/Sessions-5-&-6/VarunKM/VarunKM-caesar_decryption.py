
cipher_text = open("/home/varunz/SummerProjects18/RE-Cryptography/Sessions-5-&-6/RohitMP/rohit-caesar_ciphertext.txt","r")  #open files
decrypt = open("VarunKM-caesar_decrypted.txt","w")
char = cipher_text.read(1)
while char != '\0':                                                # As encrypter has added \0 at the end of file it marks the end 
       if not char.isspace():                                      # Decrypt everything except space
          
           if char.islower():
                   if char > 'b':   
                       decrypt_char = chr(ord(char) - 2)           # to get decrypted char
                   else:
                       decrypt_char = chr(ord(char) + 26 -2)
           else:

                 decrypt_char = chr(ord(char) - 2)
       else:                                                        
           decrypt_char = char                                     # space char is not encrypted so write as it is     
       decrypt.write(decrypt_char)    
       char = cipher_text.read(1)                                  # write decrypted char into a file
cipher_text.close()                                                # close files
decrypt.close()

