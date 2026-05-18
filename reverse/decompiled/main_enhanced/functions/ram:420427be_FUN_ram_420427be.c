
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420427be(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_a3;
  undefined4 uVar3;
  
  uVar3 = 7;
  if (*(char *)((int)param_1 + 0xb) != '\x01') {
    iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x80c))(param_2 + 5);
    if ((iVar1 - (uint)*(ushort *)((int)param_1 + 0x5e) & 0xffff) < 0x7fff) {
      *(short *)((int)param_1 + 0x3a) = (short)iVar1;
      FUN_ram_4039c11e(param_1 + 0xd,param_2,5);
      uVar3 = 0xff;
      *param_1 = *param_1 | 0x800;
    }
    else {
      iVar2 = FUN_ram_4039c0e0(param_2,(int)param_1 + 0x2f,5);
      uVar3 = 0xff;
      if (iVar2 != 0) {
        iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
        if ((*(byte *)(iVar2 + 0x65) & 2) == 0) {
          (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
                    (0x7034,*(ushort *)((int)param_1 + 0x5e) | 0x20000,iVar1,extraout_a3,0x20000,
                     *(code **)(_DAT_ram_3fcdfecc + 0xa00));
          *(short *)((int)param_1 + 0x3a) = (short)iVar1;
          FUN_ram_4039c11e(param_1 + 0xd,param_2,5);
          (**(code **)(_DAT_ram_3fcdfecc + 0xbbc))(param_1);
        }
        else {
          (**(code **)(_DAT_ram_3fcdfed0 + 0x244))(param_1,0x28);
        }
      }
    }
  }
  return uVar3;
}

