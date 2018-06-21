file = open('tanmai-keyfile-vigenere.txt', 'r')
key = file.read()
file.close()

f2 = open('tanmai-vigenere_ciphertext.txt', 'w')

i = 0
with open('tanmai-message-vigenere.txt', 'r') as file:
	while file:
		ch = file.read(1)
		if not ch:
			break
		if i == len(key):
			i = 0
		if ch.isalpha():
			if ch.isupper():
				ch = chr( (ord(ch)+ ord(key[i].upper()) - 2*ord('A')) % 26 + ord('A') )
			else:
				ch = chr( (ord(ch)+ ord(key[i].lower()) - 2*ord('a')) % 26 + ord('a') )
		
		i = i+1
		f2.write(ch)
		
f2.close()
file.close()





