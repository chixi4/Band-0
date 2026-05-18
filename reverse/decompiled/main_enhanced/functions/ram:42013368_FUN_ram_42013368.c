
uint FUN_ram_42013368(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_a1;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (2 < param_1) {
LAB_ram_42013380:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  iVar6 = *(int *)("Make the version that feels safe first." + param_1 * 4 + 0x20);
  FUN_ram_403917e6(iVar6 + 8);
  iVar1 = -1;
  if (*(char *)(iVar6 + 0x10) == '\0') {
    iVar1 = FUN_ram_42012ea6(param_1);
  }
  uVar7 = (**(code **)(iVar6 + 0x24))(param_1);
  uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar8 = CONCAT44(uVar3,iVar1);
  uVar5 = (int)uVar7 + (uint)(iVar1 != -1) + (uint)(*(int *)(iVar6 + 4) != -1);
  if (param_3 < uVar5) {
    uVar5 = param_3;
  }
  if (uVar5 == 0) {
    if (iVar1 != -1) {
      FUN_ram_42013348(param_1,iVar1);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (iVar1 != -1) goto LAB_ram_42013404;
    do {
      uVar8 = FUN_ram_42012ea6(param_1,uVar3);
      if ((int)uVar8 == -1) goto LAB_ram_42013380;
LAB_ram_42013404:
      uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 == 0xd) {
        if (*(int *)(iVar6 + 0x18) == 1) {
LAB_ram_42013464:
          uVar8 = CONCAT44(uVar3,10);
        }
        else if (*(int *)(iVar6 + 0x18) == 0) {
          iVar1 = FUN_ram_42012ea6(param_1);
          if (iVar1 == -1) {
            FUN_ram_42013348(param_1,0xd);
            break;
          }
          if (iVar1 == 10) {
            uVar5 = uVar5 - 1;
            uVar3 = 10;
            goto LAB_ram_42013464;
          }
          FUN_ram_42013348(param_1);
          uVar8 = CONCAT44(extraout_a1,0xd);
        }
      }
      uVar3 = (undefined4)((ulonglong)uVar8 >> 0x20);
      *(char *)(param_2 + uVar4) = (char)uVar8;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  FUN_ram_403917fc(iVar6 + 8);
  if (uVar4 == 0) {
    puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)(0);
    *puVar2 = 0xb;
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

