#include <stdio.h>
#include <string.h>

#define MAX_QUIZZES 10
#define MAX_LEN 100

// 퀴즈 데이터
char quizzes[MAX_QUIZZES][MAX_LEN] = {
    "다음 중 가장 큰 도시는 어디일까요?",
    "2+2는?",
    "지구에서 가장 큰 대륙은?",
    "영어로 '사과'는 무엇일까요?",
    "2의 제곱은?",
    // 나머지 퀴즈 데이터 추가
};

char answers[MAX_QUIZZES][MAX_LEN] = {
    "서울",
    "4",
    "아시아",
    "apple",
    "4",
    // 나머지 정답 데이터 추가
};

char hints[MAX_QUIZZES][MAX_LEN] = {
    "아시아의 수도",
    "1+1+1+1",
    "한국이 있는 대륙",
    "빨간 과일",
    "4의 제곱근",
    // 나머지 힌트 데이터 추가
};

int main() {
    printf("퀴즈 게임을 시작합니다!\n");

    int correct_answers = 0;

    // 각 퀴즈에 대해 반복하여 사용자에게 질문하고 답변을 확인
    for (int i = 0; i < MAX_QUIZZES; i++) {
        char user_answer[MAX_LEN];
        printf("%s\n", quizzes[i]);
        printf("정답을 입력하세요: ");
        scanf("%s", user_answer);

        // 대소문자 구분 없이 정답을 비교
        if (strcmp(user_answer, answers[i]) == 0) {
            printf("정답입니다!\n\n");
            correct_answers++;
        } else {
            printf("틀렸습니다. 힌트: %s\n\n", hints[i]);
        }
    }

    // 결과 출력
    printf("퀴즈가 종료되었습니다!\n");
    printf("정답 수: %d/%d\n", correct_answers, MAX_QUIZZES);

    return 0;
}