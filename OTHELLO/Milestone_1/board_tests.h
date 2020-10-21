/* test cases */

#include <gtest/gtest.h>

#include "board.hh"

TEST(boardTest, Initialization) {
    board_t p1, p2, p3;

    board_init(&p1, 3, 0);
    board_init(&p2, 0, 4);
    board_new(&p3);

    ASSERT_FLOAT_EQ( board_x(&p1), 3.0);
    ASSERT_FLOAT_EQ( board_y(&p1), 0.0);

    ASSERT_FLOAT_EQ( board_x(&p2), 0.0);
    ASSERT_FLOAT_EQ( board_y(&p2), 4.0);

    ASSERT_FLOAT_EQ( board_x(&p3), 0.0);
    ASSERT_FLOAT_EQ( board_y(&p3), 0.0);

}


TEST(boardTest, Add) {
    board_t p1, p2, p3;

    board_new(&p3);
    board_init(&p1, 3, 0);
    board_init(&p2, 0, 4);
    board_add(&p3, &p1);
    board_add(&p3, &p2);
    ASSERT_FLOAT_EQ( board_x(&p3), 3.0);
    ASSERT_FLOAT_EQ( board_y(&p3), 4.0);
}

TEST(boardTest, Distance) {
    board_t p1, p2, p3;

    board_init(&p1, 3, 0);
    board_init(&p2, 0, 4);
    ASSERT_FLOAT_EQ( board_distance(&p1, &p2), 5.0);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
