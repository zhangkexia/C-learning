#!/bin/sh

myvar="Hi there"

echo $myvar
echo "$myvar"
echo '$myvar'
echo \$myvar

echo Enter som text
read myvar

echo '$myvar' now equals $myvar
exit 0
