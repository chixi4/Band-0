
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4201d5ce(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_28 [4];
  int *apiStack_24 [3];
  
  iVar2 = FUN_ram_4201f51c();
  if (iVar2 == 0) {
    FUN_ram_4201f4fc(auStack_28);
    uVar3 = FUN_ram_4201ef92();
    iVar2 = FUN_ram_4201f01c(uVar3,param_1,param_2,param_3,apiStack_24);
    if (iVar2 == 0) {
      piVar4 = (int *)thunk_FUN_ram_4039047a(0x14);
      if (piVar4 == (int *)0x0) {
        if (apiStack_24[0] != (int *)0x0) {
          (**(code **)(*apiStack_24[0] + 4))();
        }
        iVar2 = 0x101;
      }
      else {
        piVar4[2] = (int)apiStack_24[0];
        piVar4[4] = param_1;
        iVar5 = _DAT_ram_3fcb6738 + 1;
        _DAT_ram_3fcb6738 = iVar5;
        piVar4[3] = iVar5;
        if (_DAT_ram_3fcb3694 != (int *)0x0) {
          _DAT_ram_3fcb3694[1] = (int)piVar4;
        }
        *piVar4 = (int)_DAT_ram_3fcb3694;
        piVar1 = _DAT_ram_3fcb3690;
        piVar4[1] = 0;
        if (piVar1 == (int *)0x0) {
          _DAT_ram_3fcb3690 = piVar4;
        }
        _DAT_ram_3fcb3698 = _DAT_ram_3fcb3698 + 1;
        _DAT_ram_3fcb3694 = piVar4;
        *param_4 = iVar5;
      }
    }
    FUN_ram_4201f50c(auStack_28);
  }
  return iVar2;
}

