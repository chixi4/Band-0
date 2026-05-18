
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203c7c0(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 extraout_a2;
  undefined8 uVar4;
  
  iVar1 = *(int *)(_DAT_ram_3fcdff64 + 0x14);
  uVar4 = (**(code **)(_DAT_ram_3fcdfec4 + 0x34))();
  if (iVar1 != 0) {
    if ((int)uVar4 != 0) {
      pcVar2 = *(code **)(_DAT_ram_3fcdfec4 + 100);
      uVar3 = (**(code **)(_DAT_ram_3fcdfec4 + 0x90))
                        ((uint)*(ushort *)(iVar1 + 0x88) * 10,(int)((ulonglong)uVar4 >> 0x20),
                         extraout_a2,*(code **)(_DAT_ram_3fcdfec4 + 0x90));
      (*pcVar2)(iVar1 + 0xf4,uVar3);
    }
    (**(code **)(_DAT_ram_3fcdfed0 + 0x1fc))(iVar1);
                    /* WARNING: Could not recover jumptable at 0x4203c82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0xa24))(iVar1);
    return;
  }
  return;
}

