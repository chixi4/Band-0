
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420424fe(uint *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined2 uVar2;
  short sVar3;
  
  iVar1 = _DAT_ram_3fcdfecc;
  if (*(char *)((int)param_1 + 0xb) == '\x01') {
    return 7;
  }
  *(undefined1 *)((int)param_1 + 0x176) = *param_2;
  uVar2 = (**(code **)(iVar1 + 0x80c))(param_2 + 1);
  iVar1 = _DAT_ram_3fcdfecc;
  *(undefined2 *)(param_1 + 0x5e) = uVar2;
  uVar2 = (**(code **)(iVar1 + 0x80c))(param_2 + 3);
  iVar1 = _DAT_ram_3fcdfecc;
  *(undefined2 *)((int)param_1 + 0x17a) = uVar2;
  uVar2 = (**(code **)(iVar1 + 0x80c))(param_2 + 5);
  iVar1 = _DAT_ram_3fcdfecc;
  *(undefined2 *)(param_1 + 0x5f) = uVar2;
  uVar2 = (**(code **)(iVar1 + 0x80c))(param_2 + 7);
  iVar1 = _DAT_ram_3fcdfecc;
  *(undefined2 *)((int)param_1 + 0x17e) = uVar2;
  sVar3 = (**(code **)(iVar1 + 0x80c))(param_2 + 9);
  *(short *)(param_1 + 0x60) = sVar3;
  if ((ushort)(sVar3 - *(short *)((int)param_1 + 0x5e)) < 0x7fff) {
    *param_1 = *param_1 | 0x80;
    if (sVar3 == *(short *)((int)param_1 + 0x5e)) {
      *(undefined1 *)((int)param_1 + 0x176) = 0;
      *(undefined2 *)(param_1 + 0x5e) = 0;
      *(short *)(param_1 + 0x60) = sVar3 + 1;
      return 0xff;
    }
  }
  else {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x244))(param_1,0x28);
  }
  return 0xff;
}

