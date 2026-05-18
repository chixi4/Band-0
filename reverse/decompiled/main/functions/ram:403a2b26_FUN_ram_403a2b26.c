
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a2b26(char *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  (**(code **)(_DAT_ram_3fcdfed0 + 0x4bc))();
  *(undefined1 *)(_DAT_ram_3fcdfebc + 10) = 1;
  uVar1 = (*(uint *)(param_1 + 4) & 1) << 7 | (uint)(byte)param_1[5] << 4 | _DAT_ram_60045800 |
          (*(uint *)(param_1 + 4) & 2) << 7 | 0x200;
  if (*param_1 == '\x02') {
    if (_DAT_ram_6004b000 << 10 < 0) {
      _DAT_ram_60045840 = *(uint **)(param_1 + 0x10);
      uVar4 = (uint)(byte)param_1[6] << 0x12 | (uint)(byte)param_1[7] << 0x11;
    }
    else {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))
                (0x7b3,&DAT_ram_3c0f7038,0,0,_DAT_ram_6004b000 << 10,
                 *(code **)(_DAT_ram_3fcdfecc + 0x110));
      _DAT_ram_60045840 = *(uint **)(param_1 + 0x10);
      uVar4 = (uint)(byte)param_1[6] << 0x12 | (uint)(byte)param_1[7] << 0x11;
    }
    uVar1 = uVar1 | uVar4;
    if (_DAT_ram_60045840 == (uint *)0x0) {
      _DAT_ram_60045840 = (uint *)(_DAT_ram_3fcdfebc + 0x70);
    }
    if ((param_1[4] & 4U) == 0) {
      *_DAT_ram_60045840 = *_DAT_ram_60045840 & 0xffffffef;
    }
    else {
      *_DAT_ram_60045840 = *_DAT_ram_60045840 | 0x10;
    }
    _DAT_ram_60045850 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3d4))();
    _DAT_ram_60045850 = _DAT_ram_60045850 + *(int *)(param_1 + 8);
  }
  else {
    if (-1 < _DAT_ram_6004b000 << 0xb) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))
                (0x7ca,&DAT_ram_3c0f7038,0,0,_DAT_ram_6004b000 << 0xb,
                 *(code **)(_DAT_ram_3fcdfecc + 0x110));
    }
    _DAT_ram_60045850 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3d4))();
  }
  iVar2 = _DAT_ram_3fcdfebc;
  _DAT_ram_60045800 = uVar1 | _DAT_ram_60045800 & 0x7ff80000;
  _DAT_ram_60045830 = *(uint **)(param_1 + 0xc);
  if (_DAT_ram_60045830 == (uint *)0x0) {
    _DAT_ram_60045830 = (uint *)(_DAT_ram_3fcdfebc + 0x74);
  }
  if ((param_1[4] & 8U) == 0) {
    *_DAT_ram_60045830 = *_DAT_ram_60045830 & 0xffffffef;
  }
  else {
    *_DAT_ram_60045830 = *_DAT_ram_60045830 | 0x10;
  }
  _DAT_ram_60045834 = *(undefined4 *)(iVar2 + 100);
  _DAT_ram_60045854 = 0xf;
  (**(code **)(_DAT_ram_3fcdfed0 + 0x40c))(*(undefined1 *)(iVar2 + 0xf));
  _DAT_ram_60045510 = _DAT_ram_60045510 & 0xfffff00f | 0x1000;
  iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x410))(*(undefined1 *)(_DAT_ram_3fcdfebc + 0xf));
  iVar3 = (**(code **)(_DAT_ram_3fcdfed0 + 0x410))(*(undefined1 *)(_DAT_ram_3fcdfebc + 0x10));
  _DAT_ram_60045510 = iVar2 << 4 | iVar3 << 8 | _DAT_ram_60045510;
  return;
}

