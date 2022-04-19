#include<bits/bits-stdc++.h>
#include "User.h"

using namespace std;

int main() {
	
	User arr[120];
	string name;

	arr[1] = User("osama", "123", 1);
	arr[2] = User("eslam", "123", 2);
	arr[3] = User("omar","123",3);
	arr[4] = User("soha", "123", 4);
	arr[5] = User("ganna", "123", 5);
	arr[6] = User("esraa", "123", 6);
	arr[7] = User("ahmedeslam", "123", 7);

	/* Adding Contacts to User 1*/
	arr[1].addContact(2);
	arr[1].addContact(3);
	arr[1].addContact(5);
	arr[1].addContact(6);
	arr[1].addContact(7);

	/* Adding Contacts to User 2*/
	arr[2].addContact(1);
	arr[2].addContact(3);
	arr[2].addContact(5);
	arr[2].addContact(6);
	arr[2].addContact(7);

	/* Adding Contacts to User 3*/
	arr[3].addContact(2);
	arr[3].addContact(1);
	arr[3].addContact(5);
	arr[3].addContact(6);
	arr[3].addContact(7);

	/* Adding Contacts to User 4*/
	arr[4].addContact(2);
	arr[4].addContact(3);
	arr[4].addContact(5);
	arr[4].addContact(6);
	arr[4].addContact(7);


	/* Displaying Contacts for User 1*/
	arr[0].displayContacts(1,arr);

	/* Displaying Contacts for User 2*/
	arr[0].displayContacts(2, arr);

	/* Displaying Contacts for User 3*/
	arr[0].displayContacts(3, arr);

	/* Displaying Contacts for User 4*/
	arr[0].displayContacts(4, arr);





	/* Search for a contact in user 1*/
	cout << "User 1:"<<endl;
	cout << "Enter the Username you want : ";
	cin >> name;
	arr[1].searchForContact(name, arr);


	/* Search for a contact in user 2*/
	cout << "User 2:" << endl;
	cout << "Enter the Username you want : ";
	cin >> name;
	arr[2].searchForContact(name, arr);

	/* Search for a contact in user 3*/
	cout << "User 3:" << endl;
	cout << "Enter the Username you want : ";
	cin >> name;
	arr[3].searchForContact(name, arr);
	
	/* Search for a contact in user 4*/
	cout << "User 4:" << endl;
	cout << "Enter the Username you want : ";
	cin >> name;
	arr[4].searchForContact(name, arr);
	
	

	
}