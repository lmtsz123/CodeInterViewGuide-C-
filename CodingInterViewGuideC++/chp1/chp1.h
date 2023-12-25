//
// Created by lmt on 2023/12/13.
//

#ifndef CODINGINTERVIEWGUIDEC___CHP1_H
#define CODINGINTERVIEWGUIDEC___CHP1_H

#include <vector>
#include <deque>

std::vector<int> getMaxWindow(std::vector<int> aar,int w) {
    if (aar.empty() || w < 1 || w > aar.size()) {
        return {};
    }
    std::vector<int> res;

    std::deque<int> qmax;
    for(int i = 0; i < aar.size(); i++) {
        while (!qmax.empty() && aar[qmax.back()] < aar[i]) {
            qmax.pop_back();
        }
        qmax.push_back(i);
        if(qmax.front() == i - w) {
            qmax.pop_front();
        }
        if(i >= w - 1){
            res.push_back(aar[qmax.front()]);
        }
    }
    return res;
}


#endif //CODINGINTERVIEWGUIDEC___CHP1_H
