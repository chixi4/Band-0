
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4201ab3a(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = 0x102;
  if (((param_1 != 0) && (iVar1 = 0x102, *(uint *)(param_1 + 4) < 2)) &&
     (iVar1 = 0x103, _DAT_ram_3fcb66dc == (undefined4 *)0x0)) {
    puVar2 = (undefined4 *)FUN_ram_40399d1a(1,0x10);
    if (puVar2 == (undefined4 *)0x0) {
      iVar1 = 0x101;
    }
    else {
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 8);
      iVar1 = FUN_ram_4201adbe(param_1,0x4200ad3c,puVar2);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 4);
        _DAT_ram_3fcb66dc = puVar2;
        puVar2[2] = iVar1;
        if (iVar1 != 0) {
          FUN_ram_4201aaf6();
        }
        if (_DAT_ram_3fcb66dc[1] != 0) {
          uVar3 = *_DAT_ram_3fcb66dc;
          *(undefined1 *)((int)_DAT_ram_3fcb66dc + 0xd) = 0;
          FUN_ram_4201ae2a(uVar3);
          return 0;
        }
        *(undefined1 *)((int)_DAT_ram_3fcb66dc + 0xd) = 1;
        return 0;
      }
    }
    thunk_FUN_ram_40390608(puVar2);
  }
  return iVar1;
}

