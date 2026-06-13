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


### 잘 설치 되었는지 확인 

```
gcc --version
```

<img width="981" height="511" alt="image" src="https://github.com/user-attachments/assets/479b0dc1-aa3b-49c0-8a93-a4c7ceae33ba" />
