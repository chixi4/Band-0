
undefined4 FUN_ram_420389a4(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [40];
  
  (*(code *)&SUB_ram_40010488)(auStack_30,0xff,0x20);
  iVar1 = *(int *)(gp + -0x2b8) + 0x451;
  iVar2 = FUN_ram_40399d6c(iVar1,auStack_30,0x20);
  if (iVar2 == 0) {
    (*(code *)&SUB_ram_40010488)(iVar1,0,0x20);
  }
  return 0;
}

