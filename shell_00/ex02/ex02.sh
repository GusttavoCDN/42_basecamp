mkdir test0 test2
touch test1 test3 test4
ln test3 test5
ln -s test0 test6
echo "123" > test1
echo "" > test3
echo "1" > test4
touch -mht 202106012220 test6
touch -d "2021-06-01 20:47" test0
touch -d "2021-06-01 21:46" test1
touch -d "2021-06-01 22:45" test2
touch -d "2021-06-01 23:44" test3
touch -d "2021-06-01 23:43" test4
chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4
tar -cf exo2.tar *