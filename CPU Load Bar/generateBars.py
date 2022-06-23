
def doFiles():
	rootFile = open("barXX.inc")
	formatStr = rootFile.read()

	# 1 to 8
	for i in range(1,9):
		filename = "bar{0}.inc".format(i)
		newFile = open(filename,'w')
		writeStr = formatStr.format(i)
		newFile.write(writeStr)
		newFile.close()

	rootFile.close()

doFiles()
