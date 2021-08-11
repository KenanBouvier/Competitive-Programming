def solve():
	dictionaryS = {}
	dictionaryT = {}
	s = "ehyoe"
	t = "hello"

	for character in s:
		if character in dictionaryS:
			dictionaryS[character] = dictionaryS[character]+1
		else:
			dictionaryS[character] = 1

	for character in t:
		if character in dictionaryT:
			dictionaryT[character] = dictionaryT[character]+1
		else:
			dictionaryT[character] = 1
	
	print(dictionaryS)
	print(dictionaryT)

	key_list = dictionaryS.keys()

	changes = 0

	for key in key_list:
		if key in dictionaryT:
			difference = abs(dictionaryS[key]-dictionaryT[key])
			changes = changes + difference
		else:
			changes = changes+dictionaryS[key]

	print(changes)

solve()