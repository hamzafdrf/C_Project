#include<stdio.h>
#include<string.h> 
void get_repo_alias(const char* full_path, char* alias_out)
 { 
    snprintf(alias_out, 16, "repo-%04x", (unsigned int)strlen(full_path) * 31);
 } 
 int main(void)
  {    
    char alias[16]; 
       const char* repo = "https://github.com/repository/c-framework-core";   
        get_repo_alias(repo, alias);
        printf("Original : %s\n", repo);
            printf("Alias ID : %s\n", alias);    return 0; }