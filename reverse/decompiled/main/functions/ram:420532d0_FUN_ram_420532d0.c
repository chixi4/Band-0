
void FUN_ram_420532d0(int param_1)

{
  int *unaff_s1;
  int iVar1;
  uint extraout_a4;
  uint uVar2;
  int *extraout_a5;
  int *piVar3;
  
  if (param_1 != 0) goto LAB_ram_42053338;
LAB_ram_420532dc:
  do {
    FUN_ram_4039bf1e();
    uVar2 = extraout_a4;
    piVar3 = extraout_a5;
    while ((int *)*piVar3 != (int *)0x0) {
      uVar2 = uVar2 + 1 & 0xff;
      piVar3 = (int *)*piVar3;
      while (*(short *)((int)piVar3 + 10) == (short)piVar3[2]) {
        if (uVar2 == 0) goto LAB_ram_420532dc;
        *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) - (short)uVar2;
        if (*(int **)(param_1 + 0x4c) == piVar3) {
          *(undefined4 *)(param_1 + 0x4c) = 0;
          *(undefined4 *)(param_1 + 0x48) = 0;
        }
        else {
          iVar1 = *piVar3;
          *(int *)(param_1 + 0x48) = iVar1;
          if (iVar1 == 0) goto LAB_ram_420532dc;
        }
        *piVar3 = 0;
        FUN_ram_4205c996();
        *(char *)((int)unaff_s1 + 0xf) = *(char *)(param_1 + 0x3c) + '\x01';
        iVar1 = FUN_ram_4205b928(unaff_s1,param_1);
        if (iVar1 != 0) {
          FUN_ram_42053ac4(unaff_s1);
        }
LAB_ram_42053338:
        FUN_ram_4205c96c();
        unaff_s1 = *(int **)(param_1 + 0x48);
        if (unaff_s1 == (int *)0x0) {
          FUN_ram_4205c996();
          return;
        }
        uVar2 = 1;
        piVar3 = unaff_s1;
      }
    }
  } while( true );
}

