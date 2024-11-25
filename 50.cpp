/*C Program to list all files and sub-directories in a directory*/

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h> // For directory functions
#include <sys/stat.h> // For file status

void listDirectory(const char *path) {
    struct dirent *entry;
    DIR *dir = opendir(path);

    if (dir == NULL) {
        perror("Unable to read directory");
        return;
    }

    printf("Contents of directory: %s\n", path);
    while ((entry = readdir(dir)) != NULL) {
        // Skip the current and parent directory entries
        if (entry->d_name[0] == '.' && 
           (entry->d_name[1] == '\0' || (entry->d_name[1] == '.' && entry->d_name[2] == '\0'))) {
            continue;
        }

        // Print the name of the file or directory
        printf("%s", entry->d_name);

        // Check if it's a directory
        struct stat fileStat;
        char fullPath[1024];
        snprintf(fullPath, sizeof(fullPath), "%s/%s", path, entry->d_name);

        if (stat(fullPath, &fileStat) == 0 && S_ISDIR(fileStat.st_mode)) {
            printf(" [DIR]");
        }
        printf("\n");
    }

    closedir(dir);
}

int main(int argc, char *argv[]) {
    const char *path;

    if (argc > 1) {
        path = argv[1]; // Use user-provided path
    } else {
        path = "."; // Default to current directory
    }

    listDirectory(path);

    return 0;
}
