#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRING_LENGTH 100
#define HASH_TABLE_SIZE 1000000

// Define a structure for a Node in the linked list
struct Node {
    char *data;          // Store the string data
    int count;           // Store the count of occurrences
    struct Node *next;   // Pointer to the next node in the linked list
};

// Define a structure for the HashMap
struct HashMap {
    struct Node *table[HASH_TABLE_SIZE];   // Array of pointers to Nodes (linked lists)
};

// Improved hash function (djb2)
unsigned long hash(const char *str) {
    unsigned long hash_value = 5381;
    int c;
    while ((c = *str++)) {
        hash_value = ((hash_value << 5) + hash_value) + c;
    }
    return hash_value % HASH_TABLE_SIZE;
}

// Function to insert a string into the hash map
void insert(struct HashMap *hashMap, const char *key) {
    unsigned long index = hash(key);
    struct Node *current = hashMap->table[index];

    // Traverse the linked list at the index
    while (current != NULL) {
        // If the string is already in the list, increment count and return
        if (strcmp(current->data, key) == 0) {
            current->count++;
            return;
        }
        current = current->next;
    }

    // If the string is not in the list, create a new node and add it to the linked list
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = strdup(key);
    if (newNode->data == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    newNode->count = 1;
    newNode->next = hashMap->table[index];
    hashMap->table[index] = newNode;
}

int main() {
    int nos;

    // Read the number of strings
    if (scanf("%d", &nos) != 1) {
        fprintf(stderr, "Error reading input\n");
        exit(EXIT_FAILURE);
    }

    // Allocate memory for an array of strings
    char **arr = (char **)malloc(nos * sizeof(char *));
    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    // Read each string and store it in the array
    for (int i = 0; i < nos; i++) {
        arr[i] = (char *)malloc((MAX_STRING_LENGTH + 1) * sizeof(char));
        if (arr[i] == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }
        if (scanf("%s", arr[i]) != 1) {
            fprintf(stderr, "Error reading input\n");
            exit(EXIT_FAILURE);
        }
    }

    // Initialize the HashMap
    struct HashMap t1;
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        t1.table[i] = NULL;
    }

    // Insert each string into the HashMap
    for (int i = 0; i < nos; i++) {
        insert(&t1, arr[i]);
    }

    // Find the maximum count of occurrences
    int maxValueInMap = 0;
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        struct Node *current = t1.table[i];
        while (current != NULL) {
            if (current->count > maxValueInMap) {
                maxValueInMap = current->count;
            }
            current = current->next;
        }
    }

    // Count the number of strings with the maximum count
    int count = 0;
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        struct Node *current = t1.table[i];
        while (current != NULL) {
            if (current->count == maxValueInMap) {
                count++;
            }
            current = current->next;
        }
    }

    // Print the result
    printf("%d\n", count);

    // Free allocated memory
    for (int i = 0; i < nos; i++) {
        free(arr[i]);
    }
    free(arr);

    // Free memory used by the HashMap
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        struct Node *current = t1.table[i];
        while (current != NULL) {
            struct Node *temp = current;
            current = current->next;
            free(temp->data);
            free(temp);
        }
    }

    return 0;
}
