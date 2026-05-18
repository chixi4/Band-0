
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202cc7c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if ((_DAT_ram_3fcb6b98 == (undefined4 *)0x0) &&
     (_DAT_ram_3fcb6b98 = (undefined4 *)FUN_ram_403a5e02(1,0x30),
     _DAT_ram_3fcb6b98 == (undefined4 *)0x0)) {
LAB_ram_4202cca6:
    iVar2 = 6;
  }
  else {
    puVar3 = _DAT_ram_3fcb6b98;
    iVar2 = _DAT_ram_3fcb6b98[2];
    *_DAT_ram_3fcb6b98 = 0;
    puVar3[1] = puVar3;
    if (iVar2 == 0) {
      uVar4 = FUN_ram_403a5e02(0x1e,4);
      puVar3[2] = uVar4;
      iVar2 = _DAT_ram_3fcb6b98[2];
      puVar3 = _DAT_ram_3fcb6b98;
      if (iVar2 == 0) goto LAB_ram_4202cca6;
    }
    iVar2 = (*(code *)&SUB_ram_40011a60)(puVar3 + 3,2,0x3c,iVar2," certainty; get enough evidence.")
    ;
    puVar3 = _DAT_ram_3fcb6b98;
    if (iVar2 != 0) {
      FUN_ram_403a5e1e(_DAT_ram_3fcb6b98[2]);
      puVar3 = _DAT_ram_3fcb6b98;
      _DAT_ram_3fcb6b98[2] = 0;
      (*(code *)&SUB_ram_40010488)(puVar3 + 3,0,0x1c);
      return iVar2;
    }
    if (_DAT_ram_3fcb6b98 == (undefined4 *)0x0) {
      iVar2 = 3;
    }
    else {
      uVar4 = FUN_ram_403a5e02(1,0x40);
      puVar3[10] = uVar4;
      puVar3 = _DAT_ram_3fcb6b98;
      if (_DAT_ram_3fcb6b98[10] != 0) {
        *(undefined4 *)(_DAT_ram_3fcb6b98[10] + 0x3c) = 0x4201c868;
        uVar4 = FUN_ram_403a5e02(1,0x40);
        puVar1 = _DAT_ram_3fcb6b98;
        puVar3[0xb] = uVar4;
        if (puVar1[0xb] != 0) {
          *(undefined4 *)(puVar1[0xb] + 0x3c) = 0x4201c83e;
          return 0;
        }
        FUN_ram_4202cc00();
        goto LAB_ram_4202cca6;
      }
      iVar2 = 6;
    }
    FUN_ram_4202cc00();
  }
  return iVar2;
}

