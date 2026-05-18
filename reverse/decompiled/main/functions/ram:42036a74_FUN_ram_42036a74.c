
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42036a74(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = *_DAT_ram_3fcb6b88;
  if (cVar1 == '\x01') {
    iVar3 = FUN_ram_4202b7a4();
    if (iVar3 != 0) goto LAB_ram_42036abe;
  }
  else {
    if (cVar1 == '\x02') {
LAB_ram_42036abe:
      iVar3 = FUN_ram_42034ed6();
      if (iVar3 == 0) {
        return 0x14;
      }
      (*(code *)&SUB_ram_40011aac)(iVar3,param_1);
      *(char *)(iVar3 + 2) = (char)param_3;
      if (param_3 != 0) {
        FUN_ram_4039c11e(iVar3 + 3,param_2,param_3);
      }
      FUN_ram_4202d766(iVar3,param_3 + 3);
      iVar4 = FUN_ram_42034eb2(iVar3);
      if (iVar4 == 0) {
        return 0;
      }
      if (iVar4 == 7) {
        uVar2 = 0x14;
      }
      else {
        uVar2 = 0x11;
      }
      thunk_EXT_FUN_ram_40010ae8(iVar3);
      return uVar2;
    }
    if (cVar1 != '\0') {
      return 0x11;
    }
  }
  return 0x16;
}

