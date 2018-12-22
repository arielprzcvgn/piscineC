test=`ifconfig | grep 'inet '`
if [ -n "$test" ]
then
	ifconfig | grep 'inet ' | cut -d ' ' -f 2
else
	echo I am lost!
fi
