
keyfile = open("VarunKM-keyfile-substitution.txt","r")            # open files
msg = open("VarunKM-message-substitution.txt","r")
cipher_text = open("VarunKM-substitution_ciphertext.txt","w+")

while True:
    char = msg.read(1)                                            # read each char in msg file
    if not char:
        break
    else:
      if char.isalpha(): 
        pos = ((ord(char) - 96) * 2 - 2)                          # pos of encry_char in keyfile
        keyfile.seek(pos,0)                                       # my keyfile has spaces between each char so * 2
        encr_char = keyfile.read(1)
        cipher_text.write(encr_char)                              # write into cipher_text file 

keyfile.close()                                                   # close all files
msg.close()
cipher_text.close()
