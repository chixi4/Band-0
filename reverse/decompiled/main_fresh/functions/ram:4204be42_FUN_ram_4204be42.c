
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4204be42(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_28 [4];
  int *apiStack_24 [3];
  
  iVar2 = FUN_ram_4204eefa();
  if (iVar2 == 0) {
    FUN_ram_4204eeda(auStack_28);
    uVar3 = FUN_ram_4204e970();
    iVar2 = FUN_ram_4204e9fa(uVar3,param_1,param_2,param_3,apiStack_24);
    if (iVar2 == 0) {
      piVar4 = (int *)thunk_FUN_ram_403904a6(0x14);
      if (piVar4 == (int *)0x0) {
        if (apiStack_24[0] != (int *)0x0) {
          (**(code **)(*apiStack_24[0] + 4))();
        }
        iVar2 = 0x101;
      }
      else {
        piVar4[2] = (int)apiStack_24[0];
        piVar4[4] = param_1;
        iVar5 = _DAT_ram_3fcc5270 + 1;
        _DAT_ram_3fcc5270 = iVar5;
        piVar4[3] = iVar5;
        if (_DAT_ram_3fcc1e9c != (int *)0x0) {
          _DAT_ram_3fcc1e9c[1] = (int)piVar4;
        }
        *piVar4 = (int)_DAT_ram_3fcc1e9c;
        piVar1 = _DAT_ram_3fcc1e98;
        piVar4[1] = 0;
        if (piVar1 == (int *)0x0) {
          _DAT_ram_3fcc1e98 = piVar4;
        }
        _DAT_ram_3fcc1ea0 = _DAT_ram_3fcc1ea0 + 1;
        _DAT_ram_3fcc1e9c = piVar4;
        *param_4 = iVar5;
      }
    }
    FUN_ram_4204eeea(auStack_28);
  }
  return iVar2;
}

