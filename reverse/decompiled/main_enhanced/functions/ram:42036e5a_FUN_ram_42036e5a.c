
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42036e5a(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  thunk_FUN_ram_4202b7dc();
  iVar2 = _DAT_ram_3fcb6bec;
  cVar1 = *(char *)(_DAT_ram_3fcb6b88 + 1);
  if (cVar1 == '\x01') {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      param_1[2] = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 **)(iVar2 + 0xc) = param_1;
    }
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf9e(0,0,0,0);
      }
      thunk_FUN_ram_4202b7f6();
      return 2;
    }
    *(undefined1 *)(_DAT_ram_3fcb6b88 + 1) = 1;
    iVar2 = _DAT_ram_3fcb6bec;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      param_1[2] = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 **)(iVar2 + 0xc) = param_1;
    }
    FUN_ram_4202bac4();
    thunk_FUN_ram_4202b7f6();
    FUN_ram_4202fc30();
    FUN_ram_4202fc4a();
    iVar2 = FUN_ram_4202fd5c(_DAT_ram_3fcb6bec,0x42026e0c,0);
    if (iVar2 != 0) {
      FUN_ram_42036d88();
      return iVar2;
    }
    thunk_FUN_ram_4202b7dc();
    *(undefined1 *)(_DAT_ram_3fcb6bec + 0x10) = 0;
    FUN_ram_4203644e(0x42026d60,0);
    iVar2 = _DAT_ram_3fcb6bec;
    if (*(char *)(_DAT_ram_3fcb6bec + 0x10) == '\0') {
      thunk_FUN_ram_4202b7f6();
      FUN_ram_42036d88(0);
      return 0;
    }
    uVar3 = (**(code **)(_DAT_ram_3fcb6a44 + 0x90))(2000);
    (**(code **)(_DAT_ram_3fcb6a44 + 100))(iVar2 + 0x14,uVar3);
  }
  thunk_FUN_ram_4202b7f6();
  return 0;
}

