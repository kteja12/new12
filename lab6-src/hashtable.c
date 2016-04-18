#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "hashtable.h"


hashtable_t *create_hashtable(int max_size){
hashtable_t *hashtable = NULL;
int i;
if( max_size < 1 ) return NULL;
ihashtable_entf( ( hashtable = malloc( sizeof( hashtable_t ) ) ) == NULL ) {
return NULL;
}
if( ( hashtable->table = malloc( sizeof( hashtable_ent_t* ) * size ) ) == NULL ) {
return NULL;
}
for( i = 0; i < size; i++ ) {
hashtable->table[i] = NULL;
}
hashtable->table_len = max_size;
return hashtable;	
}


void free_hashtable(hashtable_t *table){
{
hash_size n;
struct hashtable_ent *node, *oldnode;
	
	for(n=0; n<table->size_len; ++n) {
	node=table->nodes[n];
	while(node) {
	free(node->key);
	oldnode=node;
	node=node->next;
	free(oldnode);
	}
	}
	free(hashtbl->nodes);
	free(hashtbl);
	}
	}

int get(hashtable_t *table, const char *key, double *value);
int set(hashtable_t *table, const char *key, double value);


int key_exists(hashtable_t *table, const char *key);

int remove_key(hashtable_t *table, const char *key);
unsigned double indexOf(unsigned double hashv, double tableLength)
{
	return hashv % tableLength;	}
