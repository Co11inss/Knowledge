
#Prints everything in the file

def file_read(fn):

    txt = open(fn)

    print(txt.read())




file_read('myfile.txt')
