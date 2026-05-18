
/* WARNING: Removing unreachable block (ram,0x4204ab4a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204aafe(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint auStack_14 [3];
  
  FUN_ram_40396966();
  FUN_ram_4204abde(*_DAT_ram_3fcc5200);
  cVar1 = *(char *)(_DAT_ram_3fcc5200 + 3);
  auStack_14[0] = 0;
  iVar4 = FUN_ram_4204aa08(0,0,auStack_14);
  if (iVar4 != 0) {
    FUN_ram_40396994();
    return;
  }
  FUN_ram_40396994();
  if (auStack_14[0] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (cVar1 != '\0') {
    uStack_1c = 0;
    uStack_18 = 0;
    auStack_14[0] = 0;
    FUN_ram_420b54ec(6);
    uVar3 = FUN_ram_403989ea();
    iVar4 = FUN_ram_40399046(uVar3,&uStack_1c);
    uVar2 = 1;
    if (iVar4 != 1) {
      uVar2 = FUN_ram_4204a80a();
    }
    DAT_ram_3fcc4e00 = uVar2;
    DAT_ram_3fcc5204 = DAT_ram_3fcc4e00;
    FUN_ram_4039042e(uStack_18);
    return;
  }
  if ((auStack_14[0] & 1) == 0) {
    return;
  }
  FUN_ram_403925c2(100);
  return;
}

