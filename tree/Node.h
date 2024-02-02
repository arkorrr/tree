#pragma once

struct Node
{
    char lastname[15];
	char name[15];
    char surname[15];
    char mark[15];

	Node* m_parent;

    Node* m_left;  
    Node* m_right;
	

    char* GetLastName();
    char* GetName();
    char* GetSurname();
    char* GetMark();
};