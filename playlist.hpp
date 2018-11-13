#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

#include "song.hpp"
#include "mood.hpp"
#include <string>

class Playlist
{
public:
  Playlist();
  ~Playlist();

  bool addSong(Song song);
  bool order();
  bool setMood();

private:
  std::string title;
  Mood mood;
};

#endif