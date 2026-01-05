#include <iostream>
#include "../../lnInclude/week2/client.H"
#include "../../lnInclude/week2/banque.H"
#include "../../lnInclude/week2/account.H"

int main(){

	// Create Bank
	banque Bank("Oxford Union");
	std::cout << "The banque <<" 
	          << Bank.getBankName() << ">> has been constructed."
			  << std::endl;

// 
	
	std::cout << "The banque has " 
	          << Bank.getNbOfClients() << " client(s)"
			  << std::endl;


	client Client1("Tom Hanks", "Louisville");					  

	Bank.openAccount(Client1,2000.0,1000.0);

/*
	std::cout << "After inauguration the banque has " 
	          << Bank.getNbOfClients() << " client(s)"
			  << std::endl;
*/
	client Client2("Edward Reums", "Albertville");	  

	Bank.openAccount(Client2,4000.0,3000.0);

	std::cout << "After a month the banque has " 
	          << Bank.getNbOfClients() << " client(s)"
			  << std::endl;		
			

	// Set the interest rates for saving and current account
	Bank.setSavingInterestRate(0.02);
	Bank.setCurrentInterestRate(0.01);	

/*
	// Check if the interest rates are properly set
	std::cout << "The interest rate at "
			  << Bank.getBankName() << " Bank :" 
			  << std::endl;
	std::cout << "Saving account: " 
			  << Bank.getSavingInterestRate() 
			  << std::endl;
	std::cout << "Current account: " 
			  << Bank.getCurrentInterestRate()
			  << std::endl;


*/		
	std::cout << std::endl;
	std::cout << "Données avant le bouclement des comptes :"
	          << std::endl;	  

	std::cout << "Client " << Client1.getName() 
	          << " de " << Client1.getCity()
			  << std::endl;
	std::cout << "  Compte courant : " << Client1.getCurrentBalance()
			  << " francs" << std::endl;
	std::cout << "  Compte épargne : " << Client1.getSavingBalance()
			  << " francs" << std::endl;		  

	std::cout << "Client " << Client2.getName() 
	          << " de " << Client2.getCity()
			  << std::endl;
	std::cout << "  Compte courant : " << Client2.getCurrentBalance()
			  << " francs" << std::endl;
	std::cout << "  Compte épargne : " << Client2.getSavingBalance()
			  << " francs" << std::endl;
			  
	// Bouclement des comptes
	Bank.bouclement(Client1);
	Bank.bouclement(Client2);


	std::cout << std::endl;
	std::cout << "Données après le bouclement des comptes :"
	          << std::endl;

	std::cout << "Client " << Client1.getName() 
	          << " de " << Client1.getCity()
			  << std::endl;
	std::cout << "  Compte courant : " << Client1.getCurrentBalance()
			  << " francs" << std::endl;
	std::cout << "  Compte épargne : " << Client1.getSavingBalance()
			  << " francs" << std::endl;		  

	std::cout << "Client " << Client2.getName() 
	          << " de " << Client2.getCity()
			  << std::endl;
	std::cout << "  Compte courant : " << Client2.getCurrentBalance()
			  << " francs" << std::endl;
	std::cout << "  Compte épargne : " << Client2.getSavingBalance()
			  << " francs" << std::endl;

/*
	std::vector<client> ListOfAccountHolders = Bank.getAccountHolderList();

	for (client Client : ListOfAccountHolders){
		std::cout << Client.getName() << " de "
				  << Client.getCity() 
				  << std::endl;
		std::cout << "	Compte courant : " << Client.getCurrentBalance()
				  << std::endl;
		std::cout << "	Compte épargne : " << Client.getSavingBalance()
				  << std::endl;
	}
*/
	std::cout << std::endl;


	



	return 0;

}//end-of-main

