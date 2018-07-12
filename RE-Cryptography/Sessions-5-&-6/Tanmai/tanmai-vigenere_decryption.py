msg = open('shaswata-vignere_ciphertext.txt', 'r')
keyfile = open('shaswata-vignere-keyfile.txt', 'r');
key = keyfile.read()

keyfile.close()

decr = open('tanmai-vigenere_decrypted.txt', 'w')
k = 0
x = ''
while msg:
	ch = msg.read(1)
	if not ch:
		break

	if k == len(key)-1:
		k = 0
	if ch.isalpha():
		x = (ord(ch) - ord(key[k]) + 26)%26
		x = chr(x + ord('a'))
		k = k+1
	else:
		x = ch
	decr.write(x)
decr.close()
msg.close()
