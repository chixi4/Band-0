
undefined4 FUN_ram_4207a932(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  if (param_1[5] == 0x3f) {
    piVar6 = (int *)*param_1;
    iVar5 = *piVar6;
    puVar3 = param_1;
    if ((param_2[2] != -1) && (puVar3 = (undefined4 *)0x102, *(int *)(iVar5 + 4) != param_2[2])) {
      return 0x102;
    }
    uVar1 = param_2[1];
    if (param_1[4] == 0) {
      if (-1 < (int)uVar1) {
        FUN_ram_40394d60();
        uVar4 = 1 << (uVar1 & 0x1f);
        if ((*(uint *)(iVar5 + 0x54) & uVar4) == 0) {
          *(uint *)(iVar5 + 0x54) = *(uint *)(iVar5 + 0x54) | uVar4;
          goto LAB_ram_4207a9b4;
        }
LAB_ram_4207a9a4:
        FUN_ram_40394d8e();
        goto LAB_ram_4207a94e;
      }
    }
    else if (-1 < (int)uVar1) {
      FUN_ram_40394d60(puVar3);
      uVar4 = 1 << (uVar1 & 0x1f);
      if ((*(uint *)(iVar5 + 0x58) & uVar4) != 0) goto LAB_ram_4207a9a4;
      *(uint *)(iVar5 + 0x58) = *(uint *)(iVar5 + 0x58) | uVar4;
LAB_ram_4207a9b4:
      FUN_ram_40394d8e();
    }
    FUN_ram_4207b94a(iVar5 + 8,piVar6[1],param_1[4],*param_2,uVar1);
    uVar2 = 0;
    param_1[5] = uVar1;
  }
  else {
LAB_ram_4207a94e:
    uVar2 = 0x103;
  }
  return uVar2;
}

