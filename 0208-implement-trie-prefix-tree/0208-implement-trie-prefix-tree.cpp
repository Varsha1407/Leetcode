class Trie {
    struct Node {
        Node* next[26] = {};
        bool isEnd = false;
    }; Node* root;

public:
    Trie() { root = new Node(); }

    void insert(string word) {
        Node* node = root;
        for (char c : word) {
            if (!node->next[c - 'a']) {
                node->next[c - 'a'] = new Node();
            }
                node = node->next[c - 'a'];
            
        }
        node->isEnd = true;
    }

    bool search(string word) {
        Node* node = root;
        for(char c : word){
            node = node->next[c-'a'];
            if(!node) return false;
        }
        return node->isEnd;
    }

    bool startsWith(string prefix) {
        Node* node = root;
        for(char c: prefix){
            node = node->next[c-'a'];
            if(!node) return false;
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */