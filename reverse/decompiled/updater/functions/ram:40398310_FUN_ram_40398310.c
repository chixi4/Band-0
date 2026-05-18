
void FUN_ram_40398310(int *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = *(uint *)(param_2 + 0xc);
  iVar6 = *param_1;
  uVar5 = (uint)(char)(1 << (uVar4 & 0x1f));
  if ((*(uint *)(param_2 + 0x34) >> 5 & 1) == 0) {
    uVar3 = *(uint *)(iVar6 + 0x20);
    uVar5 = ~uVar5 & *(uint *)(iVar6 + 0x20) >> 7 & 0x3f;
  }
  else {
    uVar3 = *(uint *)(iVar6 + 0x20);
    uVar5 = (uVar5 | *(uint *)(iVar6 + 0x20) >> 7) & 0x3f;
  }
  *(uint *)(iVar6 + 0x20) = uVar5 << 7 | uVar3 & 0xffffe07f;
  *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(param_2 + 0x10);
  *(uint *)(iVar6 + 8) =
       (*(uint *)(param_2 + 0x34) >> 3 & 1) << 0x17 | *(uint *)(iVar6 + 8) & 0xfe7fffff;
  *(uint *)(iVar6 + 8) =
       (*(uint *)(param_2 + 0x34) >> 2 & 1) << 0x19 | *(uint *)(iVar6 + 8) & 0xf9ffffff;
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    uVar5 = *(uint *)(iVar6 + 0x20) & 0xdfffffff;
LAB_ram_40398380:
    *(uint *)(iVar6 + 0x20) = uVar5;
    uVar5 = *(uint *)(iVar6 + 0x10) & 0xfffffdff;
  }
  else {
    if (cVar1 == '\x01') {
      uVar5 = *(uint *)(iVar6 + 0x20) & 0xdfffffff;
    }
    else {
      if (cVar1 != '\x02') {
        if (cVar1 != '\x03') goto LAB_ram_403983b6;
        uVar5 = *(uint *)(iVar6 + 0x20) | 0x20000000;
        goto LAB_ram_40398380;
      }
      uVar5 = *(uint *)(iVar6 + 0x20) | 0x20000000;
    }
    *(uint *)(iVar6 + 0x20) = uVar5;
    uVar5 = *(uint *)(iVar6 + 0x10) | 0x200;
  }
  *(uint *)(iVar6 + 0x10) = uVar5;
LAB_ram_403983b6:
  *(uint *)(iVar6 + 0x10) =
       *(uint *)(param_2 + 0x34) >> 1 & 1 ^ 1 | *(uint *)(iVar6 + 0x10) & 0xfffffffe;
  *(uint *)(iVar6 + 0x10) =
       *(uint *)(iVar6 + 0x10) & 0xfffdffff | (*(uint *)(param_2 + 0x34) & 1) << 0x11;
  bVar2 = param_2[4];
  *(uint *)(iVar6 + 0x14) = *(uint *)(iVar6 + 0x14) & 0xffc1ffff | (bVar2 - 1 & 0x1f) << 0x11;
  *(uint *)(iVar6 + 0x10) = (uint)(bVar2 != 0) << 7 | *(uint *)(iVar6 + 0x10) & 0xffffff7f;
  uVar5 = *(uint *)(param_2 + 8);
  *(uint *)(iVar6 + 0x14) = *(uint *)(iVar6 + 0x14) & 0xf83fffff | (uVar5 & 0x1f) << 0x16;
  *(uint *)(iVar6 + 0x10) = (uint)(uVar5 != 0) << 6 | *(uint *)(iVar6 + 0x10) & 0xffffffbf;
  *(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) & 0xfffffffe | (uint)(uVar4 != 0);
  *(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) & 0xfffffffd | (uint)(uVar4 != 1) << 1;
  *(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) & 0xfffffffb | (uint)(uVar4 != 2) << 2;
  *(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) & 0xfffffff7 | (uint)(uVar4 != 3) << 3;
  *(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) & 0xffffffef | (uint)(uVar4 != 4) << 4;
  *(uint *)(iVar6 + 0x20) = *(uint *)(iVar6 + 0x20) & 0xffffffdf | (uint)(uVar4 != 5) << 5;
  return;
}

