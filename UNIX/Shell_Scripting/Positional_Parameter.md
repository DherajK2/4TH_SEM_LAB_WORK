```bash 
#!/bin/bash
# Positional parameters

first_name=$1
last_name=$2
age=$3

# Output using positional parameters

echo "Hello $first_name $last_name!"
echo "You are $age years old."
echo "Total arguments passed: $#"
echo "All arguments: $@"
``` 
