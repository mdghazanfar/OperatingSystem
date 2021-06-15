#!/bin/sh
read num1
read num2
read operator
case $operator in
1) echo "The sum is " `expr $num1 + $num2`
;;
2) echo "The difference is " `expr $num1 - $num2`
;;
3) echo "The product is " `expr $num1 \* $num2`
;;
4) echo "The division is " `expr $num1 / $num2`
;;
esac