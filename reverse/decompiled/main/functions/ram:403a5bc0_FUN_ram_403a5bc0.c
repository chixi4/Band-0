
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a5bc0(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = _DAT_ram_60045804;
  iVar2 = _DAT_ram_6004530c;
  (**(code **)(_DAT_ram_3fcdfecc + 0xb60))(1,1);
  (**(code **)(_DAT_ram_3fcdfecc + 0xa04))
            (0x1004,iVar2,*(undefined1 *)(_DAT_ram_3fcdfebc + 0x12),uVar4 & 3,_DAT_ram_3fcdfebc,
             *(code **)(_DAT_ram_3fcdfecc + 0xa04));
  uVar3 = _DAT_ram_60045304;
  if (iVar2 << 0xe < 0) {
    uVar5 = *(byte *)(_DAT_ram_3fcdfebc + 0x12) - 4;
    if ((((9 < (uVar5 & 0xff)) || ((1 << (uVar5 & 0x1f) & 0x31bU) == 0)) || ((uVar4 & 3) != 0)) &&
       (-1 < (int)(_DAT_ram_60045804 << 0x10))) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))
                (0x4a6,&DAT_ram_3c0f7018,0,0,_DAT_ram_60045804 << 0x10,
                 *(code **)(_DAT_ram_3fcdfecc + 0x110));
    }
    _DAT_ram_60045308 = 0x20000;
  }
  if (((int)(uVar3 << 0xc) < 0) && ((_DAT_ram_60045134 & 0x20) != 0)) {
    _DAT_ram_60045304 = _DAT_ram_60045304 & 0xfff7ffff;
    _DAT_ram_60045024 = 1;
  }
  if (((int)(uVar3 << 0x13) < 0) && (_DAT_ram_60045150 != 0)) {
    _DAT_ram_60045304 = _DAT_ram_60045304 & 0xffffefff;
    (**(code **)(_DAT_ram_3fcdfed0 + 0x14))(*(undefined4 *)(_DAT_ram_3fcdfebc + 0x68));
  }
  bVar1 = false;
  if (((int)(uVar3 << 0xd) < 0) && (_DAT_ram_60045120 != 0)) {
    _DAT_ram_60045120 = 0;
    _DAT_ram_60045304 = _DAT_ram_60045304 & 0xfffbffff;
    (**(code **)(_DAT_ram_3fcdfed0 + 0x444))();
    bVar1 = true;
  }
  if (((uVar3 & 8) != 0) && (_DAT_ram_6004510c != 0)) {
    _DAT_ram_6004510c = 0;
    _DAT_ram_60045304 = _DAT_ram_60045304 & 0xfffffff7;
    if (!bVar1) {
      if (_DAT_ram_60045860 != 0) {
        (**(code **)(_DAT_ram_3fcdfecc + 0x110))
                  (0x4df,&DAT_ram_3c0f7018,_DAT_ram_60045860,0,_DAT_ram_3fcdfecc,
                   *(code **)(_DAT_ram_3fcdfecc + 0x110));
      }
      (**(code **)(_DAT_ram_3fcdfed0 + 0x45c))();
    }
  }
  iVar2 = _DAT_ram_3fcdfecc;
  *(undefined1 *)(_DAT_ram_3fcdfebc + 0xb) = 0;
                    /* WARNING: Could not recover jumptable at 0x403a5d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 0xb60))(1,0);
  return;
}

