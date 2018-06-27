msg = open('shaswata-caesar_ciphertext.txt', 'r')
decr = open('tanmai-caesar_decrypted.txt', 'w')
x = ''

while msg:
	ch = msg.read(1)
	if not ch:
		break
	
	if ch.isalpha():
		if(ord(ch) - 5) < ord('a'):
			x = chr(ord(ch) + 21) 
		else:
			x = chr(ord(ch) - 5)
	else:
		x = ch
	decr.write(x)
msg.close()
decr.close()
