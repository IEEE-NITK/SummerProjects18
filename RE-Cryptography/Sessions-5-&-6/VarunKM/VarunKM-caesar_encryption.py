
f1 = open("VarunKM-message-caesar.txt","r")      # open file1
f2 = open("VarunKM-caesar_ciphertext.txt","w+")


while True:
    char = f1.read(1)                            # read char by char from file1
    if not char:                                 # break when endoffile is reached
        break
    else:
        
      if str(char).isalpha():                    # to check if char is an alphabet            
         encr_char = ((ord(char) + 7 - 96) % 26) # adding caesar cipher
         if encr_char:
             encr_char = chr(encr_char + 96)
         else:
             encr_char = 'z'
      else:
        encr_char = char                         # no change if char is not an alphabet
    
    f2.write(encr_char)                          # write encripted char into file2 
   
    
f1.close()
f2.close()                                       # close all files
