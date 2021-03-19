#include <iostream>
using namespace std;

int main ()
{
    // INTROVERT Vs EXTROVERT
  char c1,c2,c3;
  string var1;
  cout << "Answer y for yes and n for no"<<endl;
    cout << "1.Do you admire and enjoy the beauty of nature?"<<endl;
  cin >> c1;
  cout << "2.Do you like to participate in lively discussions?"<<endl;
  cin >> c2;
  cout << "3.Are you a good listener?"<<endl;
  cin >> c3;
  if (c2 == 'y' || c2 == 'Y')
    {
      var1 = "Extrovert";
    }
      else if (c3 == 'y' || c3 == 'Y' && c1 == 'y' || c1 == 'Y')
      {
      var1 = "Introvert";
      }
    else
    {
      var1 = "Ambivert";
    }
    cout<<var1<<endl;
    //SENSE Vs INTUITION
    char a1,a2,a3;
    string var2;
    cout<<"4.Do you approach things in a practical manner?"<<endl;
    cin>>a1;
    cout<<"5.Are you an imaginative person?"<<endl;
    cin>>a2;
    cout<<"6.Do you read between the lines?"<<endl;
    cin>>a3;
    if (a1 == 'y' || a1 == 'Y')
    {
      var2 = "Sensing";
    }
      else if (a3 == 'y' || a3 == 'Y' && a2 == 'y' || a2 == 'Y')
      {
      var2 = "Intuitive";
      }
    else
    {
      var2 = "No conclusion";
    }
    cout<<var2<<endl;
    //THINKING Vs FEELING
    char b1,b2,b3;
    string var3;
    cout<<"7.Do you prefer taking important decisions on your own without consulting others?"<<endl;
    cin>>b1;
    cout<<"8.Do you consider and think twice of the effect of your actions on other people before executing them?"<<endl;
    cin>>b2;
    cout<<"9.Do you consider emotions as a vulnerability/liability?"<<endl;
    cin>>b3;
    if (b2 == 'y' || b2 == 'Y')
    {
      var3 = "Feeler";
    }
      else if (b3 == 'y' || b3 == 'Y' && b1 == 'y' || b1 == 'Y')
      {
      var3 = "Thinker";
      }
    else
    {
      var3 = "No conclusion";
    }
    cout<<var3<<endl;
    //JUDGING VS PERCEIVING
    char d1,d2,d3;
    string var4;
    cout<<"10.Do you maintain or like to work from a to-do list?"<<endl;
    cin>>d1;
    cout<<"11.Are you capable of taking fair and unbiased decisions?"<<endl;
    cin>>d2;
    cout<<"12.Are you flexible and spontaneous to situations?"<<endl;
    cin>>d3;
    if (d3 == 'y' || d3 == 'Y')
    {
      var4 = "Perceiving";
    }
      else if (d2 == 'y' || d2 == 'Y' && d1 == 'y' || d1 == 'Y')
      {
      var4 = "Judging";
      }
    else
    {
      var4 = "No conclusion";
    }
    cout<<var4<<endl;
    if(var1=='Introvert'&&var2='Intuitive')
    {
        cout<<"You are an intuitive introvert.Hence the best jobs that would suit you are self-made positions that involve writing,accounting, music, design and technology. Any job that involves minimum interaction with lots of people and allows you to share your inner thoughts and ideas with ease.
    }
    if(var1=='Extrovert'&&var2=='Sensing')
    {
        cout<<"You exhibit extroverted sensing.Jobs that involve practical,people-centered problems like management,service sectors are perfect for you.You may also choose careers pertaining to food or textiles industry ,art, or dance. You would want to choose a career that allows you to move around, and have a work environment that is aesthetically pleasing.
    }
    if(var1=='Extrovert'&&var2=='Intuitive')
    {
        cout<<"As an extroverted intuitive person you are always on the go,excited to try new things,and not contented with a single activity for an extended period. You are in constant search for new potentials and possibilities in every situation.Travelling,Photography,entrepreneurship,social work are the best suited jobs for this personality type.
    }
  return 0;
}
