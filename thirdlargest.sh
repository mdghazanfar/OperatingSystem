#!/bin/sh

read -a array
x=0;
y=0;
z=0;
for i in ${array[@]};
do
if [ $i -gt $x ]
then
x=$i
fi
done
for i in ${array[@]};
do
if [ $i -gt $y -a $y -lt $x ];
then
y=$i
fi
done
for i in ${array[@]};
do
if [ $i -gt $z -a $z -lt $y ];
then
z=$i
fi
done
echo $z
