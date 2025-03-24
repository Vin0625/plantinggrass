    #include <string>
    #include <vector>

    using namespace std;

    vector<int> solution(int brown, int yellow) {
        vector<int> answer(2);

        int y=3;
        int x=(yellow/(y-2))+2;
        int total=brown+yellow;

        while (!(total==x*y))
        {
            y++;
            while (yellow%(y-2)!=0)
            {
                y++;
            }
            x=(yellow/(y-2))+2;
        }
        
        answer[0]=x;
        answer[1]=y;

        return answer;
    }