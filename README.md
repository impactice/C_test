# C_test

## vscode에 c 사용 

https://www.msys2.org/

```
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```

<img width="718" height="409" alt="image" src="https://github.com/user-attachments/assets/bf9b7410-0453-493c-ba71-d482065f94c3" />

## Windows에서 PATH 환경 변수에 GCC 등록하기

### 1. 환경 변수 창 열기

1. **Windows 키 + S** 를 눌러 검색창을 엽니다.
2. `환경 변수` 를 입력합니다.
3. 검색 결과에서 **시스템 환경 변수 편집** 을 클릭합니다.

---

### 2. 환경 변수 설정 창 열기

시스템 속성 창이 열리면 아래쪽의 **환경 변수(N)...** 버튼을 클릭합니다.

---

### 3. PATH 변수 찾기

환경 변수 창이 열리면:

* 위쪽: **사용자 변수**
* 아래쪽: **시스템 변수**

두 영역으로 나뉘어 있습니다.

아래쪽 **시스템 변수** 목록에서 다음 항목을 찾습니다.

```text
Path
```

또는

```text
PATH
```

찾은 후 클릭하여 선택합니다.

---

### 4. GCC 경로 추가하기

1. **Path** 를 선택한 상태에서 **편집(I)...** 버튼을 클릭합니다.
2. **새로 만들기(N)** 버튼을 클릭합니다.
3. 아래 경로를 입력합니다.

```text
C:\msys64\ucrt64\bin
```

> ⚠️ MSYS2를 다른 위치에 설치했다면 해당 위치의 `ucrt64\bin` 폴더 경로를 입력해야 합니다.

예시:

```text
D:\Tools\msys64\ucrt64\bin
```

---

### 5. 저장 및 종료

모든 설정이 끝나면:

1. **확인**
2. **확인**
3. **확인**

버튼을 차례대로 눌러 저장하고 창을 닫습니다.

---

### 6. 등록 확인

새 명령 프롬프트(CMD)를 열고 아래 명령어를 입력합니다.

```bash
gcc --version
```

정상적으로 버전 정보가 출력되면 PATH 등록이 완료된 것입니다.

예시:

```text
gcc.exe (Rev3, Built by MSYS2 project) 15.1.0
Copyright (C) ...
```

✅ 이제 어느 폴더에서든 `gcc` 명령어를 사용할 수 있습니다.

<img width="981" height="511" alt="image" src="https://github.com/user-attachments/assets/479b0dc1-aa3b-49c0-8a93-a4c7ceae33ba" />



# VS Code 터미널 한글 깨짐 영구 해결 방법 (약 30초)

## 1. 설정 파일(JSON) 열기

1. VS Code에서 **Ctrl + Shift + P** 를 누릅니다.
2. 검색창에 아래 내용을 입력합니다.

```text
Preferences: Open User Settings (JSON)
```

3. 반드시 **(JSON)** 이 붙은 항목을 선택합니다.

---

## 2. Code Runner 실행 명령 수정하기

설정 파일에서 `"code-runner.executorMap"` 항목을 찾습니다.

### 수정 전

```json
"c": "cd $dir && gcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt"
```

### 수정 후

```json
"c": "chcp 65001 && cd $dir && gcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt"
```

> 💡 C++도 사용할 예정이라면 `"cpp"` 항목에도 동일하게 `chcp 65001 &&` 를 추가하는 것이 좋습니다.

---

## 3. JSON 파일이 비어 있는 경우

처음 설정 파일을 열었을 때 아래처럼 비어 있는 것이 정상입니다.

```json
{
}
```

이 경우 기존 내용을 모두 지우고 아래 코드를 그대로 붙여넣으세요.

```json
{
    "code-runner.executorMap": {
        "c": "chcp 65001 && cd $dir && gcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
        "cpp": "chcp 65001 && cd $dir && g++ $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt"
    }
}
```

---

## 4. 저장 후 테스트

1. **Ctrl + S** 로 저장합니다.
2. C 소스 파일로 돌아갑니다.
3. **Ctrl + Alt + N** 을 눌러 실행합니다.

정상 적용되었다면 터미널에 아래와 같은 문구가 표시됩니다.

```text
Active code page: 65001
```

---

# 그래도 한글이 깨진다면?

`chcp 65001` 설정을 했는데도 한글이 깨진다면, 현재 소스 파일의 **인코딩(Encoding)** 문제일 가능성이 높습니다.

---

## 1단계: VS Code 기본 인코딩 변경

### 설정 창 열기

**Ctrl + , (쉼표)** 를 누릅니다.

### Encoding 검색

상단 검색창에 아래 내용을 입력합니다.

```text
encoding
```

### Files: Encoding 변경

기본값인

```text
utf-8
```

을

```text
Korean (EUC-KR)
```

로 변경합니다.

---

## 2단계: 현재 파일 인코딩 변경

> ⚠️ 매우 중요
>
> 기본 인코딩 변경은 새 파일부터 적용됩니다.
> 현재 작성 중인 파일은 직접 다시 저장해야 합니다.

### 적용 방법

1. 한글이 포함된 `test.c` 파일을 엽니다.
2. VS Code 오른쪽 아래 상태 표시줄의 **UTF-8** 을 클릭합니다.
3. **Save with Encoding** 을 선택합니다.
4. 검색창에 `korean` 을 입력합니다.
5. **Korean (EUC-KR)** 을 선택합니다.
6. **Ctrl + S** 로 저장합니다.

---

## 3단계: 다시 실행

다시 실행합니다.

```text
Ctrl + Alt + N
```

또는 상단의 실행 버튼(▶)을 클릭합니다.

이제 터미널에서 한글이 정상적으로 출력되는 것을 확인할 수 있습니다.

---

## 최종 점검 체크리스트

* [x] GCC 경로(PATH) 등록 완료
* [x] `chcp 65001` 추가 완료
* [x] JSON 설정 저장 완료
* [x] 파일 인코딩 설정 확인
* [x] 기존 소스 파일을 EUC-KR로 다시 저장
* [x] VS Code 재실행 후 테스트

위 항목을 모두 적용했다면 대부분의 한글 깨짐 문제는 해결됩니다.
