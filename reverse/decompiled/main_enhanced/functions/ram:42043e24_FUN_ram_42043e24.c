
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42043e24(byte *param_1)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  
  if (*_DAT_ram_3fcdfedc == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (299,&DAT_ram_3c0f6f68,0,0,0,*(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  iVar5 = (**(code **)(_DAT_ram_3fcdfecc + 0x770))(0xe);
  if (iVar5 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x34))(*_DAT_ram_3fcdfedc);
  }
  else {
    puVar2 = (undefined1 *)*_DAT_ram_3fcdfedc;
    *puVar2 = 0x3e;
    puVar2[1] = 0x10;
    puVar2[2] = 0xe;
    puVar2[3] = 0;
    uVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x664))(param_1);
    puVar2[4] = (char)uVar4;
    puVar2[5] = (char)((ushort)uVar4 >> 8);
    puVar2[6] = param_1[4];
    bVar1 = param_1[0xb];
    puVar2[7] = bVar1;
    if ((*param_1 & 0x10) != 0) {
      puVar2[7] = bVar1 + 2;
    }
    FUN_ram_4039c11e(puVar2 + 8,param_1 + 5,6);
    uVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x6a4))((int)(char)param_1[0x1c]);
    puVar2[0xe] = uVar3;
    iVar5 = _DAT_ram_3fcdfecc;
    uVar4 = *(undefined2 *)(param_1 + 0x26);
    puVar2[0xf] = param_1[0x26];
    puVar2[0x10] = (char)((ushort)uVar4 >> 8);
    puVar2[0x11] = param_1[0xc];
    (**(code **)(iVar5 + 0x758))(puVar2);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfecc + 0x9fc);
  *_DAT_ram_3fcdfedc = 0;
                    /* WARNING: Could not recover jumptable at 0x42043f12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0x5012,0);
  return;
}

