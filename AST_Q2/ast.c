#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "parser.tab.h"

/* Define the global line number variable */
int line_num = 1;


/* Create AST nodes functions */
ASTNode* create_int_const_node(int value, int base) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = INT_CONST_NODE;
    node->data.intval.value = value;
    node->data.intval.base = base;
    return node;
}

ASTNode* create_char_const_node(char value) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = CHAR_CONST_NODE;
    node->data.charval = value;
    return node;
}

ASTNode* create_string_node(char* value) {
    // Allocate memory for the modified string (without spaces)
    char* no_spaces = (char*)malloc(strlen(value) + 1); // +1 for '\0'
    int j = 0;

    for (int i = 0; value[i] != '\0'; ++i) {
        if (value[i] != ' ') {
            no_spaces[j++] = value[i];
        }
    }

    no_spaces[j] = '\0'; // Null-terminate the string

    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = STRING_NODE;
    node->data.strval = no_spaces;

    return node;
}

ASTNode* create_identifier_node(char* value) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = IDENTIFIER_NODE;
    node->data.strval = strdup(value);
    return node;
}

ASTNode* create_var_decl_node(char* var_name, char* var_type, int array_size) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = VAR_DECL_NODE;
    node->data.var_decl.var_name = strdup(var_name);
    node->data.var_decl.var_type = strdup(var_type);
    node->data.var_decl.array_size = array_size;
    return node;
}

ASTNode* create_assign_node(ASTNode* left, ASTNode* right, int op) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = ASSIGN_NODE;
    node->data.assign.left = left;
    node->data.assign.right = right;
    node->data.assign.op = op;
    return node;
}

ASTNode* create_binary_op_node(ASTNode* left, ASTNode* right, int op) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = BINARY_OP_NODE;
    node->data.binary_op.left = left;
    node->data.binary_op.right = right;
    node->data.binary_op.op = op;
    return node;
}

ASTNode* create_if_node(ASTNode* condition, ASTNode* if_block, ASTNode* else_block) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = IF_NODE;
    node->data.if_stmt.condition = condition;
    node->data.if_stmt.if_block = if_block;
    node->data.if_stmt.else_block = else_block;
    return node;
}

ASTNode* create_while_node(ASTNode* condition, ASTNode* body) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = WHILE_NODE;
    node->data.while_loop.condition = condition;
    node->data.while_loop.body = body;
    return node;
}

ASTNode* create_for_node(ASTNode* init, ASTNode* limit, ASTNode* step, int inc_or_dec, ASTNode* body) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = FOR_NODE;
    node->data.for_loop.init = init;
    node->data.for_loop.limit = limit;
    node->data.for_loop.step = step;
    node->data.for_loop.inc_or_dec = inc_or_dec;
    node->data.for_loop.body = body;
    return node;
}

ASTNode* create_print_node(ASTNode* format_str, ASTNode* args_list) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = PRINT_NODE;
    node->data.io_stmt.format_str = format_str;
    node->data.io_stmt.args_list = args_list;
    return node;
}

ASTNode* create_scan_node(ASTNode* format_str, ASTNode* args_list) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = SCAN_NODE;
    node->data.io_stmt.format_str = format_str;
    node->data.io_stmt.args_list = args_list;
    return node;
}

ASTNode* create_program_node(ASTNode* var_decl_list, ASTNode* stmt_list) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = PROGRAM_NODE;
    node->data.list.head = var_decl_list;
    node->data.list.tail = stmt_list;
    return node;
}

ASTNode* create_block_node(ASTNode* stmt_list) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = BLOCK_NODE;
    node->data.list.head = stmt_list;
    node->data.list.tail = NULL;
    return node;
}

ASTNode* create_list_node(ASTNode* head, ASTNode* tail) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    node->type = LIST_NODE;
    node->data.list.head = head;
    node->data.list.tail = tail;
    return node;
}
/* Print AST in generalized list form */
void print_ast(ASTNode* node, int indent) {
    if (node == NULL) return;
    
    switch (node->type) {
        case INT_CONST_NODE:
            printf("(%d %d)", node->data.intval.value, node->data.intval.base);
            break;
        case CHAR_CONST_NODE:
            printf("'%c'", node->data.charval);
            break;
        case STRING_NODE:
            printf("\"%s\"", node->data.strval);
            break;
        case IDENTIFIER_NODE:
            printf("%s", node->data.strval);
            break;
        case VAR_DECL_NODE:
            if (node->data.var_decl.array_size > 0) {
                printf("(%s[%d] %s)", 
                       node->data.var_decl.var_name, 
                       node->data.var_decl.array_size, 
                       node->data.var_decl.var_type);
            } else {
                printf("(%s %s)", 
                       node->data.var_decl.var_name, 
                       node->data.var_decl.var_type);
            }
            break;
        case ASSIGN_NODE:
            printf("(:= ");
            print_ast(node->data.assign.left, indent);
            printf(" ");
            print_ast(node->data.assign.right, indent);
            printf(")");
            break;
        case BINARY_OP_NODE:
            printf("(");
            switch (node->data.binary_op.op) {
                case PLUS: printf("+ "); break;
                case MINUS: printf("- "); break;
                case MULT: printf("* "); break;
                case DIV: printf("/ "); break;
                case MOD: printf("%% "); break;
                case GT: printf("> "); break;
                case LT: printf("< "); break;
                case GE: printf(">= "); break;
                case LE: printf("<= "); break;
                case EQ: printf("= "); break;
                case NE: printf("<> "); break;
                default: printf("unknown_op "); break;
            }
            print_ast(node->data.binary_op.left, indent);
            printf(" ");
            print_ast(node->data.binary_op.right, indent);
            printf(")");
            break;
        case IF_NODE:
            printf("(if ");
            print_ast(node->data.if_stmt.condition, indent);
            printf(" ");
            print_ast(node->data.if_stmt.if_block, indent);
            if (node->data.if_stmt.else_block != NULL) {
                printf(" ");
                print_ast(node->data.if_stmt.else_block, indent);
            }
            printf(")");
            break;
        case WHILE_NODE:
            printf("(while ");
            print_ast(node->data.while_loop.condition, indent);
            printf(" ");
            print_ast(node->data.while_loop.body, indent);
            printf(")");
            break;
        case FOR_NODE:
            printf("(for ");
            print_ast(node->data.for_loop.init, indent);
            printf(" ");
            print_ast(node->data.for_loop.limit, indent);
            printf(" ");
            if (node->data.for_loop.inc_or_dec == INC) {
                printf("(inc ");
            } else {
                printf("(dec ");
            }
            print_ast(node->data.for_loop.step, indent);
            printf(") ");
            print_ast(node->data.for_loop.body, indent);
            printf(")");
            break;
        case PRINT_NODE:
            printf("(print ");
            print_ast(node->data.io_stmt.format_str, indent);
            if (node->data.io_stmt.args_list != NULL) {
                printf(" ");
                print_ast(node->data.io_stmt.args_list, indent);
            }
            printf(")");
            break;
        case SCAN_NODE:
            printf("(scan ");
            print_ast(node->data.io_stmt.format_str, indent);
            printf(" ");
            print_ast(node->data.io_stmt.args_list, indent);
            printf(")");
            break;
        case PROGRAM_NODE:
        case LIST_NODE:
            printf("(");
            print_ast(node->data.list.head, indent);
            if (node->data.list.tail != NULL) {
                printf(" ");
                print_ast(node->data.list.tail, indent);
            }
            printf(")");
            break;
        case BLOCK_NODE:
            printf("(");
            print_ast(node->data.list.head, indent);
            printf(")");
            break;
    }
}