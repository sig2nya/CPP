#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100

typedef struct _hash_node {
        char *key;
        int value;
        struct hash_node *next;
} hash_node;

typedef struct _hash_table {
        hash_node **buckets;
} hash_table;

unsigned int hash(const char *key, unsigned int table_size)
{
        unsigned int hash_value = 0;
        int i = 0;

        for (i = 0; key[i] != '\0'; i++) {
                hash_value = 31 * hash_value + key[i];
        }

        return hash_value % table_size;
}

hash_table *create_hash_table() {
        hash_table *table = (hash_table *) malloc(sizeof(hash_table));
        table->buckets = (hash_node **) malloc(sizeof(hash_node*) * TABLE_SIZE);
        int i = 0;

        for (i = 0; i < TABLE_SIZE; i++) {
                table->buckets[i] = NULL;
        }

        return hash_table;
}

void insert(hash_table *table, const char *key, int value) {
        unsigned int index = hash(key, TABLE_SIZE);
        hash_node *new_node = (hash_node *) malloc(sizeof(hash_node));
        new_node->key = strdup(key);
        new_node->value = value;
        new_node->next = table->buckets[index];
        table->buckets[index] = new_node;
}

int search(hash_table *table, const char *key) {
        unsigned int index = hash(key, TABLE_SIZE); // Find Hash Value
        hash_node *node = table->buckets[index];

        while (node != NULL) {
                if (strcmp(node->key, key) == 0) {
                        return node->value;
                }
                node = node->next;
        }

        return -1;
}

void delete(hash_table *table, const char *key) {
        unsigned int index = hash(key, TABLE_SIZE);
        hash_node *node = table->buckets[index];
        hash_node *prev = NULL;

        whie (node != NULL && strcmp(node->key, key) != 0) {
                prev = node;
                node = node->next;
        }

        if (node == NULL) {
                return;
        }

        if (prev == NULL) {
                table->buckets[index] = node->next;
        }
        else {
                prev->next = node->next;
        }

        free(node->key);
        free(node);
}

void free_table(hash_table *table) {
        int i =0;
        hash_node *temp;

        for (i = 0; i < TABLE_SIZE; i++) {
                hash_node *node = table->buckets[i];

                while (node != NULL) {
                        temp = node;
                        node = node->next;
                        free(temp->key);
                        free(temp);
                }
        }

        free(table->buckets);
        free(table);
}
