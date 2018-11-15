#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

#include "song.hpp"
#include "mood.hpp"
#include <string>

class Playlist
{
public:
  Playlist(std::string title, Mood mood);
  ~Playlist();

  bool addSong(Song song);
  bool order();
  bool setMood(Mood mood);
  Mood getMood();

private:
  std::string title;
  Mood mood;
};

#endif