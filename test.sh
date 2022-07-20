#!/bin/bash
rm -rf Libftest/
rm -rf libft-war-machine/
rm -rf libft-unit-test/
rm -rf libftTester/
echo -e "\033[32;1m"NORM"\033[m"
read $a
norminette ./*.c ./*.h
# echo -e "\033[32;1m"LIBFT TEST"\033[m"
# read $a
# git clone https://github.com/jtoty/Libftest
# cd Libftest/
# ./grademe.sh
# sed -i "" 's/~\/libft/..\//' my_config.sh
# ./grademe.sh
# cd ..

# echo -e "\033[32;1m"WAR MACHINE"\033[m"
# read $a
# git clone https://github.com/y3ll0w42/libft-war-machine.git
# cd libft-war-machine/
# bash grademe.sh
# bash grademe.sh
# cd ..

echo -e "\033[32;1m"unit-test"\033[m"
read $a
git clone https://github.com/alelievr/libft-unit-test.git
cd libft-unit-test/
sed -i "" 's/LIBFTDIR	=	..\/libft/LIBFTDIR	=	..\//' Makefile
make f
cd ..

echo -e "\033[32;1m"libftTester"\033[m"
read $a
git clone https://github.com/Tripouille/libftTester.git
cd libftTester/
make a
cd ..

echo -e "\033[32;1m"make fclean"\033[m"
read $a
make
make fclean
ls
echo -e "\033[32;1m"make clean"\033[m"
read $a
make
make clean
ls
echo -e "\033[32;1m"make all"\033[m"
read $a
make all
ls
echo -e "\033[32;1m"make bonus"\033[m"
read $a
make bonus
ls
echo -e "\033[32;1m"relink"\033[m"
read $a
make
echo -e "\033[32;1m"DONE"\033[m"
make fclean