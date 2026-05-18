
undefined4 FUN_ram_420b36b4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint local_40 [7];
  
  if (param_1 != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    FUN_ram_4039771c(uVar6,0xffffffff);
    if (*(int *)(param_1 + 8) != 0) {
      FUN_ram_40397f1c();
    }
    iVar1 = *(int *)(param_1 + 0x14);
    while (iVar1 != 0) {
      iVar7 = *(int *)(iVar1 + 8);
      FUN_ram_420b30a4(iVar1);
      iVar5 = *(int *)(iVar1 + 4);
      while (iVar5 != 0) {
        iVar8 = *(int *)(iVar5 + 0xc);
        FUN_ram_420b30a4(iVar5 + 4);
        iVar4 = *(int *)(iVar5 + 8);
        while (iVar4 != 0) {
          iVar9 = *(int *)(iVar4 + 8);
          FUN_ram_420b30a4(iVar4 + 4);
          iVar3 = *(int *)(iVar5 + 8);
          if (*(int *)(iVar5 + 8) == iVar4) {
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar4 + 8);
          }
          else {
            do {
              iVar2 = iVar3;
              iVar3 = *(int *)(iVar2 + 8);
            } while (iVar3 != iVar4);
            *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar4 + 8);
          }
          thunk_FUN_ram_40390634(iVar4);
          iVar4 = iVar9;
        }
        iVar4 = *(int *)(iVar1 + 4);
        if (*(int *)(iVar1 + 4) == iVar5) {
          *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar5 + 0xc);
        }
        else {
          do {
            iVar3 = iVar4;
            iVar4 = *(int *)(iVar3 + 0xc);
          } while (iVar4 != iVar5);
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
        }
        thunk_FUN_ram_40390634(iVar5);
        iVar5 = iVar8;
      }
      iVar5 = *(int *)(param_1 + 0x14);
      if (iVar1 == *(int *)(param_1 + 0x14)) {
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 8);
      }
      else {
        do {
          iVar4 = iVar5;
          iVar5 = *(int *)(iVar4 + 8);
        } while (iVar1 != iVar5);
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar1 + 8);
      }
      thunk_FUN_ram_40390634(iVar1);
      iVar1 = iVar7;
    }
    while (iVar1 = FUN_ram_403974ca(*(undefined4 *)(param_1 + 4),local_40,0), iVar1 == 1) {
      if ((local_40[0] & 0xff) != 0) {
        thunk_FUN_ram_40390634(local_40[3]);
      }
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
    }
    FUN_ram_4039782c(*(undefined4 *)(param_1 + 4));
    thunk_FUN_ram_40390634(param_1);
    FUN_ram_403972dc(uVar6);
    FUN_ram_4039782c(uVar6);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

