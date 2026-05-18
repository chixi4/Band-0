
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42040a96(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  code *in_a5;
  int unaff_s2;
  int iVar3;
  code *pcVar4;
  
  iVar1 = (*in_a5)();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)(unaff_s0 + -0x134) + unaff_s2 + -0x684))
                      (*(int *)(unaff_s1 + -0x9c) + 8,0x16,1);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(int *)(unaff_s0 + -0x134) + unaff_s2 + -0x684))
                        (*(int *)(unaff_s1 + -0x9c) + 0xc,8,1);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*(int *)(unaff_s0 + -0x134) + 0x114))();
        if (*(short *)(iVar1 + 0x38) != 0) {
          iVar3 = *(int *)(unaff_s1 + -0x9c);
          pcVar4 = *(code **)(*(int *)(unaff_s0 + -0x134) + unaff_s2 + -0x684);
          iVar1 = (**(code **)(*(int *)(unaff_s0 + -0x134) + 0x114))();
          iVar3 = (*pcVar4)(iVar3 + 0x18,0x208,*(undefined2 *)(iVar1 + 0x38));
          iVar1 = *(int *)(unaff_s1 + -0x9c);
          if (*(int *)(iVar1 + 0x18) != 0) {
            pcVar4 = *(code **)(unaff_s2 + *(int *)(unaff_s0 + -0x134) + -0x680);
            iVar3 = (**(code **)(*(int *)(unaff_s0 + -0x134) + 0x114))();
            iVar3 = (*pcVar4)(iVar1 + 0x1c,iVar1 + 0x18,0x208,*(undefined2 *)(iVar3 + 0x38));
          }
          if (iVar3 != 0) {
            return 0xfffffffc;
          }
        }
        iVar1 = (**(code **)(*(int *)(unaff_s0 + -0x134) + 0xb04))();
        if (iVar1 == 0) {
          iVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x1c4))();
          uVar2 = 0;
          if (iVar1 != 0) {
            uVar2 = 0xfffffffa;
          }
        }
        else {
          uVar2 = 0xfffffffb;
        }
      }
      else {
        uVar2 = 0xfffffffd;
      }
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

