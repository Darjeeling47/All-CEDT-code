#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

#include <bits/stdc++.h>
using namespace std;

class SparseGraph{

    protected:
        int n;

        class node {
            friend class SparseGraph;
            public:
                set<int> in;
                set<int> out;
        };
        node v[100000];

    public:
        SparseGraph() {
            n = 3;
            v[0].in = {};
            v[0].out = {};
            v[1].in = {};
            v[1].out = {};
            v[2].in = {};
            v[2].out = {};
        }

        SparseGraph(int n_in) {
            n = n_in;
            for(int i = 0; i < n_in; i++){
                v[i].in = {};
                v[i].out = {};
            }
        }

        SparseGraph(const SparseGraph& G) {
            n = G.n;
            for(int i = 0; i < n; i++){
                v[i].in = G.v[i].in;
                v[i].out = G.v[i].out;
            }
        }

        void AddEdge(int a, int b) {
            v[a].in.insert(b);
            v[b].out.insert(a);
        }

        void RemoveEdge(int a, int b) {
            v[a].in.erase(b);
            v[b].out.erase(a);
        }

        bool DoesEdgeExist(int a, int b) const {
            if(v[a].in.find(b) != v[a].in.end()){
                return true;
            }
            else{
                return false;
            }
        }

        SparseGraph Transpose() const {
            SparseGraph tmp;
            tmp.n = n;
            for(int i = 0; i < n; i++){
                tmp.v[i].out = v[i].in;
                tmp.v[i].in = v[i].out;
            }
            return tmp;
        }
};
#endif // __SPARSE_GRAPH_H__

