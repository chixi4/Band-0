
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203bc12(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 extraout_a3;
  
  (**(code **)(_DAT_ram_3fcdfed0 + 0x3a0))(param_1 + 0x54);
  (**(code **)(_DAT_ram_3fcdfecc + 0xa00))
            (0x3007,*(undefined1 *)(param_1 + 1),*(uint *)(param_1 + 0x78) & 1,extraout_a3,0x1000,
             *(code **)(_DAT_ram_3fcdfecc + 0xa00));
  (**(code **)(_DAT_ram_3fcdfed0 + 0x3a0))(param_1 + 0x84);
  (**(code **)(_DAT_ram_3fcdfed0 + 0x3a0))(param_1 + 0xac);
  (**(code **)(_DAT_ram_3fcdfec4 + 0x18))(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,param_1 + 0xd4);
  iVar1 = _DAT_ram_3fcdfecc;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfe;
  uVar3 = (**(code **)(iVar1 + 0x53c))(param_1);
  iVar2 = _DAT_ram_3fcdff6c;
  iVar1 = _DAT_ram_3fcdfec4;
  *(undefined1 *)(param_1 + 6) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x4203bcc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0x14))(*(int *)(iVar2 + 0x1c) + 0x10,param_1 + 0x50);
  return;
}

