
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_403a04ba(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iStack_74;
  undefined1 auStack_70 [64];
  
  iStack_74 = param_1;
  iVar1 = (*(code *)_DAT_ram_3fcb82b0[2])(&iStack_74);
  if (iVar1 == 0) {
    if (*(int *)(*(int *)(iStack_74 + 4) + 0x44) == 0) {
      iVar1 = 0x6005;
    }
    else if (iStack_74 == _DAT_ram_3fcc51f0) {
      pcVar3 = *(code **)(*(int *)(iStack_74 + 8) + 8);
      if (pcVar3 != (code *)0x0) {
        iVar2 = (*pcVar3)(*(undefined4 *)(iStack_74 + 0xc),param_2,param_4);
        if (iVar2 == 0x10d) {
          return 0x10d;
        }
        if (iVar2 != 0) {
          FUN_ram_4039bf1e();
        }
      }
      if ((((param_3 == 0) || (*(uint *)(iStack_74 + 0x14) < param_2)) ||
          (*(uint *)(iStack_74 + 0x14) - param_2 < param_4)) || ((param_2 & 0xf) != 0)) {
        iVar1 = 0x102;
      }
      else if (((param_4 != 0) && (iVar1 = 0x104, (param_4 & 0xf) == 0)) &&
              ((uVar5 = param_3 + 0xc0360000, 0x3ffff < uVar5 ||
               (iVar1 = (*(code *)*_DAT_ram_3fcb82b0)(), iVar1 == 0)))) {
        uVar4 = 0;
        do {
          if (((param_2 + uVar4 & 0x1f) == 0) && (0x1f < param_4 - uVar4)) {
            FUN_ram_4039c11e(auStack_70,param_3 + uVar4,0x20);
            iVar2 = 0x20;
          }
          else {
            FUN_ram_4039c11e(auStack_70,param_3 + uVar4);
            iVar2 = 0x10;
          }
          if ((((0x3ffff < uVar5) && (iVar1 = (*(code *)*_DAT_ram_3fcb82b0)(iStack_74), iVar1 != 0))
              || (iVar1 = (**(code **)(*(int *)(iStack_74 + 4) + 0x50))
                                    (iStack_74,auStack_70,param_2 + uVar4,iVar2), iVar1 != 0)) ||
             ((0x3ffff < uVar5 && (iVar1 = (*(code *)_DAT_ram_3fcb82b0[1])(iStack_74,0), iVar1 != 0)
              ))) goto LAB_ram_403a059a;
          uVar4 = uVar4 + iVar2;
        } while (uVar4 < param_4);
        if ((uVar5 < 0x40000) && (iVar1 = (*(code *)_DAT_ram_3fcb82b0[1])(iStack_74,0), iVar1 != 0))
        {
LAB_ram_403a059a:
          (*(code *)_DAT_ram_3fcb82b0[1])(iStack_74,0);
          (*(code *)_DAT_ram_3fcb82b0[3])
                    (iStack_74,iVar1,0,param_2,param_4,(code *)_DAT_ram_3fcb82b0[3]);
        }
        else {
          iVar1 = (*(code *)_DAT_ram_3fcb82b0[3])
                            (iStack_74,0,0,param_2,param_4,(code *)_DAT_ram_3fcb82b0[3]);
        }
      }
    }
    else {
      iVar1 = 0x106;
    }
  }
  return iVar1;
}

