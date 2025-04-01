#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    int hit = 1;
    int miss = 5;

    vector<string> cache;

    for (string city : cities) {
        // 도시 이름을 대문자로 변환
        transform(city.begin(), city.end(), city.begin(), ::toupper);

        // 캐시 크기가 0인 경우
        if (cacheSize == 0) {
            answer += miss;
            continue;
        }

        // 캐시에서 도시 검색
        auto it = find(cache.begin(), cache.end(), city);

        // 캐시 히트
        if (it != cache.end()) {
            // LRU 업데이트: 해당 요소를 캐시에서 삭제하고 맨 뒤에 추가
            cache.erase(it);
            cache.push_back(city);
            answer += hit;
        } else {
            // 캐시 미스
            // 캐시가 가득 찼으면 LRU 정책에 따라 가장 오래된 요소 삭제
            if (cache.size() == cacheSize) {
                cache.erase(cache.begin());
            }
            // 새로운 요소 캐시에 추가
            cache.push_back(city);
            answer += miss;
        }
    }

    return answer;
}
