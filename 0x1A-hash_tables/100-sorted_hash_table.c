#include "hash_tables.h"

/**
 *  shash_table_create - Creates a hash table
 *
 *  @size: Size of the array
 *
 *  Return: Pointer to a newly created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *create_table = NULL;

	create_table = malloc(sizeof(shash_table_t));

	if (create_table == NULL)
	{
		return (NULL);
	}

	create_table->size = size;
	create_table->array = malloc(sizeof(void *) * size);

	if (create_table->array == NULL)
	{
		free(create_table);
		return (NULL);
	}
	return (create_table);
}


/**
 *  shash_table_set - Set key/value in a hash table
 *
 *  @ht: The hash table to update
 *
 *  @key: Key to hashtable
 *
 *  @value: Value associated with key
 *
 *  Return: A pointer to the newly created hash table
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int slot = 0;

	shash_node_t *new_hash = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}

	slot = hash_djb2((const unsigned char *)key) % ht->size;

	new_hash = malloc(sizeof(shash_node_t));

	if (new_hash == NULL)
	{
		return (0);
	}

	new_hash->key = strdup(key);

	if (new_hash->key == NULL)
	{
		free(new_hash);
		return (0);
	}

	new_hash->value = strdup(value);

	if (new_hash->value == NULL)
	{
		free(new_hash->key);
		free(new_hash);
		return (0);
	}

	new_hash->next = ht->array[slot];
	ht->array[slot] = new_hash;

	return (1);
}

/**
 *  shash_table_get - Retrieves a value associated with a key.
 *
 *  @ht: The hash table you want to look into
 *
 *  @key: The value you are looking for
 *
 *  Return: A character pointer
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int slot = 0;
	shash_node_t *head = NULL;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	slot = hash_djb2((unsigned char *)key) % ht->size;

	if (ht->array[slot] != NULL)
	{
		head = ht->array[slot];

		while (head != NULL)
		{
			if (strcmp(head->key, key) == 0)
			{
				break;
			}
			head = head->next;
		}
	}
	else
	{
		return (NULL);
	}
	return (head->value);
}

/**
 *  shash_table_print - Prints a hash table
 *
 *  @ht: The hash table
 *
 *  Return: The key/value pair according to example
 */

void shash_table_print(const shash_table_t *ht)
{
	unsigned long int index = 0, flag = 0;
	shash_node_t *head = NULL;

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	while (ht->size > index)
	{
		head = ht->array[index];

		while (head != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", head->key, head->value);
			flag = 1;
			head = head->next;
		}
		index++;
	}
	printf("}\n");
}

/**
 *  shash_table_print_rev - Prints a hash table
 *
 *  @ht: The hash table
 *
 *  Return: The key/value pair according to example in reverse
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *head;

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	for (head = ht->stail; head != NULL; head = head->sprev)
	{
		printf("'%s': '%s'", head->key, head->value);

		if (head->sprev != NULL)
		{
			printf(", ");
		}
		printf("}\n");
	}
}

/**
 *  shash_table_delete - Delete a hash table
 *
 *  @ht: The hash table
 *
 *  Return: Void
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *head, *node;

	if (ht == NULL)
	{
		return;
	}

	node = ht->shead;

	while (node != NULL)
	{
		head = node->snext;
		free(node);
		node = head;
	}
	free(ht);
}