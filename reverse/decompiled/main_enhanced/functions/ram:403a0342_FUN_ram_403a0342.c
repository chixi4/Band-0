
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_403a0342(undefined4 *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puStack_58;
  undefined4 *puStack_54;
  undefined1 auStack_50 [32];
  
  puStack_54 = param_1;
  iVar2 = (*(code *)_DAT_ram_3fcb82b0[2])(&puStack_54);
  if (iVar2 == 0) {
    if (*(int *)(puStack_54[1] + 0x44) == 0) {
      iVar2 = 0x6005;
    }
    else {
      if (*(code **)(puStack_54[2] + 8) != (code *)0x0) {
        iVar3 = (**(code **)(puStack_54[2] + 8))(puStack_54[3],param_3,param_4);
        if (iVar3 == 0x10d) {
          return 0x10d;
        }
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_ram_4039bf1e();
        }
      }
      if (((param_2 == (undefined1 *)0x0) || ((uint)puStack_54[5] < param_3)) ||
         (puStack_54[5] - param_3 < param_4)) {
        iVar2 = 0x102;
      }
      else if (param_4 != 0) {
        cVar1 = (**(code **)(*(int *)*puStack_54 + 0x24))((int *)*puStack_54,param_2);
        puVar5 = param_2 + -0x3fca0000;
        uVar7 = param_4;
        uVar8 = param_3;
        while( true ) {
          uVar6 = uVar7;
          if (cVar1 == '\0' && (undefined1 *)0x3ffff < puVar5) {
            if (0x20 < uVar7) {
              uVar6 = 0x20;
            }
            FUN_ram_4039c11e(auStack_50,param_2,uVar6);
            puStack_58 = auStack_50;
          }
          else {
            puStack_58 = param_2;
            if (0x2000 < uVar7) {
              uVar6 = 0x2000;
            }
          }
          if ((*(code **)(puStack_54[1] + 0x68) != (code *)0x0) &&
             (iVar2 = (**(code **)(puStack_54[1] + 0x68))(puStack_54,0), iVar2 != 0)) {
            return iVar2;
          }
          iVar2 = (*(code *)*_DAT_ram_3fcb82b0)(puStack_54);
          if (iVar2 != 0) {
            uVar4 = 0;
            goto LAB_ram_403a0468;
          }
          uVar7 = uVar7 - uVar6;
          iVar2 = (**(code **)(puStack_54[1] + 0x44))(puStack_54,puStack_58,uVar8,uVar6);
          if (param_4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4039bf9e(0,0,0,0);
          }
          if (iVar2 != 0) break;
          if (uVar7 == 0) {
            iVar2 = (*(code *)_DAT_ram_3fcb82b0[3])
                              (puStack_54,0,1,param_3,param_4,(code *)_DAT_ram_3fcb82b0[3]);
            return iVar2;
          }
          iVar2 = (*(code *)_DAT_ram_3fcb82b0[1])(puStack_54,0);
          if (iVar2 != 0) break;
          uVar8 = uVar8 + uVar6;
          param_2 = param_2 + uVar6;
        }
        uVar4 = 1;
LAB_ram_403a0468:
        (*(code *)_DAT_ram_3fcb82b0[3])(puStack_54,iVar2,uVar4,param_3,param_4);
      }
    }
  }
  return iVar2;
}

