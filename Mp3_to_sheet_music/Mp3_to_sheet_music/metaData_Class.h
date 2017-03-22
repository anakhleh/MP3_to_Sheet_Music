#pragma once

#ifndef METADATA_CLASS_H
#define METADATA_CLASS_H

//MetaData Class - parses a music file for its metaData

#include <fstream>
#include <iostream>
#include "pitches.h"
using namespace std;

#ifndef metaData_Class
#define metaData_Class

/*METADATA CLASS*/
class metaData {


public /*methods*/:
	metaData(string fileName = ""); //This should read and do everything.
									//You kind of want to get all metaData in 1 go
									//This consists of a number of private functions declared below

	//These just return the private members of the class.
	string getFileType();
	string getTitle();
	string getArtist();
	int    getBpm();
	

private /*methods*/:

	void findFileFormat(string fileName);
	void findTitle(string fileName);
	void findArtist(string fileName, string format);
	void findBpm(string fileName);
	void findSongDuration(string fileName);



private /*fields*/:

	/*Song Data*/
	//TIL: you can't assign NULL to string.
	string fileFormat = "";
	string title = "";
	string artist = "";
	string creationTime = "";
	int    bpm = NULL;
	int    duration = NULL;


	/*File Type Headers*/
	/*const string MP3_HEADER = "ID3";
	const string M4A_HEADER = "ftypM4A";
	const string AIFF_HEADER = "AIFFCOMM";*/

};


class id3Tag {

private:


};

#endif


#endif