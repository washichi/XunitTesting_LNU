#include "playlistManager.cpp"
#include <gtest/gtest.h>
#include "gmock/gmock.h"

TEST(PlaylistManagerTest, ShouldConstructPlaylistManagerObject)
{
    //TODO: implement
}

TEST(PlaylistManagerTest, InvalidInput)
{
    //TODO: implement
}

TEST(PlaylistManagerTest, ShouldAddPlaylist)
{
    ASSERT_TRUE(addPlaylist(/*playlist stub*/) == 1);
}

TEST(PlaylistManagerTest, ShouldRemovePlaylist)
{
    ASSERT_TRUE(addPlaylist(/*playlist stub*/));
}

TEST(PlaylistManagerTest, ShouldAddSong)
{
    ASSERT_TRUE(addPlaylist(/*playlist stub*/));
}

TEST(PlaylistManagerTest, ShouldRemoveSong)
{
    ASSERT_TRUE(addPlaylist(/*playlist stub*/));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}