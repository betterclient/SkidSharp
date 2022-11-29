#ifndef CATS_VISITOR
#define CATS_VISITOR
#include "AST.h"

typedef struct VISITOR_STRUCT {
} visitor_T;

visitor_T* init_visitor();

AST_T* visitor_visit(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_variable_definition(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_function_definition(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_variable(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_function_call(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_string(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_compound(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_pack(visitor_T* visitor, AST_T* node);

AST_T* visitor_visit_class(visitor_T* visitor, AST_T* node);

#endif