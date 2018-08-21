class LRUCache: public Cache
{
    public:
    LRUCache(int c) { cp = c; }
    
    void set(int k,int v)
    {
        Node *N;
        
        if(mp.empty()) //No nodes 
        {
            N = new Node(k,v);
            tail = head = N;
            mp[k] = N;
            
            return;
        }
        
        auto it = mp.find(k);
            
        if(it != mp.end()) //In hash table
        {
            it->second->value = v; // update value
            
            if(head == it->second) //head?
                return;
            
            it->second->prev->next = it->second->next;
            
            if(tail == it->second) //tail?
                tail = tail->prev;
            else                   //in between?
                it->second->next->prev = it->second->prev;
            
            it->second->next = head;
            it->second->prev = NULL;
            head->prev = it->second;
            head = it->second;
        }
        else               // No in hash table
        {
            N = new Node(head->prev,head,k,v); //new node
            head->prev = N; 
            head = N;
            mp[k] = N;
            
            if(mp.size() > cp) //capacity?
            {
                tail = tail->prev;
                mp.erase(tail->next->key);
                delete tail->next; 
                tail->next = NULL;
            }
            
        }

    }
    
    int get(int k)
    {
        auto it = mp.find(k);
        if(it != mp.end())
            return it->second->value;
        
        return -1;
    }
    
};