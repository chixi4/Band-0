
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203d846(byte *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  if (param_1[0x4d] != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x5007,*param_1);
    (**(code **)(_DAT_ram_3fcdfed0 + 0x3a0))(param_1 + 0x4c);
  }
  uVar1 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
  if (*(byte **)(_DAT_ram_3fcdfedc + 0xc) == param_1) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x298))();
  }
  (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar1);
  (**(code **)(_DAT_ram_3fcdfed0 + 0x544))();
  if ((*param_1 & 2) != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x63c))(param_1);
  }
  (**(code **)(_DAT_ram_3fcdfec4 + 0x18))(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,param_1 + 0x68);
  if ((*param_1 & 6) == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x500e);
  }
  else {
    if ((_DAT_ram_3fcdfe70 != 0) && (*(int *)(_DAT_ram_3fcdfe70 + 0x10) != 0)) {
      (**(code **)(_DAT_ram_3fcdfed0 + 0x2b8))(param_1,2);
    }
    iVar3 = _DAT_ram_3fcdfecc;
    if (*(int *)(param_1 + 0x6c) != 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x500d,*param_1);
      (**(code **)(_DAT_ram_3fcdfecc + 0x6c4))(param_1,*(undefined4 *)(param_1 + 0x6c));
      iVar3 = _DAT_ram_3fcdfecc;
      param_1[0x6c] = 0;
      param_1[0x6d] = 0;
      param_1[0x6e] = 0;
      param_1[0x6f] = 0;
    }
    uVar1 = *(undefined4 *)(_DAT_ram_3fcdfed0 + 0x29c);
    *(byte **)(param_1 + 0x58) = param_1;
    param_1[0x4c] = 7;
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    while (iVar3 = (**(code **)(iVar3 + 0x690))(param_1,0), -1 < iVar3) {
      iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3c0))
                        (param_1 + 0x4c,*(undefined4 *)(param_1 + 0x44),param_1[0x48],
                         *(undefined4 *)(param_1 + 0x3c),(int)(char)param_1[0x1c],
                         *(code **)(_DAT_ram_3fcdfed0 + 0x3c0));
      iVar3 = _DAT_ram_3fcdfecc;
      if (iVar2 == 0) {
        if ((_DAT_ram_3fcdfe70 != 0) && (*(int *)(_DAT_ram_3fcdfe70 + 0x10) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x4203da06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(_DAT_ram_3fcdfed0 + 0x2b8))(param_1,1);
          return;
        }
        return;
      }
    }
    pcVar4 = *(code **)(_DAT_ram_3fcdfecc + 0x9fc);
    if ((*param_1 & 2) == 0) {
      (*pcVar4)(0x500c);
      (**(code **)(_DAT_ram_3fcdfecc + 0x68c))(param_1);
    }
    else {
      param_1[0x1d] = 1;
      (*pcVar4)(0x5006);
      (**(code **)(_DAT_ram_3fcdfecc + 0x63c))(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x4203d9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfecc + 0x6c8))(param_1);
  return;
}

