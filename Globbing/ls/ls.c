/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 10:21:36 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/21 10:23:17 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h> 
 #include<stdlib.h> 
 #include <sys/types.h> 
 #include <dirent.h> 
  
 int main(void) 
 { 
    char *curr_dir = NULL; 
    DIR *dp = NULL; 
    struct dirent *dptr = NULL; 
    unsigned int count = 0; 
  
    // Get the value of environment variable PWD 
    curr_dir = getenv("PWD"); 
    if(NULL == curr_dir) 
    { 
        printf("\n ERROR : Could not get the working directory\n"); 
        return -1; 
    } 
  
    // Open the current directory 
    dp = opendir((const char*)curr_dir); 
    if(NULL == dp) 
    { 
        printf("\n ERROR : Could not open the working directory\n"); 
        return -1; 
    } 
  
    printf("\n"); 
    // Go through and display all the names (files or folders) 
    // Contained in the directory. 
    for(count = 0; NULL != (dptr = readdir(dp)); count++) 
    { 
        printf("%s  ",dptr->d_name); 
    } 
    printf("\n %u", count); 
  
    return 0; 
 }
