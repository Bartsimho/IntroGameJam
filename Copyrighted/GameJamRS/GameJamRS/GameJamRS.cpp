#include <iostream>
#include <windows.h>
#include <chrono>
#include <thread>
#include <string>
#include <fstream>
#include <mmsystem.h>
#include <conio.h>
#pragma comment(lib, "winmm.lib")
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;


int days = 1;
string response;
string emptyresponse;
char charresponse[1024];

void DayCall(int days) {
    cout << endl;
    cout << "Day " << days << endl;
    cout << endl;
}

void delay(int SecTime) {
    int Stages = 0;
    Stages = SecTime / 2;
    for (int i = 0; i < Stages; i++) {
        sleep_for(nanoseconds(2000000000));
    }
}

void music() {
    PlaySound(NULL, 0, 0);
    PlaySound(TEXT("music/TSMHWGO.wav"), NULL, SND_ASYNC);
}

void Death() {
    PlaySound(NULL, 0, 0);
    cout << "Thou will now be executed by firing squad" << endl;
    delay(2);
    PlaySound(TEXT("music/Firing_Squad.wav"), NULL, SND_FILENAME);
    PlaySound(TEXT("music/12-Gauge.wav"), NULL, SND_FILENAME); // gunshots
    PlaySound(TEXT("music/12-Gauge.wav"), NULL, SND_FILENAME);
    PlaySound(TEXT("music/12-Gauge.wav"), NULL, SND_FILENAME);
    PlaySound(TEXT("music/12-Gauge.wav"), NULL, SND_FILENAME);
    PlaySound(TEXT("music/AR15-Close.wav"), NULL, SND_FILENAME); //Coup de Grace
    PlaySound(TEXT("music/Wilhelm-Scream.wav"), NULL, SND_FILENAME); //Wilhelm scream
    PlaySound(TEXT("music/Happy Ending.wav"), NULL, SND_FILENAME); //End Song
    cout << "It's not over yet though" << endl;
}

void Gameday()
{
    music();
    DayCall(days);
    cout << "Clarence: Good Morrow. Would'st though bring master a Brandy?" << endl;
    cin >> response;
    if (response != "yes") {
        Death();
        return;
    }
    cout << "Thou go to get Clarence an object belonging to the gentleman, that object being his brandy" << endl;
    delay(2);
    cout << "It crosses an object belonging to you, that object being your mind that object over there the reader could poison the gentleman right at this current point in time however it might exists too obvious" << endl;
    delay(2);
    cout << "Doest thou do the deed?" << endl;
    cin >> response;
    if (response == "yes") {
        cout << "Thou place a drop on poison in the brandy" << endl;
        delay(2);
        cout << "However a cook sees thou" << endl;
        delay(2);
        cout << "Doest thou try to convince the cook to lie regarding seeing thou?" << endl;
        cin >> emptyresponse;
        cout << "The cook doesn't agree to it" << endl;
        delay(2);
        cout << "That lady goes to the master of the house in addition to informs the gentleman of an object belonging to you, that object being your plan" << endl;
        delay(2);
        Death();
        return;
    }
    cout << "Thou decide against the deed" << endl;
    delay(2);
    cout << "There currently are too many people here" << endl;
    delay(2);
    cout << "Thou bring Clarence an object belonging to the gentleman, that object being his brandy" << endl;
    delay(2);
    cout << "That gentleman downs the object in one (the gout ridden sinner)" << endl;
    delay(2);
    cout << "Hobbling off he doesn't even say thank you the ungreatful git" << endl;
    delay(2);
    cout << "Maybe trying to cause 'accidents' would be the best plan" << endl;
    delay(2);
    cout << "Time: 5:25:89" << endl;
    delay(2);
    cout << "Clarence: I believe it currently exists time for lunch at this current point in time" << endl;
    delay(2);
    cout << "Clarence: Couldst thou set thine table for us?" << endl;
    cin >> response;
    if (response != "yes") {
        Death();
        return;
    }
    cout << "As thou goest to set the table thou are met with the moral contemplations that with all the crockery someone couldst easily impale thineselves" << endl;
    delay(2);
    cout << "Although Risky thou could just chuck a knife at Clarence" << endl;
    delay(2);
    cout << "Doest thou do the deed?" << endl;
    cin >> response;
    if (response == "yes") {
        cout << "Thou are spotted actioning the throw and apprehended" << endl;
        Death();
        return;
    }
    cout << "Thou hold off" << endl;
    delay(2);
    cout << "Surely while carrying the food thou could poison it" << endl;
    delay(2);
    cout << "Time continues. The timepiece now reads 5:62:80. The table is set and the food ready to go" << endl;
    delay(2);
    cout << "Doest thou slip poison into the food when thoust bring it?" << endl;
    cin >> response;
    if (response == "yes") {
        cout << "While thou aren't spotted. Clarence consumes the poisoned food and passes on the spot. His wife Esmerelda immediately accuses thou out of the blue" << endl;
        Death();
        return;
    }
    delay(2);
    cout << "Time is running out it's 6:00:00 now so not much longer until the day concludes and thou haven't killed any soul yet. Are thou stupid?" << endl;
    delay(2);
    cout << "Get thou backside in gear" << endl;
    delay(2);
    cout << "Here's a chance" << endl;
    delay(2);
    cout << "Clarence is going on a shoot and wants thou to come along to serve him alcoholic refreshments" << endl;
    delay(2);
    cout << "The perfect opportunity" << endl;
    delay(2);
    cout << "Thou start by loading his rifle" << endl;
    delay(2);
    cout << "Doest thou load it incorrectly?" << endl;
    cin >> response;
    if (response == "yes") {
        cout << "The rifle misfires blowing his brains out" << endl;
        delay(2);
        cout << "But hunts are social gatherings and everyone else saw thou" << endl;
        Death();
        return;
    }
    delay(2);
    cout << "Thou continue to be patient and Clarence asks for a drink. Thou could poison him here" << endl;
    delay(2);
    cout << "Doest thou?" << endl;
    cin >> response;
    if (response == "yes") {
        cout << "Everyone sees thou, you imbecile" << endl;
        Death();
        return;
    }
    delay(2);
    cout << "Thous patience continues" << endl;
    delay(2);
    cout << "It's getting even later now. The timepiece reads 8:67:90" << endl;
    delay(2);
    cout << "The family are all heading off to bed now" << endl;
    delay(2);
    cout << "Maybe one last chance today" << endl;
    delay(2);
    cout << "Thou could suffocate Clarence with a pillow" << endl;
    delay(2);
    cout << "It would even muffle the screams" << endl;
    delay(2);
    cout << "Doest thou try?" << endl;
    cin >> response;
    if (response == "yes") {
        cout << "While the screams are muffled they are still loud enough to be heard" << endl;
        Death();
        return;
    }
    cout << "The day is over" << endl;
    delay(6);
    cout << "Everything is too risky" << endl;
    delay(2);
    cout << "Maybe the only way is not to play" << endl;
}

int main() {
    cout << "Thou ist a Butler" << endl;
    delay(6);
    cout << "Thou hate Everyone around thou" << endl;
    delay(6);
    while (true) {
        char c;
        Gameday();
        days++;
        cout << "Input key to continue" << endl;
        c = _getch();
        if (c == 27) {
            break;
        }
    }
    delay(2);
    cout << endl;
    cout << endl;
    cout << "Congratulations thou have cheated and won" << endl;
    cout << "Who knew all you need to do was to give up" << endl;
    PlaySound(NULL, 0, 0);
    PlaySound(TEXT("music/Congratulations.wav"), NULL, SND_FILENAME);
}