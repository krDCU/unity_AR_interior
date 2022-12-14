# Unity ARFoundation을 이용한 증강현실 가구배치 프로그램

+ 사용언어 : C#, Java, C++
+ 사용 소프트 웨어 : Unity, Android, MySql
+ 제작기한 : 2021.09 ~ 2020.06 ( 10개월 소요 )
+ 제작인원 : 4명
  + 제작 역할 : Unity ARFoundation을 이용해 증강현실 기능을 구현 후 오브젝트 생성과 삭제, 인벤토리 기능 구현
--------------------------------------------------

+ 증강현실 기능 제작 화면
![인테리어](https://user-images.githubusercontent.com/93432326/208562145-9b97ae03-c226-4be8-9ff9-4eaac336e8e4.PNG)

+ 안드로이드 / Unity 통합 후 최종 실행 영상
https://user-images.githubusercontent.com/93432326/208562746-a51a5eed-e0aa-4bca-9ddc-35f9e97e6929.mp4


------------------------------------------------------------------------
+ 프로젝트 설명 
    + Unity AR Foundation을 이용해 AR(증강현실) 기능을 구현
    + 증강현실 위에 미리 등록한 가구 모델링을 생성 / 삭제 / 이동 / 크기변환 / 회전 등의 움직임을 구현
    + 가구 배치 화면에서 닫기 버튼과 인벤토리 기능, 인벤토리 닫기 / 열기 기능 구현
    + 닫기 버튼을 누를시 다시 안드로이드 클라이언트로 이동
    + 여러개의 가구 생성을 위해 인벤토리 기능을 구현 후 해당 슬롯에 가구 등을 등록 해 버튼을 한 번 누르면 생성, 다시 누를경우 삭제 기능 구현
    + LeanTouch 컴포넌트를 이용해 가구의 회전 / 크기변환 / 이동을 구현
 
 + 구현 시 문제점들
    + Unity ARFoundation을 이용해 가구를 생성과 삭제까지는 구현을 했으나, 스크립트로 오브젝트의 이동과 크기변환, 회전 중 오류가 발생
    + 두 손가락의 터치 위치를 Vector3를 통해 구하고 그 값 범위의 차이를 이용해 이동과 크기 변환을 하려고 했으나 스크립트가 작동하지 않는 오류 가 발생
    + 이에 대한 해결방안으로 에셋스토어의 LeanTouch 컴포넌트를 이용해 모델링의 이동 / 크기변환 / 회전을 구현
    
-----------------------------------------------------------------------------

+ Refernece
  + Lean Touch 컴포넌트 ( 에셋 스토어 )
    + https://assetstore.unity.com/packages/tools/input-management/lean-touch-30111
  + 가구 모델링 ( 에셋 스토어 )
    + https://assetstore.unity.com/packages/3d/props/furniture/hdrp-furniture-pack-153946



