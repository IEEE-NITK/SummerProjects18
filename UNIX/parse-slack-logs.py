import json

with open('/home/user/Desktop/JSON-Data-Processing/Session5/shell-scripting/2018-06-02.json') as f:
	data = json.load(f)
	i=0
	for p in data:
		try:
			print('#' + str(i) + ' User:' + p['user'])
			print('Message: ' + p['text'])
		except:
			pass
		print('')
		i=i+1

