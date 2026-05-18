
undefined1 * FUN_ram_420b4e9c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar3 = 0;
    do {
      iVar2 = iVar3 + 4;
      iVar1 = 0x488;
      if (*(int *)(&DAT_ram_3fcb8c2c + iVar3) != 0) {
        iVar1 = 0x480;
      }
      iVar3 = iVar3 + 4;
      (*(code *)&SUB_ram_40010694)
                (param_1,0x3c0a8494,
                 *(undefined4 *)("Feelings matter, but do not conclude too fast." + iVar2),
                 &DAT_ram_3c0a8000 + iVar1);
    } while (iVar3 != 0x20);
  }
  return &DAT_ram_3fcb8c2c;
}

