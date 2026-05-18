
undefined4 FUN_ram_420123e2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    iVar2 = 0;
    do {
      puVar3 = (undefined4 *)(iVar2 + 0x3c0747c0);
      iVar1 = 0x474;
      if (*(int *)(iVar2 + 0x3fcb173c) != 0) {
        iVar1 = 0x46c;
      }
      iVar2 = iVar2 + 4;
      (*(code *)&SUB_ram_40010694)(param_1,0x3c070480,*puVar3,&DAT_ram_3c070000 + iVar1);
    } while (iVar2 != 0x20);
  }
  return 0x3fcb173c;
}

