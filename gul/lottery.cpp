#include <algorithm>
#include <iostream>
#include <random>
#include <string>
#include <vector>

using namespace std;

int fst, scd, trd, fth, ffh;

vector<int> genNum() {
    random_device rd;
    mt19937_64 gen(rd());
    uniform_int_distribution<__int64> dis(1, 45);
    vector<int> lotto;
    lotto.push_back(dis(gen));
    int i = 1;
    while (i < 7) {
        int randnum = dis(gen);
        if (randnum != lotto[i - 1]) {
            lotto.push_back(randnum);
            i++;
        }
    }
    return lotto;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    string line = "5게임씩 진행합니다. 로또를 사는 횟수를 입력하세요. : ";
    cout << line;
    cin >> n;

    long long money = 0;

    for (int i = 1; i <= n; i++) {
        vector<int> lotto(genNum());
        int bonus = lotto.back();
        lotto.pop_back();

        for (int j = 0; j < 5; j++) {
            vector<int> mynum(genNum());
            money -= 1000;

            mynum.pop_back();
            int cnt = 0;
            for (int k = 0; k < 6; k++) {
                int aus = mynum[k];
                if (find(lotto.begin(), lotto.end(), aus) != lotto.end()) cnt++;
            }

            if (cnt == 6) {
                cout << "1등!" << '\n';
                money += 1952160000;
                fst++;
            } else if (cnt == 5) {
                if (find(mynum.begin(), mynum.end(), bonus) != mynum.end()) {
                    cout << "2등!" << '\n';
                    money += 54226666;
                    scd++;
                } else {
                    cout << "3등!" << '\n';
                    money += 1427017;
                    trd++;
                }
            } else if (cnt == 4) {
                cout << "4등!" << '\n';
                money += 50000;
                fth++;
            } else if (cnt == 3) {
                cout << "5등!" << '\n';
                money += 5000;
                ffh++;
            } else {
                cout << "꽝!" << '\n';
            }
        }
    }

    string res = (money >= 0) ? "원의 수익을 거뒀습니다." : "원의 손해를 입었습니다.";
    string pt = "원의 당첨금을 수령하십시오.";

    long long prz = 0;

    cout << '<' << n * 5 << " 회의 로또 결과>" << '\n';
    cout << "1등 : " << fst << " 회" << '\n';
    if (fst > 0) {
        prz += fst * 1952160000;
        cout << prz << pt << '\n';
    }
    cout << "2등 : " << scd << " 회" << '\n';
    if (scd > 0) {
        prz += scd * 54226666;
        cout << scd * 54226666 << pt << '\n';
    }
    cout << "3등 : " << trd << " 회" << '\n';
    if (trd > 0) {
        prz += trd * 1427017;
        cout << trd * 1427017 << pt << '\n';
    }
    cout << "4등 : " << fth << " 회" << '\n';
    if (fth > 0) {
        prz += fth * 50000;
        cout << fth * 50000 << pt << '\n';
    }
    cout << "5등 : " << ffh << " 회" << '\n';
    if (ffh > 0) {
        prz += ffh * 5000;
        cout << ffh * 5000 << pt << '\n';
    }
    cout << "낙첨 : " << n * 5 - fst - scd - trd - fth - ffh << " 회" << '\n';
    cout << "총 당첨금은 " << prz << "원입니다." << '\n';
    cout << n * 5000 << "원 소비를 통해 " << money << res << '\n';
}