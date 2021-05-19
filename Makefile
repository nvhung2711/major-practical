project: main.o PersonalDetails.o Bank.o UserAccounts.o 
	clang++ PersonalDetails.o -o PersonalDetails
	clang++ Bank.o -o Bank
	clang++ UserAccounts.o -o UserAccounts
	clang++ main.o -o main

main: main.cpp main.h
	clang++ -c main.cpp 

Bank: Bank.cpp Bank.o
	clang++ -c Bank.cpp

PersonalDetails: PersonalDetails.cpp PersonalDetails.h
	clang++ -c PersonalDetails.cpp 

UserAccounts: UserAccounts.cpp UserAccounts.h
	clang++ -c UserAccounts.cpp 

clean:
	rm *.o
	rm Bank UserAccounts PersonalDetails -f