
undefined4 FUN_ram_42038950(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_50 [68];
  
  (*(code *)&SUB_ram_40010488)(auStack_50,0xff,0x40);
  iVar1 = *(int *)(gp + -0x2b8);
  iVar2 = iVar1 + 0x2f;
  iVar3 = FUN_ram_40399d6c(iVar2,auStack_50,0x40);
  if (iVar3 == 0) {
    (*(code *)&SUB_ram_40010488)(iVar2,0,0x40);
    *(undefined1 *)(iVar1 + 0x6f) = 0;
  }
  return 0;
}

