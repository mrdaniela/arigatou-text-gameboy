#include <gb/gb.h>
#include "jpchar.c"

void main(){
	SPRITES_8x8;
	set_sprite_data(0, 105, jpchar);
	set_sprite_tile(0, 0);
	move_sprite(0, 72, 88);
        set_sprite_tile(1, 39);
	move_sprite(1, 80, 88);
        set_sprite_tile(2, 5);
	move_sprite(2, 88, 88);
        set_sprite_tile(3, 101);
	move_sprite(3, 96, 88);
        set_sprite_tile(4, 19);
	move_sprite(4, 100, 88);
        set_sprite_tile(5, 2);
	move_sprite(5, 108, 88);
        set_sprite_tile(6, 104);
	move_sprite(6, 116, 88);
	SHOW_SPRITES;
}