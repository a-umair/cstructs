// VECTOR HEADER

#define INITIAL_CAPACITY 128

typedef struct {

  int slots_used;
  int max_slots;
  int *data_to_be_stored;

} Vector;

void vec_init(Vector *vector);

void vec_append(Vector *vector, int value);

int vec_get_value(Vector *vector, int index);

void vec_set_value(Vector *vector, int index, int value);

void vec_double_max_slots(Vector *vector);

void vec_wipe_all_slots(Vector *vector);
