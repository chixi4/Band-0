
undefined4 FUN_ram_4207e9d4(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_50 [72];
  
  (*(code *)&SUB_ram_40010488)(auStack_50,0xff,0x40);
  iVar1 = *(int *)(gp + -0xb4) + 0x392;
  iVar2 = FUN_ram_4039c0e0(iVar1,auStack_50,0x40);
  if (iVar2 == 0) {
    (*(code *)&SUB_ram_40010488)(iVar1,0,0x40);
  }
  return 0;
}

