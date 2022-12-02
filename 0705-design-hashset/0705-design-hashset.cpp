class MyHashSet
{
    public:

        vector<list < int>> ans;
    int size;

    MyHashSet()
    {
        size = 1e6 + 1;
        ans.resize(size);
    }

    int hash(int key)
    {
        return key % size;
    }

    list<int>::iterator search(int key)
    {
        int i = hash(key);
        return find(ans[i].begin(), ans[i].end(), key);
    }

    void add(int key)
    {
        int i = hash(key);
        if (contains(key))
        {
            return;
        }
        ans[i].push_back(key);
    }

    void remove(int key)
    {
        int i = hash(key);
        if (contains(key) == false)
        {
            return;
        }
        ans[i].erase(search(key));
    }

    bool contains(int key)
    {
        int i = hash(key);
        if (search(key) != ans[i].end())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/**
 *Your MyHashSet object will be instantiated and called as such:
 *MyHashSet* obj = new MyHashSet();
 *obj->add(key);
 *obj->remove(key);
 *bool param_3 = obj->contains(key);
 */