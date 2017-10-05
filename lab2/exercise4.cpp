//Sean Comerford 15485892
#include <iostream>
 
using namespace std;
 
const int size = 50;
 
 
int my_string_len(char str[])
{
    int count = 0;
 
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
 
    return count;
}
 
void my_string_cat(char dest[], char src[], int dest_size)
{
    int src_len = my_string_len(src);
    int dest_len = my_string_len(dest);
 
    if (src_len + dest_len < dest_size)
    {
        for (int i = dest_len, j = 0; j < src_len; i++, j++)
        {
            dest[i] = src[j];
        }
 
        cout << "Concatenated string:\n" << dest << endl;
    }
 
    else
    {
        cout << "Not enough space left in destination string to concatenate with source string" << endl;
    }
}
 
int main()
{
    char src[size], dest[size];
 
    cout << "Enter a source string less than 50 characters long:" << endl;
    cin.getline(src, size);
 
    cout << "Enter a destination string less than 50 characters long:" << endl;
    cin.getline(dest, size);
 
    my_string_cat(dest, src, size);
 
    return 0;
}
