#include <iostream>
#include <string>
using namespace std;

bool governorVote()
{
  int ObinnaVote = 0;
  int OsasVote = 0;
  int MikeVote = 0;
  // Vote Governor
  cout << "Enter a number to vote for Governor" << endl;
  cout << "(1) Obinna \n(2) Osas \n(3) Mike" << endl;
  int GovernorVote;
  cin >> GovernorVote;

  if (GovernorVote == 1)
  {
    ObinnaVote = ObinnaVote + 1;
    cout << "You have voted for Obinna" << endl;
  }
  else if (GovernorVote == 2)
  {
    OsasVote = OsasVote + 1;
    cout << "You have voted for Osas" << endl;
  }
  else if (GovernorVote == 3)
  {
    MikeVote = MikeVote + 1;
    cout << "You have voted for Mike" << endl;
  }
  else
  {
    cout << "Invalid selection" << endl;
  }

  return true;
}

bool lgaVote(){
    int gyangVote = 0;
  int paulVote = 0;
  int elishaVote = 0;
  // Vote Chairman
      cout << "Click on a number to vote for Local Government" << endl;
      cout << "(1) Gyang \n(2) Paul \n(3) Elisha" << endl;
      int LocalGovtVote;
      cin >> LocalGovtVote;
      if (LocalGovtVote == 1)
      {
        gyangVote = gyangVote + 1;
        cout << "You have voted for Gyang" << endl;
      }
      else if (LocalGovtVote == 2)
      {
        paulVote = paulVote + 1;
        cout << "You have voted for Paul" << endl;
      }
      else if (LocalGovtVote == 3)
      {
        elishaVote = elishaVote + 1;
        cout << "You have voted for Elisha" << endl;
      }
      else
      {
        cout << "Wrong selection" << endl;
      }
      return true;
}

int main()
{
  string registeredVoter = "tobi";
  string username = "Teebest";
  string password = "4147";


  string usernameEntry;
  cout << "Enter Username" << endl;
  cin >> usernameEntry;

  cout << "Enter Password" << endl;
  string passwordEntry;
  cin >> passwordEntry;

  if (username == usernameEntry && password == passwordEntry)
  {
    cout << "Welcome " << registeredVoter << endl;
    cout << "To vote press \n (1) Chairman \n (2) Governor" << endl;

    int voteCategory;
    cin >> voteCategory;
    if (voteCategory == 1)
    {
      lgaVote();
      if(lgaVote() == true){
        governorVote();
      }
    }
    else if (voteCategory == 2)
    {
      governorVote();
      if (governorVote() == true)
      {
        lgaVote();
      }
    }
  } else {
    cout << "Error Wrong Input" << endl;
  }
  // camelCasing gyangPaulElisha
  // snake_casing gyang_paul_elisha or GYANG_PAUL_ELISHA or Gyang_Paul_Elisha
  // PascalCasing GyangPaulElisha

  return 0;
}