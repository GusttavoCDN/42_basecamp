touch testShell00
echo "123456789012345678901234567890123456789" > testShell00
touch -d "2021-06-01 23:42" testShell00
chmod 455 testShell00
ls -l
tar -cf testShell00.tar testShell00
rm testShell00