### Create filename as
```bash
vi Postional_parameter.sh
```



```bash 
#!/bin/bash
# Positional parameters

first_name=$1
last_name=$2
age=$3

#Output using positional parameters

echo "Hello $first_name $last_name!"
echo "You are $age years old."
echo "Total arguments passed: $#"
echo "All arguments: $@"
``` 


## Points to remember
```bash
$# ---> Total number of arguements passed 
$@ ---> All arguemnets as a list 

If suppose there is more than 3 arguements then line 1 and line 2 will print $1 $2,$3 respectively
But the 3rd line will be return the number of arguement actually passed
Also the 4th line will return **ALL The ARGUEMENTS PASSED**


## TO RUN COMMAND
```bash
bash Postional_parameter.sh Dheraj K 21
```




## Expected output
```bash
Hello Dheraj K!
You are 21 years old.
Total arguments passed: 3
All arguments: Dheraj K 21
```
