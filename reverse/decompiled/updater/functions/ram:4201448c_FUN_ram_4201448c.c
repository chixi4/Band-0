
undefined4 FUN_ram_4201448c(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iStack_24;
  
  if (param_1 < 2) {
    piVar1 = (int *)(param_1 * 4 + 0x3fcb6670);
    iVar4 = *piVar1;
    uVar2 = 0xffffffff;
    if (iVar4 != 0) {
      FUN_ram_403958fa(*(undefined4 *)(iVar4 + 100),0xffffffff);
      FUN_ram_40394d60();
      iVar3 = *(int *)(gp + param_1 * 0x30 + -0x658);
      *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) & 0xfffffefe;
      FUN_ram_40394d8e();
      while (iVar3 = FUN_ram_40394838(*(undefined4 *)(iVar4 + 0x5c),&iStack_24,0), iVar3 != 0) {
        FUN_ram_40394d60();
        *(int *)(*piVar1 + 0x14) = *(int *)(*piVar1 + 0x14) - iStack_24;
        FUN_ram_42013f96(param_1);
        FUN_ram_40394d8e();
        FUN_ram_4039485e(*(undefined4 *)(iVar4 + 0x5c),iVar3);
        iVar3 = *piVar1;
        if ((*(char *)(iVar3 + 0x18) != '\0') &&
           (iVar3 = FUN_ram_40394818(*(undefined4 *)(iVar3 + 0x5c),*(undefined4 *)(iVar3 + 0x1c),
                                     *(undefined1 *)(iVar3 + 0x20),0), iVar3 == 1)) {
          FUN_ram_40394d60();
          iVar3 = *piVar1;
          *(undefined1 *)(iVar3 + 0x18) = 0;
          *(uint *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + (uint)*(byte *)(iVar3 + 0x20);
          FUN_ram_40394d8e();
        }
      }
      FUN_ram_40394d60();
      iVar3 = *(int *)(param_1 * 4 + 0x3fcb6670);
      if (*(int *)(iVar3 + 0x14) != 0) {
        *(undefined4 *)(iVar3 + 0x14) = 0;
      }
      *(undefined1 *)(iVar3 + 0x18) = 0;
      FUN_ram_40394d8e();
      FUN_ram_4201b1d6(param_1 * 0x30 + gp + -0x658);
      FUN_ram_42013f42(param_1);
      FUN_ram_40395514(*(undefined4 *)(iVar4 + 100),0,0,0);
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffffff;
}

