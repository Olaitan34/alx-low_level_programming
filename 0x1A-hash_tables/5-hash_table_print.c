#include "./hash_tables.h"

/**
 * hash_table_print - this prints a hash table.
 * @ht: this is a  pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nod;
	unsigned long int a;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			nod = ht->array[a];
			while (nod != NULL)
			{
				printf("'%s': '%s'", nod->key, nod->value);
				nod = nod->next;
				if (nod != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
