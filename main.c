
#include <stdio.h>
#include <string.h>
#include "globals.h"

/**
 * @brief duplicue la commande passé en paramètre
 *
 * @param pt_cmd  pointeur de la commande à dupliquer
 * @return cmd_t* retourne un pointeur sur la nouvelle commande
 */
cmd_t *dup_cmd(cmd_t *pt_cmd)
{
    /* complete code here */
}


/**
 * @brief Fonction main
 *
 * @param argc
 * @param argv
 * @return int
 */
int main(int argc, char const *argv[])
{
    char cmd1[] = "ls -al";
    cmd_t cmd_1st = {0};
    cmd_t *pt_cmd = NULL;

    cmd_1st.type = 0;
    cmd_1st.length = strlen(cmd1);
    cmd_1st.cmd = cmd1;

    pt_cmd = dup_cmd(&cmd_1st);

    pt_cmd->cmd[4] = 'H';

    printf("cmd1 %s", cmd_1st.cmd);
    printf("cmd2 %s", pt_cmd->cmd);

    return 0;
}

