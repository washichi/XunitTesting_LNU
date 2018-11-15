#include "playlist.hpp"
#include <gtest/gtest.h>

//constructor tests
TEST(PlaylistTest, constructorValidInput)
{
    EXPECT_NO_THROW(new Playlist("title", Chill));
}

TEST(PlaylistTest, constructorInvalidArgument)
{
    //TODO: implement
}

TEST(PlaylistTest, constructorInvalidArguments)
{
    //TODO: implement
}

TEST(PlaylistTest, constructorDuplicateTitle)
{
    //TODO: implement
}

//addSong tests
TEST(PlaylistTest, addSongValidInput)
{
    //TODO: implement
}

TEST(PlaylistTest, addSonginValidInput)
{
    //TODO: implement
}

TEST(PlaylistTest, addSongDuplicateSong)
{
    //TODO: implement
}

//order tests
TEST(PlaylistTest, orderValidInput)
{
    //EXPECT_EQ(order(), TRUE);
}

//mood tests
TEST(PlaylistTest, setMoodValidInput)
{
    //TODO: implement
}

//mood tests
TEST(PlaylistTest, setAndGetMood)
{
    //TODO: implement
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
