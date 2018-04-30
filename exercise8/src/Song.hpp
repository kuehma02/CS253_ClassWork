#include "exercise8.hpp"

#ifndef SONG_H
#define SONG_H

class Song {
    private:
        string title;
        string artist;
    public:
        Song(string, string);
        inline string getTitle() { return this->title; }
        inline string getArtist() { return this->artist; }
        friend ostream& operator<<(ostream&, const Song&);
};

#endif
