struct box
{
    int height;
    int width;
    int length;
};

typedef struct box box;

int get_volume(box b) {
	return b.length * b.height * b.width;
}

int is_lower_than_max_height(box b) {
	if(b.height < MAX_HEIGHT)
        return 1;
    else 
        return 0;
}