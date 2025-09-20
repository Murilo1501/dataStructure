typedef struct float_vector FloatVector;

FloatVector *create(int capacity);
void destroy(FloatVector **vec);
int size(FloatVector *vec);
int capacity(FloatVector *vec);
float at(FloatVector *vec, int index);
float get(FloatVector *vec,int index);
void append(FloatVector *vec, int index,float val);
void set(FloatVector *vec,int index,float val);
void print(FloatVector *vec);