#include <iostream>

int main()
{
    unsigned char option_viewed = 0x01;
    unsigned char option_edited = 0x02;
    unsigned char option_favorited = 0x04;
    unsigned char option_shared = 0x08;
    unsigned char option_deleted = 0x80;
 
    unsigned char myArticleFlags;  // По стандарту - все биты равны 0

    myArticleFlags |= option_viewed;   // Статья просмотрена, смена бита с 0 на 1
    if (myArticleFlags & option_deleted){}   // Проверка, была ли удалена статья
    myArticleFlags &= ~option_favorited;
 
    return 0;
}