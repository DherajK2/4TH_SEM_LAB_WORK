### Create logfile.txt is:
```bash
This is a test line
Another line with error
No issues here
Critical error occurred
```


### Create filename as
```bash
vi delete_lines.sh
```
---
```bash 
#!/bin/bash
# First argument is the word to remove
word=$1

# Loop starts from second argument onward
for i in "${@:2}"
do
  grep -v "$word" "$i" > temp && mv temp "$i"
done

``` 


## Points to remember
```bash
$1 ---> First argument passed (word to remove)
"${@:2}" ---> All arguments starting from the second one (files to process)
```
How the script works:
1.The script takes the first argument as the word to remove.

2.It then loops through all the files (provided from the second argument onward).

3.For each file, it uses grep -v to remove all lines containing the specified word.

4.The script uses a temporary file to hold the filtered content and then overwrites the original file with the cleaned-up version.

#### Originally:
```bash
This is a test line
Another line with error
No issues here
Critical error occurred
```

## TO RUN COMMAND
```bash
bash delete_lines.sh error logfile.txt
```

#### Expected Output:
```bash
This is a test line
No issues here

```
