string Lists = "";
string test()
{
    int x = ids.size()/3;
    //int x = sqrt(ids.size());
    string Lists = "";
    for (int i = 0; i < x ; i++)
    {
        Lists = Lists + ids[i][0] + " -> {";
        for (int j = 1; j < ids[i].size(); j++)
        {
            Lists = Lists + ids[i][j] + ",";
        }

        if (Lists.back() == ',')
        {
            Lists.pop_back();
        }

        Lists = Lists + "}\r\n";
    }
    return Lists;

}


string Finaal() {
    string Final = "digraph test{\n" + test() + "\n}";
    return Final;
}
