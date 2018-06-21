#msg file
file = open('tanmai-keyfile-substitution.txt', 'r')
key = file.read()
file.close()

f2 = open('tanmai-substitution_ciphertext.txt', 'w')

with open('tanmai-message-substitution.txt', 'r') as file:
	while file:
		ch = file.read(1)
		if not ch:
			break
		
		if ch.isalpha():
			if ch.isupper():
				ch = key[ ord(ch) - ord('A') ]
			else:
				ch = key[ ord(ch) - ord('a') ]
		f2.write(ch)

f2.close()
file.close()
			