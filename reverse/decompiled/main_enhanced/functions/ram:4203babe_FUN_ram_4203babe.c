
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203babe(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_a3;
  code *pcVar2;
  
  (**(code **)(_DAT_ram_3fcdfed0 + 0x544))();
  (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
            (0x8002,*(undefined1 *)(param_1 + 1),*(uint *)(param_1 + 0x108) >> 1 & 1,extraout_a3,
             0x1000,*(code **)(_DAT_ram_3fcdfecc + 0xa00));
  if ((*(byte *)(param_1 + 0x108) & 2) != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x608))(param_1);
    if ((_DAT_ram_3fcdfea8 != (undefined4 *)0x0) && ((code *)*_DAT_ram_3fcdfea8 != (code *)0x0)) {
      (*(code *)*_DAT_ram_3fcdfea8)(*(undefined1 *)(param_1 + 1),4,0);
    }
    uVar1 = (**(code **)(_DAT_ram_3fcdfec4 + 0xa0))();
    pcVar2 = *(code **)(_DAT_ram_3fcdfed0 + 0x3a0);
    *(byte *)(param_1 + 0x108) = *(byte *)(param_1 + 0x108) & 0xf9;
    (*pcVar2)(param_1 + 0x124);
    (**(code **)(_DAT_ram_3fcdfed0 + 0x3a0))(param_1 + 0x14c);
    if ((*(int *)(_DAT_ram_3fcdff68 + 0xc) == param_1) &&
       ((int)((uint)*(ushort *)(param_1 + 10) << 0x12) < 0)) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x8005,*(undefined1 *)(param_1 + 1));
      (**(code **)(_DAT_ram_3fcdfed0 + 0x3e0))();
      (**(code **)(_DAT_ram_3fcdfecc + 0xf8))(0);
      *(undefined4 *)(_DAT_ram_3fcdff68 + 0xc) = 0;
    }
    (**(code **)(_DAT_ram_3fcdfec4 + 0xa4))(uVar1);
    (**(code **)(_DAT_ram_3fcdfecc + 0x544))(param_1,0x2000);
    (**(code **)(_DAT_ram_3fcdfec4 + 0x18))
              (*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,param_1 + 0x174);
                    /* WARNING: Could not recover jumptable at 0x4203bbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0x60c))(param_1);
    return;
  }
  return;
}

