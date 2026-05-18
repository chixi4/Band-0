
void FUN_ram_4205f42e(int param_1)

{
  int unaff_s0;
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  if (unaff_s0 != 0) {
    piVar1 = *(int **)(unaff_s0 + 8);
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == -0x2ffb3ff8) {
      if (((*piVar1 != -0x2ffb3ff8) && (FUN_ram_4205ee10(), (*(uint *)(unaff_s0 + 0x54) & 1) != 0))
         && (*(int *)(unaff_s0 + 0x3c) == 1)) {
        FUN_ram_4205ee36(*(undefined4 *)(unaff_s0 + 8));
        return;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc);
      if (((iVar3 != *piVar1) || (piVar1[1] != *(int *)(param_1 + 8))) || (piVar1[2] != iVar2)) {
        uVar4 = *(undefined4 *)(unaff_s0 + 0xc);
        in_stack_00000010 = 0;
        in_stack_00000014 = 0;
        in_stack_00000018 = 0;
        in_stack_0000001c = 0;
        uVar5 = *(undefined4 *)(unaff_s0 + 0x48);
        piVar1[1] = *(int *)(param_1 + 8);
        *piVar1 = iVar3;
        piVar1[2] = iVar2;
        iVar3 = FUN_ram_4039c0e0(piVar1,uVar4,0xc);
        if (iVar3 != 0) {
          in_stack_0000001c = CONCAT31(in_stack_0000001c._1_3_,1);
        }
        FUN_ram_4205eeb4();
        FUN_ram_4039c11e(&stack0x00000010,piVar1,0xc);
        FUN_ram_4039c11e(uVar4,piVar1,0xc);
        FUN_ram_420b2e88(0x18ff1f,uVar5,&stack0x0000000c,0x14,0);
      }
    }
  }
  return;
}

