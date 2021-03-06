//
// Created by Yiyang Zhao on 16/10/2017.
//

#include "Block.h"

/**
  Sets properties of the Block
  @param x for x position coordinate
  @param y for y position coordinate
  @param speed for block speed when it moves
  @param is_selected for when the block is clicked
  @param id for id

*/


float Block::get_length() {
    return length;
}

float Block::get_speed() {
    return speed;
}

float Block::get_width() {
    return width;
}

bool Block::get_selected() {
    return is_selected;
}

void Block::set_length(float length) {
    this -> length = length;
}

void Block::set_speed(float speed) {
    this -> speed = speed;
}

void Block::set_width(float width) {
    this -> width = width;
}

int Block::get_id(){
    return id;
}

void Block::set_id(int id) {
    this ->id = id;
}

void Block::init(int id) {
    this ->id = id;

}

void Block::set_selected(bool is_selected){
    this -> is_selected = is_selected;
}
