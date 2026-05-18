
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202103c(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  
  if (_DAT_ram_3fcc514c != (int *)0x0) {
    iVar3 = thunk_FUN_ram_42046bd8();
    piVar1 = _DAT_ram_3fcc514c;
    *(char *)((int)_DAT_ram_3fcc514c + 5) = (char)iVar3;
    iVar4 = FUN_ram_4039c08e(iVar3 * iVar3 + 7 >> 3,1);
    *piVar1 = iVar4;
    if (iVar4 == 0) {
      *(undefined1 *)((int)piVar1 + 6) = 0;
    }
    else {
      iVar8 = 0;
      iVar7 = 0;
      for (iVar4 = 0; iVar4 < iVar3; iVar4 = iVar4 + 1) {
        iVar2 = 0;
        do {
          iVar5 = thunk_FUN_ram_420476b8(param_1,iVar2,iVar4);
          if (iVar5 != 0) {
            pbVar6 = (byte *)(*_DAT_ram_3fcc514c + (iVar2 + iVar7 >> 3));
            *pbVar6 = (byte)(1 << ((iVar8 + -1) - iVar2 & 7U)) | *pbVar6;
          }
          iVar2 = iVar2 + 1;
        } while (iVar3 != iVar2);
        iVar7 = iVar7 + iVar3;
        iVar8 = iVar8 - iVar3;
      }
      *(undefined1 *)((int)_DAT_ram_3fcc514c + 6) = 1;
    }
  }
  return;
}

