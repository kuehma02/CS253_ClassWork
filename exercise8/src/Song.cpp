#include "Song.hpp"

Song::Song(string title, string artist) {
    this->title = title;
    this->artist = artist;
}

ostream& operator<<(ostream& os, const Song& s) {
    os << s.title << " by " << s.artist;
    return os;
}