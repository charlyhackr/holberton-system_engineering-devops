Shell  Basics

 pwd  print working directory

 ls  list directory contents

 cd  change directory

 ls -l  list directory contents in long form

 ls -la  list directory contents in long form, including hidden files

 ls -la  list file in long format

 mkdir /tmp/holberton Create a holberton directory inside the tmp directory

 mv /tmp/betty /tmp/holberton/betty Move file betty, which is located inside the tmp directory, to the holberton directory, which is also located inside the tmp directory. This exercise required some dir traversing.

 rm /tmp/holberton/betty Remove file betty located in tmp/holberton directory.

 rmdir /tmp/holberton Remove directory holberton located in directory tmp.

 cd - Change directory to the previous directory you were in.

 ls -la . .. /boot List all files/directories, including hidden files/directories, from 3 separate directories: current directory, parent of working directory, and /boot directory. The ls command allows multiple directories to be listed separated by spaces.

 file /tmp/iamafile Prints the type of file iamafile.

 ln -s /bin/ls ls Create a symbolic link named ls for /bin/ls

 cp -u *.html .. Copy all html files from the current directory to the parent directory, but only copy files that didn't exist in the parent directory or are newer versions than the ones that already exist in the parent directory. The -u option didn't show on the terminal manual page. The -u option copies the file into the directory if its a newer version. If the file doesn't exist in the directory, it will copy over. The -n option works for copying files that don't exist in the parent directory, but it doesn't check if the file is a newer version or not.

 mv [[:upper:]]* /tmp/u Move all files that begin with a capital letter to /tmp/u




