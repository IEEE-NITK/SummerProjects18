# Assignment 1

# Phase 1
(Deadline: 20th June)

NOTE:- **We have paired you up for the next phase of this assignment. The work that you do now is individual work. DO NOT share any files, or any information with anyone (not even your partner).**

## General Instructions
- Consists of 3 sub-assignments.
- You will have to write computer programs (in any language) for encryption
- For all these assignments **use lower case english alphabets only** for message, key and cipher-text 
- Different messages for each of following encryptions is recommended.
- The message, key, cipher-text and program should be present in separate files. 
- The program can read message and key files and should output the cipher-text to another file. Do not store key or message in program file. 

## Steps to be followed:
1. Pull latest changes from GitHub.
2. Under RE-Cryptography/Sessions-5-&-6/ , create a folder Yourname/
3. All your files are to be placed in Yourname/
4. Refer Example/ for sample directory structure

### Questions

**Note: The message file and keyfile are text files. Either you store them inside _Yourname/_ and don't push those files to GitHub, or 
you store these files outside of the SummerProjects18 folder and access them by means of programming (recommended)**

- Caesar Encryption:
Write a program to encrypt a message(about 200 words, just pick some random paragraphs from somewhere) of your choice using Caesar cipher.
**The keyfile is not needed for this question** 
Name the:   
Program file as  yourname-caesar_encryption.extension  
and  
Cipher-text file as yourname-caesar_ciphertext.txt  



- Vigenere Encryption: 
Write a program to encrypt a message(about 200 words, just pick some random paragraphs from somewhere) of your choice using Vigenere cipher. 

Name the:   
Program file as yourname-vigenere_encryption.extension  
and  
Cipher-text file as yourname-vigenere_ciphertext.txt  

- Substitution Encryption:  
Write a program to encrypt a message(just one meaningful word of 7 letters) of your choice using Substitution cipher. 
Name the:  
Program file as yourname-substitution_encryption.extension    
and     
Cipher-text file as yourname-substitution_ciphertext.txt  


### Message and Keyfiles

Make sure you have these saved somewhere for the next phase of the Assignment. **DO NOT** push the message and keyfiles to GitHub.  

Name them using this convention (No keyfile for Caesar's needed):  
yourname-message-caesar.txt  
yourname-keyfile-vigenere.txt  
and so on.


# Phase 2
(Deadline: 22nd June)
In essence , you are carrying out a Cipher-Text(CT)-Only attack. The key is not available to you. The task is made easier as you know beforehand what Cipher was used where. 
**Proceed only once your partner's PR has been merged.**  
You may now help your partner in case he/she is unable to complete phase 1. Be honest, and provide only conceptual help. Sharing keyfiles and messagefiles defeats the fun and purpose!

**If your PR has not been merged, but your partner's has, you may start this phase, but first ensure you complete Phase 1 so that your partner can also start working.**


## General Instructions
- Consists of 3 sub-assignments (one corresponding to each in Phase 1).
- You will have to write computer programs (in any language) for decryption. 
- The decrypted message and program should be present in separate files. 
- The program can read ciphertext and should output the message to another file. Do not store the message in program file. 

## Steps to be followed:  
1. Pull latest changes from GitHub. 
2. Confirm that your partner's files are in the repo. (Indicates his/her PR was merged)
3. Read your partner's ciphertext. DO NOT modify it.
3. All your files to be placed in Yourname/
4. Refer Example/ for _updated_ sample directory structure.

### Tasks

- Caesar Attack:
Write a program to decrypt your partner's Caesar Ciphertext.
Name the:     
Program file as  yourname-caesar_decryption.extension  
and  
Decrypted Message file as yourname-caesar_decrypted.txt  



- Vigenere Attack:  
Write a program to decrypt your partner's Vigenere Ciphertext.  
Name the:   
Program file as yourname-vigenere_decryption.extension  
and  
Decrypted message file as yourname-vigenere_decrypted.txt  

- Substitution Attack:  
Write a program to decrypt your partner's Substitution Ciphertext. **Note - This involves a lot of trial and error. Confirm with your partner that the message is indeed a meaningful word, so that you can verify your program's output.**  
     
Name the:  
Program file as yourname-substitution_decryption.extension  
and  
Decrypted message file as yourname-substitution_decrypted.txt  


**Good Luck!**
