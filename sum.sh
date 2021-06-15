

#!/bin/sh
echo "enter max number"
read n
echo "enter $n elements with space"
read -a array
tot=0
for i in ${array[@]}; do
let tot+=$i
done
echo "Total: $tot"
