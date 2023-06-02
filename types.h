typedef enum { typeCon, typeId, typeOpr, typeScon, typeSid } nodeEnum;

/* constants */
typedef struct {
  nodeEnum type; /* type of node */
  int value; /* value of constant */
} conNodeType;

/* constants string */
typedef struct {
  nodeEnum type;
  char* value;
} conSNodeType;

/* identifiers */
typedef struct {
  nodeEnum type; /* type of node */
  int i; /* subscript to ident array */
} idNodeType;

/* identifiers string */
typedef struct {
  nodeEnum type; /* type of node */
  int i; /* subscript to string ident array */
} idSNodeType;

/* operators */
typedef struct {
  nodeEnum type; /* type of node */
  int oper; /* operator */
  int nops; /* number of operands */
  union nodeTypeTag *op[1]; /* operands (expandable) */
} oprNodeType;

typedef union nodeTypeTag {
  nodeEnum type; /* type of node */
  conNodeType con; /* constants */
  conSNodeType conS;
  idNodeType id; /* identifiers */
  idSNodeType idS;
  oprNodeType opr; /* operators */
} nodeType;

extern int sym[26];
extern char* strings[26];