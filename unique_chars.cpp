// brute force method O(n!) worse case
bool are_all_characters_unique(string str)
{
  for(int i = 0; i < str.length(); i++)
  {
    for(int j = i + 1; j < str.length(); j++)
    {
      if(str[i] == str[j])
        return false;
    }
  }
  return true;
}
