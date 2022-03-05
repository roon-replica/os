# 1. Overview

- about POSIX threads (Pthreads)
- thread 동작,생성,종료
- multi threads vs multi processes 선택에 영향을 주는 요인

thread는 응용 프로그램이 여러 작업을 동시에 수행할 수 있도록 하는 매커니즘.

process 내의 thread들은 
- 같은 프로그램을 독립적으로 실행
- 전역 메모리를 모두 공유.
- 동시에 실행될 수 있다.

  예를 들어 한 스레드가 I/O 블록되어도, 다른 스레드는 여전히 실행될 수 있다


thread는 일부 응용 프로그램에서 process보다 장점이 있다.
1. process 간 정보 공유 어려움 (프로세스 간 통신 필요)

2. fork()를 통한 프로세스 생성은 비교적 비싸다. (시간 오래 걸림)

반면에 thread는 
1. 스레드 간 정보 공유 쉬움
  
   데이터를 공유 변수 (전역, heap)에 복사하면 됨

2. 스레드 생성은 비교적 빠름
  
   자식 생성 시에 복사해야 하는 여러 프로세스 속성이 스레드 간에 공유되기 때문.       
