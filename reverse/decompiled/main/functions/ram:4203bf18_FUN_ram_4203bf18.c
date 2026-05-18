
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203bf18(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_1[0x37];
  if (uVar1 != 0) {
    do {
      iVar2 = _DAT_ram_3fcdfec4;
      if (((*(uint *)(uVar1 + 4) & 0x300) == 0x100) &&
         (*(short *)((int)param_1 + 0x62) = *(short *)((int)param_1 + 0x62) + 1,
         2 < *(ushort *)((int)param_1 + 0x62))) {
        (**(code **)(iVar2 + 0x14))
                  (*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x10,
                   *(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x30);
        iVar2 = _DAT_ram_3fcdfec4;
      }
      (**(code **)(iVar2 + 0xa0))();
      iVar2 = _DAT_ram_3fcdfec4;
      uVar3 = *(uint *)param_1[0x37];
      param_1[0x37] = uVar3;
      if (uVar3 == 0) {
        param_1[0x38] = (uint)(param_1 + 0x37);
      }
      (**(code **)(iVar2 + 0xa4))();
      (**(code **)(_DAT_ram_3fcdfecc + 0x84c))(*(undefined4 *)(_DAT_ram_3fcdff64 + 0x34),uVar1);
      uVar1 = param_1[0x37];
    } while (uVar1 != 0);
  }
  if ((((*(char *)((int)param_1 + 0xb) == '\x02') && (param_1[0x39] == 0)) && (param_1[0x35] == 0))
     && (param_1[0x32] == 0)) {
    *param_1 = *param_1 | 0x10;
  }
  return;
}

