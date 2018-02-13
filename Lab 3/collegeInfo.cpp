// 
//
/*
CIS22A
Siddharth Buddharaju
Lab 3
This program presents the user with 8 options and displays
the information associated with the option the user chooses.
*/
#include<iostream>
using namespace std;

int main(){
    bool loop;
    int num;
    do{
        cout << "1. Date winter quarter begins" << endl
             << "2. Website address for schedule of classes" << endl
             << "3. Phone number for admissions and records" << endl
             << "4. Address of the college" << endl
             << "5. List of division offices" << endl
             << "6. Information about US voter requirements" << endl
             << "7. How to contact a counselor" << endl
             << "8. College health office hours\n" << endl
             << "Enter a number for the option you want: ";
            
        cin >> num;
        if(num >= 1 && num <= 8){
            loop = false;
                
        }
        else{
            cout << "Please enter a valid number(1-8) that corresponds with the option you want\n";
        }
    }while(loop);

    switch(num){
        case(1):
            cout << "The first day of winter quarter at De Anza College is Monday, January 8th" << endl;
            break;
        case(2):
            cout << "The schedule of classes at De Anza College can be found here: https://www.deanza.edu/schedule/\n" << endl;
            break;
        case(3):
            cout << "The phone number for admissions and records is (408)-864-5300." << endl;
            break;
        case(4):
            cout << "The address of De Anza College is 21250 Stevens Creek Blvd, Cupertino, CA 95014" << endl;
            break;
        case(5):
            cout << "De Anza has 14 divisions: " << endl
                 << "Academic Services" << endl
                 << "Applied Technologies" << endl
                 << "Biological, Health & Environmental Sciences" << endl
                 << "Business, Computer Science and Applied Technologies" << endl
                 << "Counseling" << endl
                 << "Creative Arts" << endl
                 << "Disability Support Programs & Services" << endl
                 << "Online Education" << endl
                 << "Intercultural/International Studies" << endl
                 << "Language Arts" << endl
                 << "Learning Resources" << endl
                 << "Physical Education/Athletics" << endl
                 << "Physical Science/Math/Engineering" << endl
                 << "Social Sciences and Humanities" << endl
                 << "Special Education" << endl;
            break;
        case(6):
            cout << "To be eligible to vote in federal elections you must:" << endl
                 << "* Be a U.S. citizen (either by birth or naturalization)" << endl
                 << "* Meet your state's residency requirements" << endl
                 << "* Be 18 or older. (Some states allow 17-year-olds to vote in primaries or \n  register to vote if they will be 18 before the general election)." << endl;
            break;
        case(7):
            cout << "You can meet with a counselor for dop in meetings on \nthe second floor of the Registration & Student Services Building" << endl
                 << "Or you can schedule an appointment either in person \nor contact by phone ((408) 864 - 5400) or online advising is also available" << endl;
            break;
        case(8):
            cout << "The health office hours for De Anza College are:" << endl
                 << "Mon. & Wed. : 8a.m. - 8:30p.m." << endl
                 << "Tues. & Thurs : 8a.m. - 7:00p.m." << endl
                 << "Friday: 8a.m. - 4:30p.m." << endl;
            break;
    }
}





