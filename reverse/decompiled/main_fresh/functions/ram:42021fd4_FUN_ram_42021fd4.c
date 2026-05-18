
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42021fd4(int param_1,char *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iStack_dc;
  undefined1 auStack_d8 [31];
  undefined1 uStack_b9;
  undefined1 auStack_b8 [68];
  undefined1 uStack_74;
  undefined1 auStack_73 [87];
  
  uVar2 = _DAT_ram_3fcc5168;
  if (DAT_ram_3fcc516c == '\0') {
    return 0x102;
  }
  if (param_1 == 0) {
    return 0x102;
  }
  if (_DAT_ram_3fcc5164 == 0) {
    return 0x103;
  }
  iStack_dc = 0;
  iVar3 = FUN_ram_420838d4(&iStack_dc);
  if (iVar3 == 0) {
    if (iStack_dc == 1) {
      bVar1 = 1 < uVar2;
      goto LAB_ram_42022050;
    }
  }
  else {
    iStack_dc = 0;
  }
  if (1 < uVar2) {
    thunk_FUN_ram_420847b6();
    FUN_ram_420845bc();
  }
  iVar3 = FUN_ram_42084528(1);
  if (iVar3 != 0) {
    return iVar3;
  }
  bVar1 = false;
LAB_ram_42022050:
  FUN_ram_40397976(_DAT_ram_3fcc5164,3);
  _DAT_ram_3fcc5158 = 0;
  (*(code *)&SUB_ram_40010488)(&uStack_b9,0,0x99);
  FUN_ram_4039c61e(auStack_d8,param_1,0x1f);
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    FUN_ram_4039c61e(auStack_b8,param_2,0x3f);
  }
  if (param_3 != 0) {
    uStack_74 = 1;
    FUN_ram_4039c11e(auStack_73,param_3,6);
  }
  iVar3 = FUN_ram_42084b46(0,auStack_d8);
  if ((iVar3 == 0) && ((bVar1 || (iVar3 = FUN_ram_42084578(), iVar3 == 0)))) {
    FUN_ram_42021346(3);
    FUN_ram_42021358(5,0);
    iVar3 = thunk_FUN_ram_4208475e();
    if (iVar3 != 0) {
      FUN_ram_403979ba(_DAT_ram_3fcc5164,2);
      FUN_ram_42021346(1);
    }
  }
  return iVar3;
}

