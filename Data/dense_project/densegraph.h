#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

#include <bits/stdc++.h>
#include <vector>
using namespace std;

class DenseGraph{
    public:

        DenseGraph() {
            n = 3;
            e = 0;
            v = {0, 1, 2};
            ed = {};
        }

        DenseGraph(int n_in) {
            n = n_in;
            e = 0;
            for(int i = 0; i < n_in; i++){
                v.insert(i);
            }
            ed = {};
        }

        DenseGraph(const DenseGraph& G) {
            n = G.n;
            e = G.e;
            v = G.v;
            ed = G.ed;
        }

        void AddEdge(int a, int b) {
            ed.insert(make_pair(a, b));
            e += 1;
        }

        void RemoveEdge(int a, int b) {
            if(ed.find({a, b}) != ed.end()){
                ed.erase({a, b});
            }
            e -= 1;
        }

        bool DoesEdgeExist(int a, int b) const {
            if(ed.find({a, b}) != ed.end())
                return true;
            else 
                return false;
        }

        DenseGraph Transpose() const {
            DenseGraph tmp;
            tmp.n = n;
            tmp.e = e;
            tmp.v = v;
            for(auto &e : ed){
                tmp.ed.insert(make_pair(e.second, e.first));
            }
            return tmp;
        }

    protected:
        int n;
        int e;
        set<int> v;
        set<pair<int, int>> ed;

};
#endif // __DENSE_GRAPH_H__
