#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifdef _WIN32
#include <windows.h>
#define POPEN _popen
#define PCLOSE _pclose
#else
#include <unistd.h>
#include <sys/wait.h>
#define POPEN popen
#define PCLOSE pclose
#endif

#define LOG_FILE "shell_log.txt"

void log_to_file(const char *cmd, int exit_code) {
    FILE *log = fopen(LOG_FILE, "a");
    if (!log) { perror("Error: Cannot open log file"); return; }
    time_t t = time(NULL);
    fprintf(log, "[%s] Command: %s | Exit: %d\n", ctime(&t), cmd, exit_code);
    fclose(log);
}

int main() {
    char cmd[256], output[128];
    printf("=== Task 3: Simple Shell ===\nType 'exit' to quit\n");
    while (1) {
        printf("shell> ");
        if (!fgets(cmd, sizeof(cmd), stdin)) break;
        cmd[strcspn(cmd, "\n")] = 0;
        if (strlen(cmd) == 0) continue;
        if (strcmp(cmd, "exit") == 0) break;
        FILE *fp = POPEN(cmd, "r");
        if (fp == NULL) { printf("Error\n"); log_to_file(cmd, -1); continue; }
        while (fgets(output, sizeof(output), fp)) printf("%s", output);
        int status = PCLOSE(fp);
        log_to_file(cmd, status);
    }
    return 0;
}
