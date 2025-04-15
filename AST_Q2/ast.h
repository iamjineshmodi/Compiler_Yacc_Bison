#ifndef AST_H
#define AST_H

/* Define integer constant structure */
typedef struct {
    int value;
    int base;
} IntConstant;

/* Define node types */
typedef enum {
    INT_CONST_NODE,
    CHAR_CONST_NODE,
    STRING_NODE,
    IDENTIFIER_NODE,
    VAR_DECL_NODE,
    ASSIGN_NODE,
    BINARY_OP_NODE,
    IF_NODE,
    WHILE_NODE,
    FOR_NODE,
    PRINT_NODE,
    SCAN_NODE,
    PROGRAM_NODE,
    BLOCK_NODE,
    LIST_NODE
} NodeType;

/* Define AST node structure */
typedef struct ASTNode {
    NodeType type;
    union {
        IntConstant intval;        /* For INT_CONST_NODE */
        char charval;              /* For CHAR_CONST_NODE */
        char* strval;              /* For STRING_NODE and IDENTIFIER_NODE */
        struct {                   /* For VAR_DECL_NODE */
            char* var_name;
            char* var_type;
            int array_size;        /* For array declarations, 0 if not array */
        } var_decl;
        struct {                   /* For ASSIGN_NODE */
            struct ASTNode* left;
            struct ASTNode* right;
            int op;                /* Operation type: ASSIGN, PLUS_ASSIGN, etc. */
        } assign;
        struct {                   /* For BINARY_OP_NODE */
            struct ASTNode* left;
            struct ASTNode* right;
            int op;                /* Operation type: PLUS, MINUS, etc. */
        } binary_op;
        struct {                   /* For IF_NODE */
            struct ASTNode* condition;
            struct ASTNode* if_block;
            struct ASTNode* else_block; /* Can be NULL if no else block */
        } if_stmt;
        struct {                   /* For WHILE_NODE */
            struct ASTNode* condition;
            struct ASTNode* body;
        } while_loop;
        struct {                   /* For FOR_NODE */
            struct ASTNode* init;
            struct ASTNode* limit;
            struct ASTNode* step;
            int inc_or_dec;        /* INC or DEC */
            struct ASTNode* body;
        } for_loop;
        struct {                   /* For PRINT_NODE and SCAN_NODE */
            struct ASTNode* format_str;
            struct ASTNode* args_list; /* List of arguments */
        } io_stmt;
        struct {                   /* For LIST_NODE */
            struct ASTNode* head;
            struct ASTNode* tail;
        } list;
    } data;
} ASTNode;

/* Function to create AST nodes */
ASTNode* create_int_const_node(int value, int base);
ASTNode* create_char_const_node(char value);
ASTNode* create_string_node(char* value);
ASTNode* create_identifier_node(char* value);
ASTNode* create_var_decl_node(char* var_name, char* var_type, int array_size);
ASTNode* create_assign_node(ASTNode* left, ASTNode* right, int op);
ASTNode* create_binary_op_node(ASTNode* left, ASTNode* right, int op);
ASTNode* create_if_node(ASTNode* condition, ASTNode* if_block, ASTNode* else_block);
ASTNode* create_while_node(ASTNode* condition, ASTNode* body);
ASTNode* create_for_node(ASTNode* init, ASTNode* limit, ASTNode* step, int inc_or_dec, ASTNode* body);
ASTNode* create_print_node(ASTNode* format_str, ASTNode* args_list);
ASTNode* create_scan_node(ASTNode* format_str, ASTNode* args_list);
ASTNode* create_program_node(ASTNode* var_decl_list, ASTNode* stmt_list);
ASTNode* create_block_node(ASTNode* stmt_list);
ASTNode* create_list_node(ASTNode* head, ASTNode* tail);

/* Function to print AST in generalized list form */
void print_ast(ASTNode* node, int indent);

#endif /* AST_H */