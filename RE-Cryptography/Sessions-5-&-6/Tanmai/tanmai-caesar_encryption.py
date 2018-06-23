#msg file
file = open('tanmai-message-caesar.txt', 'r')
msg = file.read()
file.close()

file = open('tanmai-caesar_ciphertext.txt', 'w')

k = 13 #letter shift
x = ''

for ch in msg:
	if ch.isalpha():
		ch = ch.lower()
		if ch.isupper():
			x  += chr((ord(ch) + k - ord('A')) % 26 + ord('A'))
		else:
			x  += chr((ord(ch) + k - ord('a')) % 26 + ord('a'))
	else:
		x += ch
file.write(x)
file.close()
