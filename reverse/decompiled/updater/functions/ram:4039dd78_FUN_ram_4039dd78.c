
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4039dd78(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *apuStack_44 [4];
  uint auStack_34 [4];
  
  apuStack_44[0] = param_1;
  iVar1 = (*(code *)_DAT_ram_3fcb0e08[2])(apuStack_44);
  if (iVar1 == 0) {
    if (*(int *)(apuStack_44[0][1] + 0x40) == 0) {
      iVar1 = 0x6005;
    }
    else if (((param_2 == 0) || ((uint)apuStack_44[0][5] < param_3)) ||
            ((uint)apuStack_44[0][5] < param_3 + param_4)) {
      iVar1 = 0x102;
    }
    else if (param_4 != 0) {
      iVar1 = (**(code **)(*(int *)*apuStack_44[0] + 0x30))((int *)*apuStack_44[0],param_2);
      uVar4 = param_4;
      if (0x4000 < param_4) {
        uVar4 = 0x4000;
      }
      if ((param_2 + 0xc0360000U < 0x40000) || (iVar1 != 0)) {
        iVar2 = 0;
      }
      else {
        auStack_34[0] = 0;
        if ((*(code **)(apuStack_44[0][2] + 0x10) == (code *)0x0) ||
           (iVar2 = (**(code **)(apuStack_44[0][2] + 0x10))(apuStack_44[0][3],uVar4,auStack_34),
           uVar4 = auStack_34[0], iVar2 == 0)) {
          return 0x101;
        }
      }
      while (iVar1 = (*(code *)*_DAT_ram_3fcb0e08)(apuStack_44[0]), iVar1 == 0) {
        iVar1 = param_2;
        if (iVar2 != 0) {
          iVar1 = iVar2;
        }
        uVar3 = param_4;
        if (uVar4 < param_4) {
          uVar3 = uVar4;
        }
        iVar1 = (**(code **)(apuStack_44[0][1] + 0x40))(apuStack_44[0],iVar1,param_3,uVar3);
        if (iVar1 != 0) {
          (*(code *)_DAT_ram_3fcb0e08[1])(apuStack_44[0],iVar1);
          break;
        }
        iVar1 = (*(code *)_DAT_ram_3fcb0e08[1])(apuStack_44[0],0);
        if (iVar2 != 0) {
          FUN_ram_40399daa(param_2,iVar2,uVar3);
        }
        param_3 = param_3 + uVar3;
        param_4 = param_4 - uVar3;
        param_2 = param_2 + uVar3;
        if ((iVar1 != 0) || (param_4 == 0)) break;
      }
      if (*(code **)(apuStack_44[0][2] + 0x14) != (code *)0x0) {
        (**(code **)(apuStack_44[0][2] + 0x14))(apuStack_44[0][3],iVar2);
      }
    }
  }
  return iVar1;
}

