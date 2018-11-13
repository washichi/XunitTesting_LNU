#ifndef PLAYLISTMANAGER_HPP
#define PLAYLISTMANAGER_HPP

#include "playlist.hpp"
#include <list>

class PlaylistManager
{
public:
  PlaylistManager();
  ~PlaylistManager();

  bool AddPlaylist(Playlist playlist);
  bool RemovePlaylist(Playlist playlist);
  bool AddSong(Song song);
  bool RemoveSong(Song song);

private:
  std::list<Playlist> playlists;
};

#endif