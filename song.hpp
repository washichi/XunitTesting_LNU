#ifndef SONG_HPP
#define SONG_HPP

#include "mood.hpp"
#include <string>

class Song
{
public:
  Song();
  ~Song();

private:
  std::string title;
  std::string artist;
  Mood mood;
};

#endif
