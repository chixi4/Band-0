
undefined4 FUN_ram_4207ea20(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_50 [68];
  
  (*(code *)&SUB_ram_40010488)(auStack_50,0xff,0x40);
  iVar1 = *(int *)(gp + -0xb4);
  iVar2 = iVar1 + 0x2f;
  iVar3 = FUN_ram_4039c0e0(iVar2,auStack_50,0x40);
  if (iVar3 == 0) {
    (*(code *)&SUB_ram_40010488)(iVar2,0,0x40);
    *(undefined1 *)(iVar1 + 0x6f) = 0;
  }
  return 0;
}

