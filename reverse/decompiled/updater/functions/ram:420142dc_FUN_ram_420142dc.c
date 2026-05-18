
undefined4 FUN_ram_420142dc(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (1 < param_1) {
    return 0xffffffff;
  }
  iVar5 = param_1 * 4;
  piVar6 = (int *)(iVar5 + 0x3fcb6670);
  if (*piVar6 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_ram_40396242(0xffffffff);
  iVar2 = FUN_ram_403958fa(*(undefined4 *)(*piVar6 + 0x68),param_2);
  if (iVar2 == 0) {
LAB_ram_42014330:
    uVar3 = 0x107;
  }
  else {
    FUN_ram_40394d60();
    iVar2 = *(int *)(gp + param_1 * 0x30 + -0x658);
    if ((*(int *)(*piVar6 + 0xc) != 1) && ((*(uint *)(iVar2 + 0xc) & 0x4000) == 0)) {
      *(undefined4 *)(iVar2 + 0x10) = 0x4000;
    }
    FUN_ram_40394d8e();
    FUN_ram_403958fa(*(undefined4 *)(*(int *)(iVar5 + 0x3fcb6670) + 0x70),0);
    (*(code *)&SUB_ram_40010044)(2);
    iVar2 = *(int *)(param_1 * 0x30 + gp + -0x660 + 8);
    if (((*(uint *)(iVar2 + 0x1c) >> 0x10 & 0x3ff) == 0) &&
       ((*(uint *)(iVar2 + 0x6c) >> 4 & 0xf) == 0)) {
      FUN_ram_40395514(*(undefined4 *)(*(int *)(iVar5 + 0x3fcb6670) + 0x68),0,0,0);
    }
    else {
      FUN_ram_40394d60();
      iVar2 = *(int *)(gp + -0x660 + param_1 * 0x30 + 8);
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x4000;
      FUN_ram_40394d8e();
      iVar2 = FUN_ram_40396242();
      iVar4 = 0;
      if ((uint)(iVar2 - iVar1) <= param_2) {
        iVar4 = (iVar1 + param_2) - iVar2;
      }
      iVar1 = FUN_ram_403958fa(*(undefined4 *)(*(int *)(iVar5 + 0x3fcb6670) + 0x70),iVar4);
      FUN_ram_40395514(*(undefined4 *)(*(int *)(iVar5 + 0x3fcb6670) + 0x68),0,0,0);
      if (iVar1 == 0) goto LAB_ram_42014330;
    }
    uVar3 = 0;
  }
  return uVar3;
}

