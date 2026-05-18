
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403a44b2(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  int iStack_14;
  
  iVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3f8))();
  uVar2 = 0;
  if (iVar1 != 0) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x5e8))(&iStack_14,&uStack_18);
    (**(code **)(_DAT_ram_3fcdfecc + 0xa04))
              (0x702d,(uint)*(byte *)(iStack_14 + 5) << 0x18 | (uint)*(ushort *)(param_1 + 8) |
                      iVar1 << 0x10,*(undefined2 *)(iStack_14 + 10),*(undefined2 *)(iStack_14 + 8),
               iStack_14,*(code **)(_DAT_ram_3fcdfecc + 0xa04));
    uVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x23c))(iStack_14,uStack_18);
  }
  return uVar2;
}

