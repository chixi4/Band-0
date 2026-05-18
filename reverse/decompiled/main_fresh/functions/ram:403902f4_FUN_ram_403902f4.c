
void FUN_ram_403902f4(void)

{
  int iVar1;
  undefined4 auStack_14 [4];
  
  auStack_14[0] = 1;
  iVar1 = FUN_ram_4039fd80();
  if (iVar1 != 0) {
    (*(code *)&SUB_ram_40010044)(100000);
    (*(code *)&SUB_ram_40010044)(100000);
  }
  gp = 0x3fcc73f0;
  mtvec = 0x40380001;
  auStack_14[0] = (*(code *)&SUB_ram_40010018)(0);
  (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcb8ba0,0,0xc878);
  (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcb6a00,0,0x1f0);
  FUN_ram_40399076();
  (*(code *)&SUB_ram_40010734)(0x54,0xac);
  thunk_FUN_ram_420106a8();
  FUN_ram_42010570();
  FUN_ram_42010590(auStack_14);
  (*(code *)&LAB_ram_e5ab88e5)();
  return;
}

