#include<bits/stdc++.h>
#include<stdio.h>
int visited[n];
graph head[100];
dfs(int k)
{
    edgenode *ptr;
    visited[k] = 1;
    printf("访问", k)
        ptr = head[k].firstedge;
    while (ptr<> NULL)
    {
        if (visited[ptr->vertex] = 0)
            dfs(ptr->vertex);
        ptr = ptr->nextnode;
    }
}