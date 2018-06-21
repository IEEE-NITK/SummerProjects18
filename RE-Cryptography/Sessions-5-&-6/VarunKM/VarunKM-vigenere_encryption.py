
msg = open("VarunKM-message-vigenere.txt","r")                      # open files
keyfile = open("VarunKM-keyfile-vigenere.txt","r")
cipher_text = open("VarunKM-vigenere_ciphertext.txt","w+")

keyfile.seek(0,2)               
key_size = keyfile.tell() - 1                                       # calculate size of key
keyfile.seek(0,0)
key = keyfile.read(key_size)                                        # obtaining key from keyfile

i = 0
while True:
    
    char = msg.read(1)                                              # read each char from msg file 
    if not char:                                                    # to detect EndOfFile
        break
    else:
         if char.isalpha():
           
              encr_char = (ord(char) - 96 + ord(key[i]) - 96) % 26  # vigenere encryption 
           
              if encr_char:
                     encr_char = chr(encr_char + 96)                
              else:
                     encr_char = 'z'     
           
              if i == key_size - 1:                                 # if i reaches the last letter of key ,make it go to first letter
                 i = 0
              else:                                                 # increment key_size to go to next letter of key 
                 i += 1
 
         else :
             encr_char = char
    cipher_text.write(encr_char)                                    # write encr_char into cipher text file


msg.close()                                                         # close all files
keyfile.close()
cipher_text.close()
