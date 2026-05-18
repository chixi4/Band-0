
void FUN_ram_4205a9fa(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     uint param_5,uint param_6)

{
  bool bVar1;
  bool bVar2;
  int unaff_s0;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  if ((param_6 | param_5) == 0x100) {
    if (*(char *)(unaff_s0 + 4) == '\x06') {
      if (*(char *)(unaff_s0 + 5) == '\x04') {
        if (*(short *)(unaff_s0 + 2) == 8) {
          FUN_ram_4205cb32(param_2);
          FUN_ram_4039c11e(&stack0x00000018,unaff_s0 + 0xe,4);
          FUN_ram_4039c11e(&stack0x0000001c,unaff_s0 + 0x18,4);
          iVar4 = *(int *)(param_2 + 4);
          iVar5 = unaff_s0 + 8;
          bVar1 = false;
          if ((iVar4 == 0) || (bVar1 = in_stack_00000018 == iVar4, iVar4 != in_stack_0000001c)) {
            bVar2 = false;
            uVar3 = 2;
          }
          else {
            bVar2 = true;
            uVar3 = 1;
          }
          FUN_ram_4205a844(param_2,&stack0x00000018,iVar5,uVar3);
          if (((*(short *)(unaff_s0 + 6) == 0x100) && (bVar2)) && (!bVar1)) {
            FUN_ram_4205a5a6(param_2,param_2 + 0x32,iVar5,param_2 + 0x32,param_2 + 4,iVar5,
                             &stack0x00000018,2);
          }
          FUN_ram_42053ac4(param_1);
          return;
        }
      }
    }
  }
  FUN_ram_42053ac4(param_1);
  return;
}

