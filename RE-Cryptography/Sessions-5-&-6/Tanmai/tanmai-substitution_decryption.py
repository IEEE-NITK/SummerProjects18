msg = open('shaswata-substitution_ciphertext.txt', 'r')
file = open('shaswata-subs-keyfile.txt', 'r')
key = file.read()

file.close()
file = open('tanmai-substitution_decrypted.txt', 'w')
x = ''

while msg:
	ch = msg.read(1)
	if not ch:
		break

	if ch.isalpha():
		x = key[ord(ch) - ord('a')]
	else:
		x = ch

	file.write(x)
file.close()
msg.close()
