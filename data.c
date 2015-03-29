Q
#define MAX_LAST        50
#define MAX_FIRST       50
#define MAX_RECORDS     5012

struct Registrant {
    int id;
    char last_name[MAX_LAST]; 
    int last_len;
    char first_name[MAX_FIRST]; 
    int first_len;
};

struct Database {
    struct Registrant records[MAX_ROWS];
};

// A Connection would have a pointer to a file
// and a pointer to a Database 'db' which has
// records/rows of registrants
struct Connection {
    FILE *                  file;
    struct Database *       db;
};
