// function to check a string is palindrom or not
bool isPalindrom( string &str)
{
    int i=0;
    int j = str.size();
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}