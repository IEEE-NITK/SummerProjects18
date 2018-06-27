with open("niranjan-keyfile-substitution.txt", "r") as key:
    k = key.read()
with open("niranjan-substitution_ciphertext.txt", "r") as cipher:
    c = cipher.read()
s = ''
for i in range(7):
    count = 0
    for j in k:
        if j == c[i]:
            s = s + chr(97 + count)
        count = count + 1
m = open("ryan-substitution_decrypted.txt", "w")
m.write(s)
m.close()

# code to guess a substitution word if the key is not given by checking comparing the cipher text format to the dictionary
#only works if the key is in the dictionary
#this returns a list of words with similar format
# with open('/usr/share/dict/words') as word_file:
#    english_words = set(word_file.read().split())
# checks the text file for words that match the cipher format
# m = open("ryan-substitution_decrypted.txt", "w")
# for i in english_words:
#    if len(i) == 7:
#        if (i[0]==i[6] and i[0]!=i[1]!=i[2]!=i[3]!=i[4]!=i[5]):  # based on the cipher format
#            m.write(i+"\n")
# m.close()
