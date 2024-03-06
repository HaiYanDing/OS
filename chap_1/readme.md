touch hello.txt
touch hello.c
vim touch.c
gcc hello.c -o hello
*put the hello outdata into hello.txt*
./hello leon > hello.txt

*print a file content into screen*
cat hello.txt

*pipe cmd : |*
use the left output as the right input
eg: ls -l | tail -n1
    cat readme.md | tail -n1   <output the lastline of reademe.md>
