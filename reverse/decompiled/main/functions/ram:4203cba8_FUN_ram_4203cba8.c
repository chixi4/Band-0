
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203cba8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_a2;
  code *pcVar7;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0xb5c))();
  if ((iVar1 != 0) && (iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3a0))(param_1 + 0xf8), iVar2 == 0)
     ) {
    iVar3 = (**(code **)(_DAT_ram_3fcdfed0 + 0x580))(*(undefined4 *)(param_1 + 0x94));
    iVar3 = (uint)*(byte *)(param_1 + 0x99) + (uint)*(ushort *)(param_1 + 0x84) * iVar1 * -0x4e2 +
            iVar3;
    iVar4 = (**(code **)(_DAT_ram_3fcdfed0 + 0x584))(iVar3);
    iVar5 = (**(code **)(_DAT_ram_3fcdfed0 + 0x580))();
    iVar2 = _DAT_ram_3fcdfecc;
    uVar6 = iVar3 - iVar5 & 0xff;
    if (*(ushort *)(_DAT_ram_3fcdff6c + 0x24) == uVar6) {
      iVar4 = iVar4 + 1;
      uVar6 = 0;
    }
    *(char *)(param_1 + 0x99) = (char)uVar6;
    pcVar7 = *(code **)(iVar2 + 0xb6c);
    *(int *)(param_1 + 0x94) = iVar4;
    *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) - (short)iVar1;
    (*pcVar7)(param_1,iVar1,extraout_a2,0x1000,pcVar7);
                    /* WARNING: Could not recover jumptable at 0x4203cc80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfecc + 0x90))(param_1 + 0xbc);
    return;
  }
  return;
}

