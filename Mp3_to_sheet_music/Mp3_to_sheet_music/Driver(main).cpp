//MP3 to Sheet Music
//The goal of this program is to read a music file in, and output sheet music
//Alexander Nakhleh January 2017


#include <iostream>
#include <string>
#include <fstream>
#include "metaData_Class.h"

using namespace std;

//TODO:
//Figure out how to write musicXML, then parse the mp3 data.

int main() {
	try {

	}
	catch (...){

	}

	//Some test songs and inputs
	ifstream in;
	//ofstream out;
	//in.open("Aiobahn - Towa no utage (w YUCe).mp3");
	//in.open("4. Aiobahn & Yunomi - Makuramoto ni Ghost (Jam_boy Remix).aiff");
	//in.open("dota.M4A");
	//cout << in.is_open() << endl;
	//in.close();

	//Testing for getting file type and title
	metaData song("4. Aiobahn & Yunomi - Makuramoto ni Ghost (Jam_boy Remix).aiff");
	cout <<"Music File Type: " + song.getFileType() << endl;
	cout <<"Song Title: "+ song.getTitle() << endl;
	//cout << "b" << endl << endl;

	return 0;


}