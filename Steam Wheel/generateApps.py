
def doFiles():
	rootFile = open("AppXX.inc")
	formatStr = rootFile.read()
	
	dictFile = open("appsList.inc",'w')

	# 1 to 16
	for i in range(1,17):
		filename = "App{0}.inc".format(i)
		newFile = open(filename,'w')
		dictFile.write("\n[App{}]\n@Include=".format(i) + filename)
		writeStr = formatStr.format(i)
		newFile.write(writeStr)
		newFile.close()

	rootFile.close()

doFiles()
