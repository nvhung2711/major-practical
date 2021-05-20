all: main.o PersonalDetails.o Bank.o UserAccounts.o 
	clang++ main.o -o main

main.o: main.cpp
	clang++ -c main.cpp 

Bank.o: Bank.cpp Bank.h
	clang++ -c Bank.cpp

PersonalDetails.o: PersonalDetails.cpp PersonalDetails.h
	clang++ -c PersonalDetails.cpp 

UserAccounts.o: UserAccounts.cpp UserAccounts.h
	clang++ -c UserAccounts.cpp 

clean:
	rm -rf *.o main