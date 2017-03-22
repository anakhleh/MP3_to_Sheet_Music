#pragma once

//MetaData Class - parses a music file for its metaData
//TODO - Find artist and album data from files, get song bpm and duration

#ifndef METADATA_CLASS_CPP
#define METADATA_CLASS_CPP

#include "metaData_Class.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


metaData::metaData(string fileName)
{
	ifstream songFile;
	songFile.open(fileName);

	if (!songFile.is_open())
		throw 0;
	
	findFileFormat(fileName);
	findTitle(fileName);
}

string metaData::getFileType()
{
	return fileFormat;
}

string metaData::getTitle()
{
	return title;
}

string metaData::getArtist()
{
	return artist;
}
int metaData::getBpm()
{
	return bpm;
}

void metaData::findFileFormat(string fileName)
{
	fileFormat = fileName.substr
					(fileName.find_last_of('.') + 1,
					 fileName.length() - fileName.find_last_of('.')
					);
}

void metaData::findTitle(string fileName)
{
	title = fileName.substr
				(0, fileName.find_last_of('.'));
}

void metaData::findArtist(string fileName, string format)
{

}

#endif