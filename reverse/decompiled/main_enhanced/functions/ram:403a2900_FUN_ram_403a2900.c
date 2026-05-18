
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a2900(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (*(char *)(_DAT_ram_3fcdfebc + 0xc) != '\0') {
    iVar1 = *(int *)(_DAT_ram_3fcdfebc + 0x90);
    (**(code **)(_DAT_ram_3fcdfecc + 0xa04))
              (0x7017,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x18),
               *(undefined1 *)(iVar1 + 0x20));
    puVar2 = *(undefined4 **)(_DAT_ram_3fcdfebc + 0x90);
    _DAT_ram_60045700 = *puVar2;
    _DAT_ram_60045704 = puVar2[1];
    _DAT_ram_60045708 = puVar2[2];
    _DAT_ram_6004570c = puVar2[3];
    _DAT_ram_60045720 = *(undefined4 *)((int)puVar2 + 0x22);
    _DAT_ram_60045724 = *(undefined4 *)((int)puVar2 + 0x26);
    _DAT_ram_60045718 = puVar2[6];
    _DAT_ram_6004571c = puVar2[7];
    _DAT_ram_60045710 = puVar2[4];
    _DAT_ram_60045714 = puVar2[5];
    uVar3 = (uint)(*(char *)(puVar2 + 8) != '\0');
    if (*(char *)((int)puVar2 + 0x21) == '\0') {
      _DAT_ram_600458ac = _DAT_ram_600458ac | 2;
    }
    else {
      uVar3 = uVar3 | 2;
      _DAT_ram_600458ac = _DAT_ram_600458ac & 0xfffffffd;
    }
    _DAT_ram_60045728 = uVar3 | 0xc;
    return;
  }
  _DAT_ram_60045728 = 0;
  return;
}

