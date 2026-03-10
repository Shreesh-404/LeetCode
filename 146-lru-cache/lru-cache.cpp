class LRUCache {
public:

    struct Node{
        int key, val;
        Node* next;
        Node* prev;

        Node(int k, int v){
            key = k;
            val = v;
            next = prev = NULL;
        }
    };

    int cap;
    unordered_map<int, Node*> mp;
    Node* head;
    Node* tail;

    LRUCache(int capacity) {
        cap = capacity;

        head = new Node(-1,-1);
        tail = new Node(-1,-1);

        head->next = tail;
        tail->prev = head;
    }

    void deleteNode(Node* node){
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void insertNode(Node* node){
        Node* temp = head->next;

        head->next = node;
        node->prev = head;

        node->next = temp;
        temp->prev = node;
    }

    int get(int key) {

        if(mp.find(key) == mp.end())
            return -1;

        Node* node = mp[key];
        int ans = node->val;

        deleteNode(node);
        insertNode(node);

        return ans;
    }

    void put(int key, int value) {

        if(mp.find(key) != mp.end()){
            Node* node = mp[key];
            deleteNode(node);
            mp.erase(key);
        }

        if(mp.size() == cap){
            Node* node = tail->prev;
            mp.erase(node->key);
            deleteNode(node);
        }

        Node* newNode = new Node(key,value);
        insertNode(newNode);
        mp[key] = newNode;
    }
};